#include <stdio.h>
/**
*main - A program that prints the various types of keywords
*Return: always 0 on success
*/
int main(void)
{
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of int: %lu byte(s)\n", sizeof(int));
	printf("Size of long Int: %lu byte(s) \n", sizeof(long int));
	printf("Size of long long Int: %lu byte(s) \n", sizeof(long long int));
	printf("Size of float: %lu  byte(s)\n", sizeof(float));
	return (0);
}

