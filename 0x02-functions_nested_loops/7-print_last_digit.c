#include "main.h"
/**
 * print_last_digit - prints the last digit of a numer.
 * @n: digit to find the last place of.
 * Return: The last digit.
 * int print_last_digit(int n)
{
if (n < 0)
n = n * -1;
_putchar((n % 10) + '0');
return (n % 10);
}*/
int print_last_digit(int nld)
{

		int pld;



			pld = (nld % 10);



				if (pld < 0)

						{

									pld = (-1 * pld);

										}



					_putchar(pld + '0');

						return (pld);

}
