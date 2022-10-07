#include "main.h"
#include <stdio.h>
int main(void)
{
	int i, b, c, d;
       	float e;
	i = add(2, 1);
	b = mul(2, 1);
	c = mod(2, 1);
	d = sub(2, 1);
	e = div(2, 1);
	printf("sum = %d and mul =  %d and mod = %d and sub = %d div = %f\n", i ,b ,c ,d ,e);
	return (0);
}
