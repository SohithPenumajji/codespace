#include <stdio.h>
#include <stdlib.h>

int main()
{
	enum Company { GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT };
	enum Company xerox = XEROX;
	enum Company google = GOOGLE;
	enum Company ebay = EBAY;
	
	printf("The value of xerox: %d\n", xerox);
	printf("The value of google: %d\n", google);
	printf("The value of ebay: %d\n", ebay);
  
    return 0; 
}