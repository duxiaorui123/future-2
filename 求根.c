/*
	求一元二次方程的解！
*/
# include <stdio.h>
# include <math.h>

int main()
{
	double a, b, c, x1, x2;
	
	printf("请输入三个数：");               //这三个数之间用空格隔开
	scanf_s("%lf %lf %lf", &a, &b, &c);     //依次输入的这三个数分别是一元二次方程的系数

	double dealt = b * b - 4 * a * c;

	x1 = (-b + sqrt(dealt)) / (2 * a);
	x2 = (-b - sqrt(dealt)) / (2 * a);

	if (a != 0)
	{
		if (dealt > 0)
			printf("该方程的两根为：%lf\t%lf\t", x1, x2);
		else if (dealt == 0)
		{
			x1 = (-b) / (2 * a);
			x2 = x1;
			printf("该方程组有一个解为：%lf\n", x1);
		}
		else
			printf("该方程组无解！\n");
	}
	else 
	{
		x1 = (-c) / b;
		x2 = x1;
		printf("该方程组的解为：%lf", x1);
	}

	return 0;
}