#include <stdio.h>

int add(int a, int b) {
	return a + b ;
}

int substract(int a, int b) {
	return a - b ;
}

int main(void) {
	int (*fp)(int, int);
	
	fp = &add;		// fp = add; 도 가능. 함수에는 &&&&&앞에 붙이는 거 의미없음.
					// 함수 이름 자체가 주소값이기 때문에
	int re;
	re = (*fp)(4, 3);		//	re = fp(4, 3); 도 가능
	printf("re : %d\n", re);
	
	fp = &substract;
	re = (*fp)(4, 3);
	printf("re : %d\n", re);
	
	return 0;
}
