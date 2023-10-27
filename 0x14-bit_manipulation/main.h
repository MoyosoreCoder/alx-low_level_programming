#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_uint(const char *b);
int _putchar(char c);
void print_binary(unsigned long int n);
unsigned long int _pow(unsigned int base, unsigned int power);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
#endif
