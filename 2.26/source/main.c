#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	int num3;
	printf("�п�J��ӼƦr: (�ĤG�ӼƤj��Ĥ@�Ӽ�)\n");
	scanf_s("%d%d", &num1, &num2);
	num3 = num2 % num1;
	if (num3 == 0)
	{
		printf("%d�O%d������\n",num2, num1);
	}
	else
	{
		printf("%d���O%d������\n", num2, num1);
	}
	system("pause");
	return 0;
}