#include <stdio.h>
#include "list.h"

void fprintint(void* a) {
	printf(" %d ", *(int*)a);
}

void fprintdouble(void* a) {
	printf(" %.1f ", *(double*)a);
}

int main(void) {
	List list1, list2;
	initList(&list1, 5, sizeof(int));
	initList(&list2, 5, sizeof(double));

	int i, j;
	
	i = 4;					insertFirstNode(&list1, &i);		printList(&list1, fprintint);
	i = 3;					insertFirstNode(&list1, &i);		printList(&list1, fprintint);
	i = 1;					insertFirstNode(&list1, &i);		printList(&list1, fprintint);
	i = 2;  j = 1;		insertNode(&list1, &j, &i);		printList(&list1, fprintint);
	i = 3;					deleteNode(&list1, &i);				printList(&list1, fprintint);
   
   double d, e;
   
	d = 4.4;				insertFirstNode(&list2, &d);		printList(&list2, fprintdouble);
	d = 3.3;				insertFirstNode(&list2, &d);		printList(&list2, fprintdouble);
	d = 1.1;				insertFirstNode(&list2, &d);		printList(&list2, fprintdouble);
	d = 2.2; e = 1.1; 	insertNode(&list2, &e, &d);		printList(&list2, fprintdouble);
	d = 3.3;				deleteNode(&list2, &d);				printList(&list2, fprintdouble);

	cleanupList(&list1);
	cleanupList(&list2);

	return 0;
}
