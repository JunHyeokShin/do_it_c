#include <stdio.h>

void main()
{
	char temp[64];	//���Ͽ��� ���ڿ��� �Է� ���� �迭 ����
	FILE *p_file = fopen("tips.txt", "rt");	//�б� ���� �ؽ�Ʈ ���� ������
	if(NULL != p_file) {	//���� ���⿡ ������ ���
		while(EOF != fscanf(p_file, "%s", temp)) {
			//���Ͽ��� ���� ���ڿ��� ȭ�鿡 �����
			printf("%s\n", temp);
		}
		fclose(p_file);	//������ ����
	}
}