#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _is_zero - determines if any number of argv is zero
 * @argv: arguments vector
 * Return: no return.
 */
void _is_zero(char *argv[])
{
        int i, j1 = 1, j2 = 1;

        for (i = 0; argv[1][i]; i++)
                if (argv[1][i] != '0')
                {
                        j1 = 0;
                        break;
                }
        for (i = 0; argv[2][i]; i++)
                if (argv[2][i] != '0')
                {
                        j2 = 0;
                        break;
                }

        if (j1 == 1 || j2 == 1)
        {
                printf("0\n");
                exit(0);
        }
}
/**
 * _in_array - allocates an amount of memry and initialize it with 0
 * @ar: array
 * @lar: length of the array
 * Return: pointer of a char array.
 */
char *_in_array(char *ar, int lar)
{
        int i = 0;

        for (i = 0; i < lar; i++)
                ar[i] = '0';
        ar[lar] = '\0';
        return (ar);
}
/**
 * _num_length - determines length of a given number
 * and checks if the number is in 10 base
 * @argv: arguments vector
 * @n: row of the array
 * Return: length of the number
 */
int _num_length(char *argv[], int n)
{
        int l;

        for (l = 0; argv[n][l]; l++)
                if (!isdigit(argv[n][l]))
                {
                        printf("Error\n");
                        exit(98);
                }
        return (l);
}
/**
 * main - use all the funtions for multiplies two positive numbers
 * @argc: number of arguments (it has to be two)
 * @argv: arguments vector
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
        int l1, l2, lmul, mul, mull, i, j, k, ca;
        char *nout;

        if (argc != 3)
                printf("Error\n"), exit(98);
        l1 = _num_length(argv, 1), l2 = _num_length(argv, 2);
        _is_zero(argv), lmul = l1 + l2, nout = malloc(lmul + 1);
        if (nout == NULL)
                printf("Error\n"), exit(98);
        nout = _in_array(nout, lmul);
        k = lmul - 1, i = l1 - 1, j = l2 - 1, ca = mull = 0;
        for (; k >= 0; k--, i--)
        {
                if (i < 0)
                {
                        if (mull > 0)
                        {
                                mul = (nout[k] - '0') + mull;
                                if (mul > 9)
                                        nout[k - 1] = (mul / 10) + '0';
                                nout[k] = (mul % 10) + '0';
                        }
                        i = l1 - 1, j--, mull = 0, ca++, k = lmul - (1 + ca);
                }
                if (j < 0)
                {
                        if (nout[0] != '0')
                                break;
                        lmul--;
                        free(nout), nout = malloc(lmul + 1), nout = _in_array(nout, lmul);
                        k = lmul - 1, i = l1 - 1, j = l2 - 1, ca = mull = 0;
                }
                if (j >= 0)
                {
                        mul = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (nout[k] - '0') + mull;
                        mull = mul / 10, nout[k] = (mul % 10) + '0';
                }
        }
        printf("%s\n", nout);
        return (0);

}
