#include "main.h"
/**
 * factorial - gets factorial of n
 * @n: integer
 * Return: factorial
 */

int factorial(int n)
{
	if (n == 0) /*Base condition*/

		return (1);

	else if (n < 0) /*Base condition*/
		return (-1);
	else
		return (n * factorial(n - 1)); /*Recursive call*/

}
