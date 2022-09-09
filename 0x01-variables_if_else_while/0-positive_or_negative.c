#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <openssl/rand.h>

/* Random integer in [0, limit) */
unsigned int random_uint(unsigned int limit) {
    union {
        unsigned int i;
        unsigned char c[sizeof(unsigned int)];
    } u;

    do {
        if (!RAND_bytes(u.c, sizeof(u.c))) {
            fprintf(stderr, "Can't get random bytes!\n");
            exit(1);
        }
    } while (u.i < (-limit % limit)); /* u.i < (2**size % limit) */
    return u.i % limit;
}

/* Random double in [0.0, 1.0) */
double random_double() {
    union {
        uint64_t i;
           unsigned char c[sizeof(uint64_t)];
    } u;

    if (!RAND_bytes(u.c, sizeof(u.c))) {
        fprintf(stderr, "Can't get random bytes!\n");
        exit(1);
    }
    /* 53 bits / 2**53 */
    return (u.i >> 11) * (1.0/9007199254740992.0);
}

int main() {
    printf("Dice: %d\n", (int)(random_uint(6) + 1));
    printf("Double: %f\n", random_double());
    return 0;
}
