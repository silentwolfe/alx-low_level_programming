#include <stdio.h>
/**
 * main - A program that prints the various types on the computer
 * Return: 0 (success)
 */

int main(void)
{
char a;
int b;
long int c;
long long d;
float e;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of an long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of an float: %lu byte(s)\n", (unsigned long)sizeof(e));
return (0);
}
