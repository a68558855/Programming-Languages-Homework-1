#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	printf("請輸入一個數字 \n");
	scanf_s("%d", &num1);
	num2 = num1 % 2;
	if (num2 == 0)
	{
		printf("%d是偶數\n", num1);
	}
	if (num2 == 1)
	{
		printf("%d是奇數\n", num1);
	}
		system("pause");
	return 0;
}
	