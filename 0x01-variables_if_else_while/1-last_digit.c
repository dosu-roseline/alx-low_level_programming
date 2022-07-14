#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Determines either greater than 5, is less than 6, or is 0
 *
 * Return: always 0 (Success)
 */
int main(void)
{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("Last digitof %d is ", n);
if (n > 5) 
{
printf("greater than 5");
}
if else (n == 0) 
{
printf("0");
}
if else (n < 6 && n != 0) 
{
printf("less than 6 not 0");
}
else
{
printf("\n");
}
return (0);
}
