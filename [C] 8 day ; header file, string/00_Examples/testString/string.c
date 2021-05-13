#include <stdio.h>

int my_strlen (const char *str) {
	int count = 0;
	while (*str++ )
		++count;
		
	return count;
}

void my_strcpy (char *des, const char *src)
{
	while (*des++ = *src++)
		;
//	*des = '\0';
}

void my_strcat (char *des, const char *src) {
	my_strcpy(des + my_strlen(des), src);
}

int my_strcmp (const char *s1, const char *s2) {

	if (my_strlen(s1) != my_strlen(s2))
		return -1;
	
	while (*s2 )
		if (*s1++ != *s2++)
			break;
	
	return *s1;
}
