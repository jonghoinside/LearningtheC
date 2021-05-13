#include <stdio.h>

int main(void)
{
	int fahr;
	
	fahr = 100;
	
	int celsius1000 = 1000*5*(fahr-32)/9;
	
	printf("celsius1000: %d\n", celsius1000);
	
	int left = celsius1000 / 1000;
	int right = (celsius1000 % 1000 + 5) / 10;
	
//	int left = 5*(fahr-32)/9;
//	int right = (1000*5*(fahr-32)/9 - left*1000 + 5)/10;

	
	printf("fahr : %d  --->  celsius : %d.%d\n", fahr, left, right);
	
	/*
	int fahr;
	int celsius0;
	int celsius1;
	int celsius2;
	int celsius3;
	int celsius4;
	
	fahr = 100;
	
	celsius0 = 5*(fahr-32)/9;
	celsius1 = 10*5*(fahr-32)/9 - celsius0*10;
	celsius2 = 100*5*(fahr-32)/9 - celsius0*100 - celsius1*10;
	celsius3 = 1000*5*(fahr-32)/9 - celsius0*1000 - celsius1*100 - celsius2*10;
	celsius4 = celsius3/5;
	
	printf("fahr : %d  --->  celsius : %d.%d%d\n", fahr, celsius0, celsius1, celsius2+celsius4);
	
	printf("celsius0 : %d\n", celsius0);
	printf("celsius1 : %d\n", celsius1);
	printf("celsius2 : %d\n", celsius2);
	printf("celsius3 : %d\n", celsius3);
	*/
	return 0;
}
