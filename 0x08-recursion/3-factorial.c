#include "main.h"
/**
 *factorial - function starting here
 *@n: integer
 *Return: integer
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}

}
