#include<stdio.h>
#include<stdlib.h>

int callbyvalue(int n);
int main()
{
	int number = 5;
	printf("thr origin value is %d", number);
	number = callbyvalue(number);
	printf("\nthe new value is %d\n", number);
	system("pause");
	return 0;
}
int callbyvalue(int n)
{
	return n * n*n;
}