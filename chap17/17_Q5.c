#include <stdio.h>

#define MAX_DATA_COUNT 30

void Push(short *ap_data_list, short *ap_top)
{
	// ������ �� ���� �� �̻� �����͸� ������ �� ���� ���
	if (*ap_top >= MAX_DATA_COUNT - 1) {
		printf("���ÿ� �����͸� Push �� ������ �����ϴ�.\n");
		return;
	}
	short data;
	printf("Input data : ");
	scanf("%hd", &data);

	(*ap_top)++;
	ap_data_list[*ap_top] = data;
}

void Pop(short *ap_data_list, short *ap_top)
{
	// ������ ����ִ� ���
	if (*ap_top == -1) printf("Pop �� �����Ͱ� �������� �ʽ��ϴ�.\n");

	short data = ap_data_list[*ap_top];
	(*ap_top)--;

	printf("Pop Data : %hd\n", data);
}

void PrintData(short *ap_data_list, short a_top)
{
	printf("----[ Stack Data ]----\n");
	for (int i = 0; i <= a_top; i++) {
		printf(" %2d��° - %hd\n", i + 1, ap_data_list[i]);
	}
	printf("----------------------\n\n");
}

void main()
{
	short data_list[MAX_DATA_COUNT];
	// ���ÿ��� ���� �ֱ� �߰��� �������� ��ġ(TOP)
	short top = -1;
	short menu = 0;
	
	while (1) {
		printf("--------[Menu]--------\n");
		printf(" 1. Push data\n");
		printf(" 2. Pop data\n");
		printf(" 3. Show data\n");
		printf(" 4. Exit\n");
		printf("----------------------\n\n");
		
		printf("Select menu (1~4) : ");
		scanf("%hd", &menu);
		
		if (1 == menu) Push(data_list, &top);
		else if(2 == menu) Pop(data_list, &top);
		else if (3 == menu) PrintData(data_list, top);
		else break;
	}
}
