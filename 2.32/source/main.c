#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float num1, num2,BMI;
	printf("�п�J�����M�魫: ");
	scanf_s("%f%f", &num1, &num2);
	BMI = num2 / num1 / num1*10000;
	printf("�A��BMI�O:%.f", BMI);
	if (BMI < 18.5)
	{
		printf("----->�L��");
	}
	else if(BMI<24.9)
	{
		printf("----->�з�");
	}
	else if (BMI < 29.9)
	{
		printf("----->���L�L��");
	}
	else
	{
		printf("----->�L��");
	}
	system("pause");
	return 0;
}