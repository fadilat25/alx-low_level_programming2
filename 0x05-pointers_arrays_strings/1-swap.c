#include "main.h"
/**
 *swap_int - swaps the two integers
 *@a: first integer
 *@b: second integer
 */
void swap_int(int *a, int *b)
{
int i;
i = *a;
*a = *b;
*b = i;
}
