# include "main.h"
/**
 * print_sign -function that print the sign of a number ..
 * @n: the input number to check
 * Return: int,
 */

int print _sign(int n)
{
	if (n > 0)
	{ 
		_putchsr (43);
		return (1)
	}
	else if ( n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar (48);
		return (0)
	}
}

