#include <stdio.h>

void main()
{
	int data[7] = {6, 3, 9, 7, 2, 4, 1};
	int temp, i, j;

	printf("���� �� : ");
	for(i = 0; i < 7; i++) printf("%d ", data[i]);

	for(i = 0; i < 10; i++) {
		for(j = i + 1; j < 11; j++) {
			if(data[i] > data[j]) {
				temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		}
	}
	printf("\n���� �� : ");
	for(i = 0; i < 7; i++) printf("%d ", data[i]);
}