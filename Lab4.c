#include <locale.h>
#include <stdio.h>
#include <math.h>
int main()
{
	// çàäàíèå 1
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;
	setlocale(LC_ALL, "RUS");
	printf("\n%c\n%d\n%g\n%.3lg\n", c, i, f, d);
	float v;
	printf("\nÂâåäèòå çíà÷åíèå:");
	scanf_s("%f", &v);	
	printf("%d\t%lg\n",(int)v, v - (int)v); // 1À
	printf("%x\t%d\n", (int)v, (int)v); // 1Á
	printf("%.3f\n", 1/(float)i); //1B
	// çàäàíèå 2
	int a = 11;
	int b = 3;
	int x = a / b;
	float y = a / b;
	double z = a / b;
	printf("%d\n%f\n%lf\n", x, y, z);
	printf("\n%d\n%f\n%lf\n", x, (float)a/b, (double)a / b);
	int N;
	printf("\nÂâåäèòå òð¸õçíà÷íîå ÷èñëî:");
	scanf_s("%d", &N);
	printf("\nÏîñëåäíÿÿ öèôðà âàøåãî ÷èñëà:%d\n", N%10);
	printf("\nÏåðâàÿ öèôðà âàøåãî ÷èñëà:%d\n", N/100);
	printf("\nÑóììà ÷èñåë âàøåãî  ÷èñëà:%d\n", (N / 100)+(N % 10)+((N/10)%10));
	printf("\nÂàøå ÷èñëî íàîáîðîò:%d%d%d\n", (N % 10),((N / 10) % 10),(N / 100));
	// Äîìàøíÿÿ ðàáîòà
	int m;
	int t;
	int s;
	int j;
	printf("\nÂâåäèòå âðåìÿ â ìèíóòàõ:");
	scanf_s("%d", &m);
	printf("\nÂâåäèòå êîëè÷åñòâî ñòîëáîâ:");
	scanf_s("%d", &t);
	printf("\nÂâåäèòå êîë-âî ìåòðîâ ìåæäó ñòîëáàìè:");
	scanf_s("%d", &s);
	j=(t*s)/m;
	printf("\nÑêîðîñòü âàøåãî ïîåçäà:%d ì/ìèí",j);






	


}
