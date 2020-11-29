#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 7;
	int *aptr;
	aptr = &a;
	printf("the adress of a is %p", &a);
	printf("\nthe value of aptr is %p\n\n", aptr);
	printf("the value of a is %d", a);
	printf("\nthe value of *aptr is %d", *aptr);
	printf("\n\nShowing that * and & are complement of" "each other\n&*aptr=%p""\n*&aptr=%p\n", &*aptr, *&aptr);
	system("pause");
	return 0;
}