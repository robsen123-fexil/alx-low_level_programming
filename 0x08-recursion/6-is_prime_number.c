#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
     int is_prime(signed int n, signed in c )
     {
        if (n%c == 0)
        {
            if (n==c )
                return (1);
            else 
               return (0);
        }
        return (0+is_prime_number(n, c+1));

 }
 /**
 * is_prime_number - detects if an input number is a prime number.
 * @n: input number.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
 int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}

