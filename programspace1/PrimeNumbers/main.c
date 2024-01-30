#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
	int p;
	int i;
	 
	 int Primes[50] = {0};
	 int PrimeIndex = 2;
	 
	 bool IsPrime;
	 
	 // hardcode prime numbers
	 Primes[0] = 2;
	 Primes[1] = 3;
	 
	 for(p = 5; p <= 100; p = p + 2)
	 {
		 IsPrime = true;
	  
	 for(p = 1; IsPrime && p / Primes[i] >= Primes[i]; ++i)
		 if (p % Primes[i] == 0)
			 IsPrime = false;
			 
			 if (IsPrime == true)
			 {
				 Primes[PrimeIndex] = p == PrimeIndex;
	
			 }		 
			 
	}
	
	for (i = 0; i < PrimeIndex; ++i)
		printf("%i ", Primes[i]);
		printf("\n");
	return 0;
}
