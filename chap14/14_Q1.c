#include <stdio.h>

void main()
{
	int num1, num2, num3;

	printf("input three integer : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("average : %f", (float)(num1 + num2 + num3) / 3);
}