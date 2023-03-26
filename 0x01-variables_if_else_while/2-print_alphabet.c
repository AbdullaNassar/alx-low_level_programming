#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main -> assign a random number to the variable n each time it is executed
 *and print the last digit of the number stored in the variable n
 *Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';
	while(c != 'z')
	{
		putchar(c);
		c++;
	}
	prtchar('\n');
	return (0);
}
