#include <stdio.h>

void main()
{
	int num;
	FILE *p_file = fopen("tipssoft.txt", "rt");	//�б� ���� �ؽ�Ʈ ������ ������
	if(NULL != p_file) {	//���� ���⿡ ������ ���
		while(EOF != fscanf(p_file, "%d", &num)) {
			//���Ͽ��� ���� ���� ���� ȭ�鿡 �����
			printf("%d\n", num);
		}
		fclose(p_file);	//������ ����
	}
}