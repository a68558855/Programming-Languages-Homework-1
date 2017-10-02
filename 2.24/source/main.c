#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	printf("叫块计 \n");
	scanf_s("%d", &num1);
	num2 = num1 % 2;
	if (num2 == 0)
	{
		printf("%d琌案计\n", num1);
	}
	if (num2 == 1)
	{
		printf("%d琌计\n", num1);
	}
		system("pause");
	return 0;
}
	