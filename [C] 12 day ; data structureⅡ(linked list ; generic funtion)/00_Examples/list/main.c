#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node* next;
} Node;



int main(void) {
	Node* ptr;
	ptr = malloc(sizeof(Node));
	
	ptr->data = 1;
	ptr->next = malloc(sizeof(Node));
	
	ptr->next->data = 3;
	ptr->next->next = malloc(sizeof(Node));
	
	ptr->next->next->data = 4;
//	(*(*((*ptr).next)).next).data = 5;
	ptr->next->next->next = NULL;
	
	// 삽입
	Node* tmp;
	tmp = malloc(sizeof(Node));
	tmp->data = 2;
	tmp->next = ptr->next;
	ptr->next = tmp;
	
	//제거
	tmp = ptr->next->next;
	ptr->next->next = tmp->next;
	free(tmp);
	
	//순회
	Node* p = ptr;
	while(p != NULL) {
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
	
	// free
	p = ptr;
	while (p ) {
		tmp = p;
		p = p->next;
		free(tmp);
	}
	
	return 0;
}
