#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "list.h"

void initList(List* pList, int size, int eleSize) {//void initList(List* pList) {
	pList->ptr = malloc(sizeof(Node));
	assert(pList->ptr );

	pList->ptr->eleSize = eleSize;
	pList->ptr->size = size;

	pList->ptr->pdata = (int*)-1;
	pList->ptr->next = NULL;
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

void printList(const List* pList, void (*fp)(void*)) {
	Node *p;
	p = pList->ptr->next;

	printf("[");
	while (p ) {
		fp(p->pdata);
		printf((p->next )?",":"");
		p = p->next;
	}
	printf("]\n");
}

void insertFirstNode(List* pList, void* pData) { //void insertFirstNode(List* pList, int pData) {
	Node* p = pList->ptr;
	Node* tmp = malloc(sizeof(Node));

	assert(tmp );

	tmp->pdata = pData;

	tmp->next = pList->ptr->next;
	pList->ptr->next = tmp;
}

void insertNode(List* pList, void* pPrevData, void* pData) { //void insertNode(List* pList, int prevData, int pData) {
	Node* p = pList->ptr->next;

	while (p ) {
		if(memcmp(p->pdata, pPrevData, p->eleSize) == 0)
			break;
		p = p-> next;
	}
	if (p ) {
		Node *tmp = malloc(sizeof(Node));
		assert(tmp );
		tmp->pdata = pData;
		tmp->next = p->next;
		p->next = tmp;
	}
}

void deleteNode(List* pList, void* pData) { //void deleteNode(List* pList, int pData) {
	Node* p1 = pList->ptr->next;
	Node* p2 = pList->ptr;

	while(p1 ) {
		if (memcmp(p1->pdata, pData, p1->eleSize) == 0)
			break;

		p1 = p1->next;
		p2 = p2->next;
	}

	if (p1 ) {
		p2->next = p1->next;
		free(p1);
	}
}
