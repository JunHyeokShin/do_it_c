#include <stdio.h>

typedef struct People
{
	char name[12];
	unsigned short int age;
	float height;
	float weight;
} Person;

void main()
{
	Person data;	//Person �ڷ������� data ������ ������

	printf("������� ������ �Է��ϼ���\n");
	printf("�̸� : ");
	scanf("%s", data.name);
	printf("���� : ");
	scanf("%hu", &data.age);
	printf("Ű : ");
	scanf("%f", &data.height);
	printf("������ : ");
	scanf("%f", &data.weight);

	printf("\n�Է��� ������ ������ �����ϴ�.\n");
	//Ű�� �����Դ� �Ҽ��� ù° �ڸ������� �����ֱ� ���� %.1f�������� �����
	printf("%s : %d��, %1.fcm, %.1fkg\n", data.name, data.age, data.height, data.weight);
}