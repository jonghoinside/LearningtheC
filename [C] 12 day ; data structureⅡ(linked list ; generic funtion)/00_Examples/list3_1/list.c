#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "list.h"

void initList(List* pList, int eleSize) {
	pList->ptr = malloc(sizeof(Node));
	assert(pList->ptr );
	
//	pList->ptr->data = ???;
	pList->ptr->next = NULL;
	pList->eleSize = eleSize;
}
void cleanupList(List* pList) {
	Node *p;
	p = pList->ptr;
	
	while (p ) {
		Node* tmp = p;
		p = p->next;
		free(tmp);
	}
}

void printList(const List* pList, void (*print)(const void*)) {
	Node *p;
	p = pList->ptr->next;
	
	printf("[");
	while (p ) {
//		printf("%d", p->data);
		print(p + 1);		//		(*print)(p + 1);
		printf((p->next)?",":"");
		p = p->next;
	}
	printf("]\n");
}

void insertFirstNode(List* pList, const void* pData) {
	Node *tmp = malloc(sizeof(Node) + pList->eleSize);
	assert(tmp );
	memcpy(tmp + 1, pData, pList->eleSize);
//	tmp->data = data;
	tmp->next = pList->ptr->next;
	pList->ptr->next = tmp;
}

void insertNode(List* pList, const void* pPrevData, const void* pData) {
	Node* p = pList->ptr->next;
	while (p ) {
//		if(p->data == prevData)
		if( memcmp(pPrevData, p + 1, pList->eleSize) == 0 )
			break;
		p = p-> next;
	}
	if (p ) {
		Node *tmp = malloc(sizeof(Node));
		assert(tmp );
//		tmp->data = data;
		memcpy(tmp + 1 , pData, pList->eleSize);
		tmp->next = p->next;
		p->next = tmp;
	}
}

void deleteNode(List* pList, const void* pData) {
	Node* p1 = pList->ptr->next;
	Node* p2 = pList->ptr;
	
	while(p1 ) {
//		if (p1->data == data)
		if ( memcmp(pData, p1 +1 , pList->eleSize) == 0 )
			break;
		
		p1 = p1->next;
		p2 = p2->next;
	}
	
	if (p1 ) {
		p2->next = p1->next;
		free(p1);
	}
}
