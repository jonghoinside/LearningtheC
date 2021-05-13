#include <stdio.h>
#include "list.h"

void printInt(const void* pData) {
	printf("%d", *(int*)pData);
}

void printDouble(const void* pData) {
	printf("%f", *(double*)pData);
}

int main(void) {
	List list, list2;
	initList(&list, sizeof(int));
	initList(&list2, sizeof(double));
	
	int i = 4;		insertFirstNode(&list, &i);		printList(&list, printInt);
	i = 3;				insertFirstNode(&list, &i);		printList(&list, printInt);
	i = 1;				insertFirstNode(&list, &i);		printList(&list, printInt);
	
	int j = 1;
	i = 2;				insertNode(&list, &j, &i);			printList(&list, printInt);
	i = 3;				deleteNode(&list, &i);				printList(&list, printInt);
	
	double d = 4.4;	insertFirstNode(&list2, &d);		printList(&list2, printDouble);
	d = 3.3;			insertFirstNode(&list2, &d);		printList(&list2, printDouble);
	d = 1.1;			insertFirstNode(&list2, &d);		printList(&list2, printDouble);
	
	double f = 1.1;
	d = 2.2;			insertNode(&list2, &f, &d);		printList(&list2, printDouble);
	d = 3.3;			deleteNode(&list2, &d);				printList(&list2, printDouble);
	
	cleanupList(&list);
	cleanupList(&list2);
	
	return 0;
}
