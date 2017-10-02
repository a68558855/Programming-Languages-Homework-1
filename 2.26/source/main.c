#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	int num3;
	printf("叫块ㄢ计: (材计材计)\n");
	scanf_s("%d%d", &num1, &num2);
	num3 = num2 % num1;
	if (num3 == 0)
	{
		printf("%d琌%d计\n",num2, num1);
	}
	else
	{
		printf("%dぃ琌%d计\n", num2, num1);
	}
	system("pause");
	return 0;
}