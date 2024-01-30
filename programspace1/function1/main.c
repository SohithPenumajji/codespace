#include <stdio.h>
#include <stdlib.h>

int gcd(int x, int y);
float AbsoluteValue(float z);
float squareroot(float a);
int main()
{
	int result = 0;
	
	float f1 = -30, f2 = 90, f3 = -20.97;
	int i1 = -813;
	float absoluteValueResult = 0.0;
	
	// testing Gcd function //
	 result = AbsoluteValue (f1);
	 printf("Result = %.2f\n", absoluteValueResult);
	 printf("f1 = %.2f\n", f1);
	 
	 result = AbsoluteValue (f2) + AbsoluteValue (f3);
	 printf("result = %.2f\n", absoluteValueResult);
	 
	 result = AbsoluteValue ( (float) i1);
	 printf("result = %.2f\n", absoluteValueResult);
	 
	 result = AbsoluteValue (i1);
	 printf("result = %.2f\n", absoluteValueResult);
	 
	 printf("%.2f\n", AbsoluteValue  (-10.0) / 4 );
	 
	 // testing gcd
	 result = gcd(30, 120);
	printf("The gcd of 30 & 120 is %d\n", result);
	
	result = gcd(90, 180);
	printf("The gcd of 90 & 180 is %d\n", result);
	
	result = gcd(120, 280);
	printf("The gcd of 120 & 280 is %d\n", result); 
	
	return 0;
}

int gcd (int x, int y)
 {
	int temp;
	while( y != 0 )
	{
		temp = x % y;
		x = y;
		y = temp;
	}
	  return x;
}

float squareroot(float a)
{
	const float epsilon = .00001;
	float guess = 1.0;
	float returnValue = 0.0;
	
	if (x < 0 )
	{
		printf("Negative argument to Squareroot.\n");
		returnvalue = -1.0;
	}
	
	if (returnValue != -1.0
	{
	while ( AbsoluteValue (guess * guess - a) >= epsilon )
		guess = ( a / guess + guess) / 2.0;
		returnValue = guess;
	}
      return returnValue;
}
float AbsoluteValue(float z)
{
	if (z < 0)
    z = -z;
		
    return z;
}