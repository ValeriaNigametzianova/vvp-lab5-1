#include<stdio.h>
#include<math.h>
#include<locale.h>

float L(int a, int b,int c, int d)
{
	float y;
	y =(float) sqrt(pow(b - a, 2) + pow(d - c, 2));
	return y;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	int x1, x2, y1, y2;
	float l;
	printf("Введите координаты точки А: ");
	scanf_s("%d%d" , &x1, &y1);
	printf("Введите координаты точки B: ");
	scanf_s("%d%d", &x2, &y2);
	l = L(x1, x2, y1, y2);
	printf("Расстояние между точками A и B равно %lf", l);
	return 0;
}