#include "main.h"

/**
 * binary_to_uint - converts a binary number to a unary
 * @b: pointer to character array
 * Return: binary num
 */

unsigned int binary_to_uint(const char *b)
{
        unsigned int n = 0;

        if (b == NULL)
                return (0);

        for (; *b != '\0'; b++)
        {
                if (*b != '0' && *b != '1')
                        return (0);

                n = n << 1;
                n += (*b - '0');
        }

        return (n);
}
