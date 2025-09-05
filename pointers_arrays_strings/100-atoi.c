#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	/* Skip non-digit characters and handle signs */
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] == '+')
		{
			sign *= 1;
		}
		i++;
	}

	/* Convert digits to integer */
	while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
	{
		/* Check for overflow */
		if (result > (2147483647 - (s[i] - '0')) / 10)
		{
			return (sign == 1 ? 2147483647 : -2147483648);
		}

		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}
