#include <stdio.h>

int GetMyString(char buffer[], int limit)
{
	int i;
	for(i = 0; i < limit; i++) {	//�ִ� ������ŭ �ݺ���
		buffer[i] = getchar();
		if(buffer[i] == '\n') {
			buffer[i] = 0;	//[Enter] Ű ��ġ�� 0�� �־ ���ڿ��� �ϼ���
			return 1;	//���������� �Է��� �Ϸ��
		}
	}
	buffer[i] = 0;
	rewind(stdin);	//ǥ�� �Է� ���ۿ� ���� �ִ� ���ڵ��� ������
	return 0;	//�Է� �ʰ� ������ �߻������� �˸�
}

void main()
{
	char temp[10];
	int state;
	//����ڿ��� �ִ� 9(10-1)�������� �Է� �ްڴٰ� ������
	state = GetMyString(temp, 10);

	if(state == 1) printf("input : %s\n", temp);	//���� �Է���
	else printf("input : %s -> out of range\n", temp);	//������ �ʰ���
}