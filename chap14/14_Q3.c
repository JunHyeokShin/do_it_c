#include <stdio.h>

void main()
{
	int H_rate;
	char name[32], B_type[3];
	double weight, height;

	printf("이름, 몸무게, 키, 혈액형, 심박수를 입력하십시오 :");
	scanf("%s %lf %lf %s %d", name, &weight, &height, B_type, &H_rate);
	printf("이름 : %s, 몸무게 : %lfkg, 키: %lfcm, 혈액형 : %s형, 심박수 : %d회\n", name, weight, height, B_type, H_rate);
}