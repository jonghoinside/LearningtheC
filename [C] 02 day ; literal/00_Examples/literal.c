#include <stdio.h>

int main(void){
	
	printf("%d %d %d\n", 100, 0144, 0x64);
	
	printf("%d 0%o 0x%x\n", 100, 100, 100);				// decimal, octal, hexa-decimal
	
	printf("%d %d %d\n", 'A', 'a', '0');
//	printf("%d %d %d\n", 65, 97, 48);
	
//	printf("%c %c %c\n", 65, 97, 48);					//	character
	printf("%c %c %c\n", 'A', 'a', '0');
	
	printf("%c %c %c\n", 'A', 'A' + 1, 'A' + 2);
	
	printf("%lldLL\n", 10000000000LL);
	
	printf("%f %f\n",3.14, 2.718F);						// floating-point
	
	printf("%s\n", "ABCD");								// string
	
	return 0;
}
