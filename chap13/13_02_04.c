#include <stdio.h>
//temp ������ �̿��Ͽ� a�� b�� ���� ���� �ٲٴ� �Լ�
void Swap(int *pa, int *pb)
{
	int temp = *pa;		//*pa(start) = 96, *pb(end) = 5
	*pa = *pb;			//*pa(start) = 5, *pb(end) = 5
	*pb = temp;			//*pa(start) = 5, *pb(end) = 96
}

void main()
{
	int start = 96, end = 5;

	printf("before : start = %d, end = %d\n", start, end);
	if(start > end) {
		Swap(&start, &end);	//start�� end�� ���� �ٲٱ� ���ؼ� Swap �Լ��� ȣ����
	}
	printf("after : start = %d, end = %d\n", start, end);
}