#include "main.h"
#include <stddef.h>
/**
 * reverse_array - reverses the content of an array of integers
 * @a: string.
 * @n: string.
 * Return: reverse string.
 */
void reverse_array(int *a, int n)
{
int i, j, keep;

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j > 0; j--)
        {
            keep = *(a + j);
            *(a + j) = *(a + (j - 1));
            *(a + (j - 1)) = keep;
        }
    }

}
