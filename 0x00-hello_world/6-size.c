#include<stdio.h>

/**
 * main-Prints the size of many var types 
 * Return always 0 (sucess)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %d byte(s)\n",sizeof(a));
	printf("size of an init: %d byte(s)\n",sizeof(b));
	printf("size of a long init: %d byte(s)\n",sizeof(c));
	printf("size of a long long init: %d byte(s)\n",sizeof(d))
	printf("size of a float: %d byte(s)\n",sizeof(e))
	return(0)
}	
