/*
	��һԪ���η��̵Ľ⣡
*/
# include <stdio.h>
# include <math.h>

int main()
{
	double a, b, c, x1, x2;
	
	printf("��������������");               //��������֮���ÿո����
	scanf_s("%lf %lf %lf", &a, &b, &c);     //������������������ֱ���һԪ���η��̵�ϵ��

	double dealt = b * b - 4 * a * c;

	x1 = (-b + sqrt(dealt)) / (2 * a);
	x2 = (-b - sqrt(dealt)) / (2 * a);

	if (a != 0)
	{
		if (dealt > 0)
			printf("�÷��̵�����Ϊ��%lf\t%lf\t", x1, x2);
		else if (dealt == 0)
		{
			x1 = (-b) / (2 * a);
			x2 = x1;
			printf("�÷�������һ����Ϊ��%lf\n", x1);
		}
		else
			printf("�÷������޽⣡\n");
	}
	else 
	{
		x1 = (-c) / b;
		x2 = x1;
		printf("�÷�����Ľ�Ϊ��%lf", x1);
	}

	return 0;
}