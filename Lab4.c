#include <locale.h>
#include <stdio.h>
#include <math.h>
int main()
{
	// ������� 1
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;
	setlocale(LC_ALL, "RUS");
	printf("\n%c\n%d\n%g\n%.3lg\n", c, i, f, d);
	float v;
	printf("\n������� ��������:");
	scanf_s("%f", &v);	
	printf("%d\t%lg\n",(int)v, v - (int)v); // 1�
	printf("%x\t%d\n", (int)v, (int)v); // 1�
	printf("%.3f\n", 1/(float)i); //1B
	// ������� 2
	int a = 11;
	int b = 3;
	int x = a / b;
	float y = a / b;
	double z = a / b;
	printf("%d\n%f\n%lf\n", x, y, z);
	printf("\n%d\n%f\n%lf\n", x, (float)a/b, (double)a / b);
	int N;
	printf("\n������� ���������� �����:");
	scanf_s("%d", &N);
	printf("\n��������� ����� ������ �����:%d\n", N%10);
	printf("\n������ ����� ������ �����:%d\n", N/100);
	printf("\n����� ����� ������  �����:%d\n", (N / 100)+(N % 10)+((N/10)%10));
	printf("\n���� ����� ��������:%d%d%d\n", (N % 10),((N / 10) % 10),(N / 100));
	// �������� ������
	int m;
	int t;
	int s;
	printf("\n������� ����� � �������:");
	scanf_s("%d", &m);
	printf("\n������� ���������� �������:");
	scanf_s("%d", &t);
	printf("\n������� ���-�� ������ ����� ��������:");
	scanf_s("%d", &s);
	printf("\n�������� ������ ������:%d �/���",(t*s)/m);






	


}