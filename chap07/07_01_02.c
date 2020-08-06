#include <stdio.h>

void main()
{
	int data1 = 5, data2 = 3;	//µÎ º¯¼öÀÇ ÃÊ±ê°ªÀ» 5¿Í 3À¸·Î ¼³Á¤ÇÔ

	int result1 = data1 + data2;	//µ¡¼À
	int result2 = data1 * data2;	//°ö¼À
	int result3 = data1 / data2;	//³ª´°¼À(¸ò)
	int result4 = data1 % data2;	//³ª´°¼À(³ª¸ÓÁö)

	printf("result : %d, %d, %d, %d\n", result1, result2, result3, result4);
}