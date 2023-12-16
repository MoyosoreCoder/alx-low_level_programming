#include <stdio.h>
/**
 * add - add two integers
 * @a: first integer
 * @b: second integer
 * Return: addition
 */
int add(int a, int b) {
    return a + b;
}
/**
 * sub - subtracts two integers
 * @a: first integer
 * @b: second integer
 * Return: subtraction
 */

int sub(int a, int b) {
    return a - b;
}
/**
 * mul - function that multiplies
 * @a: first integer
 * @b: second integer
 * Return: the multiplication
 */

int mul(int a, int b) {
    return a * b;
}
/**
 * div - function that divides two integers
 * @a: first integer
 * @b: second integer
 * Return: the division
 */

int div(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0;
    }
}
/**
 * mod - function that calculates modulus
 * @a: frist integer
 * @b: second integer
 * Return: the modulus
 */
int mod(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        printf("Error: Modulo by zero\n");
        return 0;
    }
}
