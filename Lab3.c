#include <locale.h>
#include <stdio.h>
#include <math.h>
#define D 2.54 
#define U 2.32166
#define G 9.8
void main()
{
	// ������� 1
	int num, num2;
	setlocale(LC_ALL, "RUS");
	puts("������� �����");
	scanf_s("%d", &num);
	puts("������� ����� �");
	puts("������� �����");
	scanf_s("%d", &num2);
	puts("������� ����� �");
	printf("%d + %d = %d\n", num, num2, num + num2);
	printf("%d - %d = %d\n", num, num2, num - num2);
	printf("%1d * %d = %d\n", num, num2, num * num2);
	printf("%d / %d = %d, ������� = %d\n", num, num2, num / num2, num % num2);
	// ������� 2
	int dym;
	float result;
	puts("������� �������� ��� �������");
	scanf_s("%d", &dym);
	result = D * dym;
	printf("%d ������ - ��� %.1f c�\n", dym, result);
	int spdym;
	float result2;
	puts("������� �������� ��� �������");
	scanf_s("%d", &spdym);
	result2 = U * spdym;
	printf("%d ��������� ������ - ��� %.1f ��\n", spdym, result2);
	// ������� 3
	float a, b;
	puts("������� �����");
	scanf_s("%f", &a);
	puts("������� ����� �");
	puts("������� �����");
	scanf_s("%f", &b);
	puts("������� ����� b");
	puts("----------------------------- \n");
	puts("| a*b\t | a+b\t | a-b\t|\n");
	puts("-----------------------------\n");
	printf("| %2.f*%2.f\t| %2.f+%2.f\t| %2.f-%2.f\t|\n", a, b, a, b, a, b);
	puts("-----------------------------\n");
	printf("| %3.f \t|  %3.f\t| %3.f\t|\n", a * b, a + b, a - b);
	puts("-----------------------------\n");
	// �������� �������
	float ms1,ms2, rst;
	float result3;
	puts("������� ����� ������� ����");
	scanf_s("%f", &ms1);
	puts("������� ����� ������� ����");
	puts("������� ����� ������� ����");
	scanf_s("%f", &ms2);
	puts("������� ����� ������� ����");
	puts("������� ���������� ����� ������");
	scanf_s("%f", &rst);
	puts("���� ���������� ����� ������ �����:");
	result3 =  G * ((ms1 * ms2)/(pow(rst,2)));
	printf("F = %.2f", result3);





}
