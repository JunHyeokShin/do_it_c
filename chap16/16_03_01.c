#include <stdio.h>
#include <malloc.h>

void main()
{
	char *p_name;
	p_name = (char *)malloc(32);
	if(p_name != NULL) {
		//�޸� �Ҵ翡 ������ ���
		printf("Your name : ");
		gets(p_name);	//�̸��� �Է� ����

		printf("Hi~ %s\n", p_name);		//�Է� ���� �̸��� �����
		free(p_name);
	} else {
		//�޸� �Ҵ翡 ������ ���
		printf("Memory allocation error!!");
	}
}