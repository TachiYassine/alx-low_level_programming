#include <stdio.h>
/**
* main - Entry point
*
* Description : write C program that print size of various types of data
*
* Return : Always 0 (Success)
*/
int main(void)
{
printf("Size of a char is %d bytes\n", sizeof(char));
printf("Size of a int is %d bytes\n", sizeof(int));
printf("Size of a long is %d bytes\n", sizeof(long));
printf("Size of a long long int is %d bytes\n", sizeof(long long int));
printf("Size of a float is %d bytes\n", sizeof(float));
return (0);
}
