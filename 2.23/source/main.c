#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	int num3;
	printf("請輸入三個數字:\n");
	scanf_s("%d%d%d",&num1,&num2,&num3);
	if (num1>num2 & num2>num3)
	{
		printf("Max=%d\tMin=%d\n", num1, num3);
	}
	if (num3 > num2 &  num2 > num1)
	{
		printf("Max=%d\tMin=%d\n", num3, num1);
	}
	if (num2 > num1 & num1 > num3)
	{
		printf("Max=%d\tMin=%d\n", num2, num3);
	}
	if (num2 > num3 &  num3 > num1)
	{
		printf("Max=%d\tMin=%d\n", num2, num1);
	}
	if (num3 > num1 & num1 > num2)
	{
		printf("Max=%d\tMin=%d\n", num3, num2);
	}
	if (num1 > num3 & num3 > num2)
	{
		printf("Max=%d\tMin=%d\n", num1, num2);
	}
	system("pause");
	return 0;

}