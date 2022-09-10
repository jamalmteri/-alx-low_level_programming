#include <stdlib.h>
#include <time.h>
#include <stdio.#include <stdint.h>

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
			    
			            unsigned char c[sizeof(uint64_t)];h>
/**
* main - print if the number is positive, zero, or negative
*
*Description: using the main function
*this program prints "programming is positive, zero, or negative
*Return: 0
*/
int main(void)
{
int n;

srand(time(0);
n = rand() - RAND_MAX / 2;
 /* your code goes there */
if (n > 0)
{
        printf("%i is positive\n", n);
}
else if (n ==0)
{       
        printf("%i is zero\n", n);
}
else if (n < 0)
{
        printf("%i is positive\n", n);

}
return (0);
}
