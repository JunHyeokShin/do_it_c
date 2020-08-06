#include <stdio.h>
unsigned char ResetBit(unsigned char dest_data, unsigned char bit_num)
{
	//1����Ʈ ������ ��Ʈ �̵��� 0~7���� ������
	if(bit_num < 8) dest_data = dest_data & ~(0x01 << bit_num);
	//����� ���� ��ȯ��
	return dest_data;
}

void main()
{
	unsigned char lamp_state = 0x7F;		//16���� 0x7F�� 2���� 0111 1111
	printf("%X->", lamp_state);				//���� �� ���� �����
	//lamp_state������ 3�� ��Ʈ�� 0���� ������
	lamp_state = ResetBit(lamp_state, 3);	//16���� 0x77�� 2���� 0111 0111
	printf("%X\n", lamp_state);				//���� �� ���� �����
}