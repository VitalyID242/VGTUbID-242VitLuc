#include <locale.h>
#include <stdio.h>
#include <math.h>
#define D 2.54 
#define U 2.32166
#define G 9.8
void main()
{
	// задание 1
	int num, num2;
	setlocale(LC_ALL, "RUS");
	puts("¬ведите число");
	scanf_s("%d", &num);
	puts("¬ведено число ј");
	puts("¬ведите число");
	scanf_s("%d", &num2);
	puts("¬ведено число ¬");
	printf("%d + %d = %d\n", num, num2, num + num2);
	printf("%d - %d = %d\n", num, num2, num - num2);
	printf("%1d * %d = %d\n", num, num2, num * num2);
	printf("%d / %d = %d, остаток = %d\n", num, num2, num / num2, num % num2);
	// задание 2
	int dym;
	float result;
	puts("¬ведите значение дл€ расчета");
	scanf_s("%d", &dym);
	result = D * dym;
	printf("%d дюймов - это %.1f cм\n", dym, result);
	int spdym;
	float result2;
	puts("¬ведите значение дл€ расчета");
	scanf_s("%d", &spdym);
	result2 = U * spdym;
	printf("%d испанских дюймов - это %.1f см\n", spdym, result2);
	// задание 3
	float a, b;
	puts("¬ведите число");
	scanf_s("%f", &a);
	puts("¬ведено число а");
	puts("¬ведите число");
	scanf_s("%f", &b);
	puts("¬ведено число b");
	puts("----------------------------- \n");
	puts("| a*b\t | a+b\t | a-b\t|\n");
	puts("-----------------------------\n");
	printf("| %2.f*%2.f\t| %2.f+%2.f\t| %2.f-%2.f\t|\n", a, b, a, b, a, b);
	puts("-----------------------------\n");
	printf("| %3.f \t|  %3.f\t| %3.f\t|\n", a * b, a + b, a - b);
	puts("-----------------------------\n");
	// домашнее задание
	float ms1,ms2, rst;
	float result3;
	puts("¬ведите массу первого тела");
	scanf_s("%f", &ms1);
	puts("¬ведена масса первого тела");
	puts("¬ведите массу второго тела");
	scanf_s("%f", &ms2);
	puts("¬ведена масса второго тела");
	puts("¬ведите рассто€ние между телами");
	scanf_s("%f", &rst);
	puts("—ила прит€жени€ между телами равна:");
	result3 =  G * ((ms1 * ms2)/(pow(rst,2)));
	printf("F = %.2f", result3);





}
