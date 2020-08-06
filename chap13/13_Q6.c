#include <stdio.h>

void main()
{
	char a = 0x12, b = 0x34;
	short c = 0x5678;
	int t;

	char *p = (char *)&t;
	*(short *)p = c;
	*(p + 2) = b;
	*(p + 3) = a;

	printf("t : 0x%x\n", t);
}