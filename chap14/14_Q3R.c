#include <stdio.h>

void main()
{
	char name[32], blood_group;
	double weight, height;
	int heart_rate;

	printf("User Data : ");
	scanf("%s %lf %lf %c %d", name, &weight, &height, &blood_group, &heart_rate);
	printf("�̸� : %s, ������ : %.1fkg, Ű : %.1fcm, ������ : %c��, �ɹڼ� : %dȸ\n", name, weight, height, blood_group, heart_rate);
}