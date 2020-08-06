#include <stdio.h>
#include <malloc.h>

typedef struct node
{
	int korean;
	int english;
	int math;
	int total;
	char name[16];
	struct node *p_next;
} NODE;

void InputGrade(NODE **pp_head, NODE **pp_tail, unsigned short *ap_count)
{
	NODE *p_node = (NODE *)malloc(sizeof(NODE)), *p_temp_node, *p_prev_node;

	printf("\n\n%d 번째 학생 이름 : ", *ap_count + 1);
	scanf("%s", p_node->name);

	printf("국어 점수 : ");
	scanf("%d", &p_node->korean);

	printf("영어 점수 : ");
	scanf("%d", &p_node->english);

	printf("수학 점수 : ");
	scanf("%d", &p_node->math);

	p_node->total = p_node->korean + p_node->english + p_node->math;

	p_temp_node = *pp_head;
	p_prev_node = NULL;

	while(p_temp_node != NULL && p_node->total < p_temp_node->total) {
		p_prev_node = p_temp_node;
		p_temp_node = p_temp_node->p_next;
	}

	if(*pp_head == NULL) {
		*pp_head = p_node;
		*pp_tail = *pp_head;
		(*pp_tail)->p_next = NULL;
	} else if(p_temp_node == *pp_head) {
		p_node->p_next = *pp_head;
		*pp_head = p_node;
	} else if(p_temp_node == NULL) {
		(*pp_tail)->p_next = p_node;
		*pp_tail = (*pp_tail)->p_next;
		(*pp_tail)->p_next = NULL;
	} else {
		p_node->p_next = p_prev_node->p_next;
		p_prev_node->p_next = p_node;
	}
	(*ap_count)++;
}

void PrintGrade(NODE **pp_head)
{
	printf("\n\n-------------------------------------\n");
	printf(" 이름  국어 영어 수학 총점 평균 등수\n");
	printf("-------------------------------------\n");

	NODE *p_node = *pp_head;
	char rank = 1;

	while(p_node != NULL) {
		printf("%s %3d  %3d  %3d  %3d  %3d   %d등\n", p_node->name, p_node->korean, p_node->english, p_node->math, p_node->total, p_node->total / 3, rank);
		p_node = p_node->p_next;
		rank++;
	}
}

void DeleteAllNode(NODE *p_head)
{
	NODE *p_node;
	while(p_head != NULL) {
		p_node = p_head;
		p_head = p_head->p_next;
		free(p_node);
	}
}

void main()
{
	NODE *p_head = NULL, *p_tail = NULL;
	unsigned short count = 0;
	short menu;

	while(1) {
		printf("\n\n[Menu]\n");
		printf("1. 성적 입력\n");
		printf("2. 성적 확인\n");
		printf("3. 종료\n");
		printf("-----------\n");
		printf("선택(1~ 3) : ");
		scanf("%hd", &menu);

		if(1 == menu) InputGrade(&p_head, &p_tail, &count);
		else if(2 == menu) PrintGrade(&p_head);
		else if(3 == menu) break;
	}
	DeleteAllNode(p_head);
}