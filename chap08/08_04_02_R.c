#include <stdio.h>

void main()
{
	int score = 86;
	char grade;

	if(score >= 90) grade = 'A';			//90 <= score
	else {
		if(score >= 80) grade = 'B';		//80 <= score < 90
		else {
			if(score >= 70) grade = 'C';	//70 <= score < 80
			else {
				if(score >= 60) grade = 'D';//60 <= score < 70
				else grade = 'F';			//score < 60
			}
		}
	}
	printf("당신의 점수는 %d점이고 등급은 %c입니다.\n", score, grade);
}