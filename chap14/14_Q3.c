#include <stdio.h>

void main()
{
	int H_rate;
	char name[32], B_type[3];
	double weight, height;

	printf("�̸�, ������, Ű, ������, �ɹڼ��� �Է��Ͻʽÿ� :");
	scanf("%s %lf %lf %s %d", name, &weight, &height, B_type, &H_rate);
	printf("�̸� : %s, ������ : %lfkg, Ű: %lfcm, ������ : %s��, �ɹڼ� : %dȸ\n", name, weight, height, B_type, H_rate);
}