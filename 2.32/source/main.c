#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float num1, num2,BMI;
	printf("請輸入身高和體重: ");
	scanf_s("%f%f", &num1, &num2);
	BMI = num2 / num1 / num1*10000;
	printf("你的BMI是:%.f", BMI);
	if (BMI < 18.5)
	{
		printf("----->過輕");
	}
	else if(BMI<24.9)
	{
		printf("----->標準");
	}
	else if (BMI < 29.9)
	{
		printf("----->輕微過重");
	}
	else
	{
		printf("----->過重");
	}
	system("pause");
	return 0;
}