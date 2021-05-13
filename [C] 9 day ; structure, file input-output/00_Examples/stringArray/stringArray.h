#ifndef STRING_ARRAY_H
#define STRING_ARRAY_H

void printStringArray(const char (*strArray)[20] , int size);
// *strArray[20] -> 이렇게 되면 대괄호 안에 있는 20은 의미가 없어지므로 *strArray[]과 같아진다.
//	(*strArray)[20] 으로 써야 (strArray[])[20]으로 인식될 수 있다.
void printStirngArray2(const char **strArray, int size);

#endif
