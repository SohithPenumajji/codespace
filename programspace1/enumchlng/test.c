#include <stdio.h>

int main()
{
	enum Company { GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT };
	enum Company xerox = XEROX;
	enum Company google = GOOGLE;
	enum Company ebay = EBAY;
	
	printf("the value of xerox: %d", XEROX);
	printf("the value of google: %d", GOOGLE);
	printf("the value of ebay: %d", EBAY);
 
	
	return 0;
}