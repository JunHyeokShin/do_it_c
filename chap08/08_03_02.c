#include <stdio.h>

void main()
{
	int score = 92;		//명령문1-1
	char grade;			//명령문1-2
	if(score >= 90) {
		grade = 'A';	//명령문2
		printf("점수는 %d이고 등급은 %c입니다.\n", score, grade);	//명령문3
	} else {
		grade = 'B';	//명령문4
		printf("점수는 %d이고 등급은 %c입니다.\n", score, grade);	//명령문5
	}
	printf("작업 종료\n");	//명령문6
}