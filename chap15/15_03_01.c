#include <stdio.h>
void main()
{
	char data[5] = {1, 2, 3, 4, 5};
	int result = 0, i;	//�ջ꿡 ����� result ������ 0���� �ʱ�ȭ��
	char *p = data;		//data �迭�� ���� ��ġ�� ������ ���� p�� ������

	//5�� �ݺ��ϸ鼭 ������ ���� p�� ����Ͽ� �迭�� �� ��Ҹ� result ������ �ջ���
	for(i = 0; i < 5; i++) {
		result = result + *p;	//������ ���� p�� ����Ű�� ����� ���� result�� �ջ���
		p++;	//data �迭�� ���� �׸����� �ּҸ� �̵� : data[0] -> data[1] -> ...
	}
	//�ջ��� ��� ���� �����
	printf("data �迭�� �� ����� ���� %d�Դϴ�.\n", result);
}