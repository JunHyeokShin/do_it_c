#include <stdio.h>
//step에 전당된 숫자에 해당하는 단을 출력하는 함수
void ShowMultiplication(int step)
{
	int i;
	//i 변수가 1~9까지 1씩 증가하면서 총 9번 반복함
	for(i = 1; i <= 9; i++) {
		//step * i 형식으로 출력함
		printf("%d * %d = %d\n", step, i, step * i);
	}
}

void main()
{
	//매개변수에 5를 전달하여 5단을 출력함
	ShowMultiplication(5);
}