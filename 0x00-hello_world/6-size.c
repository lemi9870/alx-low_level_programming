#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void){
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("char size: %lu bytes\n", sizeof(a));
	printf("int size: %lu bytes\n", sizeof(b));
	printf("long int size: %lu bytes\n", sizeof(c));
	printf("long long int size: %lu bytes\n", sizeof(d));
        printf("float size: %lu bytes\n", sizeof(e));
 
return (0);
}

