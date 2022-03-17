#ifndef _holberton_
#define _holberton_
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**
 * struct c - Struct c
 * @re: real part
 * @im: imaginary part
 */
typedef struct c
{

	int re;
	int im;
}
complex;

void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
double argument(complex c);
void addition(complex c1, complex c2, complex *c3);
void substraction(complex c1, complex c2, complex *c3);
void multiplication(complex c1, complex c2, complex *c3);
void division(complex c1, complex c2, complex *c3);
void complex_from_mod_arg(double m, double arg, complex *c3);





#endif
