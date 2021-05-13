#ifndef LIST_H
#define LIST_H

typedef struct node {
	void* pdata;
	int eleSize;
	int size;
	struct node* next;
} Node;

typedef struct {
	Node *ptr;
} List;

void initList(List* pList, int size, int eleSize);
void cleanupList(List* pList);

void printList(const List* pList, void (*fp)(void*));

void insertFirstNode(List* pList, void* pData);
void insertNode(List* pList, void* pPrevData, void* pData);
void deleteNode(List* pList, void* pData);

#endif
