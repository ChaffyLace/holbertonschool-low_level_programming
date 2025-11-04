#include "main.h"
#include <stdio.h>

int main(void)
{
	int c3[3][3] = {
		{0, 1, 2},
		{3, 4, 5},
		{6, 7, 8}
	};
	int c5[5][5] = {
		{0, 1, 2, 3, 4},
		{10, 11, 12, 13, 14},
		{20, 21, 22, 23, 24},
		{30, 31, 32, 33, 34},
		{40, 41, 42, 43, 44}
	};

	print_diagsums((int *)c3, 3);
	print_diagsums((int *)c5, 5);
	return (0);
}
