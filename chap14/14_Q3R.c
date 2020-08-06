#include <stdio.h>

void main()
{
	char name[32], blood_group;
	double weight, height;
	int heart_rate;

	printf("User Data : ");
	scanf("%s %lf %lf %c %d", name, &weight, &height, &blood_group, &heart_rate);
	printf("이름 : %s, 몸무게 : %.1fkg, 키 : %.1fcm, 혈액형 : %c형, 심박수 : %d회\n", name, weight, height, blood_group, heart_rate);
}