#include <stdio.h>
#include <malloc.h>
void main()
{
	//���ɺ� �ο����� ������ ������ - ����ڿ��� �Է� ����
	unsigned char *p_limit_table;
	//���ɺ� ���� ����Ű�� Ƚ���� ������ 2���� ������
	unsigned char **p;
	int age, age_step, member, temp, sum;

	printf("20����� �����ؼ� �������� �� ���ΰ���? : ");
	scanf("%d", &age_step);
	//���ɺ� �ο����� ������ �޸𸮸� ����
	p_limit_table = (unsigned char *)malloc(age_step);
	p = (unsigned char **)malloc(sizeof(unsigned char *) * age_step);
	//���ɺ��� ���� ����Ű�� Ƚ���� �Է� ����
	for(age = 0; age < age_step; age++) {
		//'�� ������ ���� ����Ű�� Ƚ��'��� �����
		printf("\n%d0�� ������ ���� ����Ű�� Ƚ��\n", age + 2);
		printf("�� ���ɴ�� �� ���Դϱ�? : ");
		//�ش� ���ɿ� �Ҽӵ� �ο����� �Է� ����

		scanf("%d", &temp);
		*(p_limit_table + age) = (unsigned char)temp;
		//�Է� ���� �ο�����ŭ �޸𸮸� �Ҵ���
		*(p + age) = (unsigned char *)malloc(*(p_limit_table + age));
		//�ش� ���ɿ� �Ҽӵ� �������� ������� �Է� ����
		for(member = 0; member < *(p_limit_table + age); member++) {
			//'1th : , 2th : , ...'��� �����
			printf("%dth : ", member + 1);
			//���� ����Ű�� Ƚ���� ������ �Է� ����

			scanf("%d", &temp);
			*(*(p + age) + member) = (unsigned char)temp;
		}
	}

	printf("\n\n���ɺ� ��� ���� ����Ű�� Ƚ��\n");
	//���ɺ��� �Էµ� Ƚ���� �ջ��Ͽ� ��� ���� �����
	for(age = 0; age < age_step; age++) {
		sum = 0;
		//'20�� : , 30�� : , 40�� : '��� �����
		printf("%d0�� : ", age + 2);
		//�ش� ���ɿ� �Ҽӵ� ������� Ƚ���� �ջ���
		for(member = 0; member < *(p_limit_table + age); member++){
			sum = sum + *(*(p + age) + member);
		}
		//�ջ� ���� �ο����� ����� ����� ��
		printf("%5.2f\n", (double)sum / *(p_limit_table + age));
		//�� ���ɿ� �Ҵ��ߴ� ���� �޸𸮸� ������
		free(*(p + age));
	}
	//���� ����Ű�� Ƚ���� �����ϱ� ���ؼ� �����ߴ� �޸𸮸� ������
	free(p);
	//���ɺ� �ο����� ����ϱ� ���ؼ� ����ߴ� �޸𸮸� ������
	free(p_limit_table);
}