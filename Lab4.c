#include <locale.h>
#include <stdio.h>
#include <math.h>
int main()
{
	// задание 1
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;
	setlocale(LC_ALL, "RUS");
	printf("\n%c\n%d\n%g\n%.3lg\n", c, i, f, d);
	float v;
	printf("\nВведите значение:");
	scanf_s("%f", &v);	
	printf("%d\t%lg\n",(int)v, v - (int)v); // 1А
	printf("%x\t%d\n", (int)v, (int)v); // 1Б
	printf("%.3f\n", 1/(float)i); //1B
	// задание 2
	int a = 11;
	int b = 3;
	int x = a / b;
	float y = a / b;
	double z = a / b;
	printf("%d\n%f\n%lf\n", x, y, z);
	printf("\n%d\n%f\n%lf\n", x, (float)a/b, (double)a / b);
	int N;
	printf("\nВведите трёхзначное число:");
	scanf_s("%d", &N);
	printf("\nПоследняя цифра вашего числа:%d\n", N%10);
	printf("\nПервая цифра вашего числа:%d\n", N/100);
	printf("\nСумма чисел вашего  числа:%d\n", (N / 100)+(N % 10)+((N/10)%10));
	printf("\nВаше число наоборот:%d%d%d\n", (N % 10),((N / 10) % 10),(N / 100));
	// Домашняя работа
	int m;
	int t;
	int s;
	printf("\nВведите время в минутах:");
	scanf_s("%d", &m);
	printf("\nВведите количество столбов:");
	scanf_s("%d", &t);
	printf("\nВведите кол-во метров между столбами:");
	scanf_s("%d", &s);
	printf("\nСкорость вашего поезда:%d м/мин",(t*s)/m);






	


}