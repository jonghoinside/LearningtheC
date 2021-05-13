#include "date.h"

int main(void)
{
	Date today = {2021, 4, 16};
	
	Date birthday;
	birthday.year = 2005;
	birthday.month = 8;
	birthday.day = 2;
	
	//	Date d = today;
	//	if (today == d)
	
//	printDate(today);
//	printDate(birthday);

	printDate(&today);
	printDate(&birthday);
	
	return 0;
}
