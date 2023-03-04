#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int action;
	double a, b, c, x, y, xx, yy;
	while (1) {
		printf("\nВыберите действие:\n");
		printf("1) Определить, какое равенство точнее.\n");
		printf("2) Округлить сомнительные цифры числа, оставив верные знаки. Определить абсолютную погрешность результата.\n");
		printf("3) Найти предельные абсолютную и относительную погрешности приближенного числа, все цифры которого по умолчанию верные.\n");
		printf("0) Выход из программы.\n");
		scanf("%d", &action);
		switch (action) {
		case 0:
			return -1;
		case 1:
			system("cls");
			printf("Введите первое значение:\n");
			scanf("%lf", &a);
			printf("Введите второе значение:\n");
			scanf("%lf", &b);
			printf("Введите значение второго равенства\n");
			scanf("%lf", &c);
			cout << ("Значения выражений с большим количеством десятичных знаков:\n");
			printf("1) %.0lf/%.0lf = %lf\n", a, b, a/b);
			printf("2) sqrt(%.0lf) = %lf\n",c, sqrt(c));
			cout << ("Предельные абсолютные погрешности, округляя их с избытком:\n");
			x = (a/b) - fabs(round(((a / b) * 1000)) / 1000);
			y = fabs(round(((sqrt(c)) * 100)) / 100) - (sqrt(c));
			printf("1) %lf\n", fabs(x));
			printf("2) %lf\n", fabs(y));
			printf("Предельные абсолютные погрешности в %%\n");
			xx = (fabs(x)/(a/b))*100;
			yy = (fabs(y) / sqrt(c)) * 100;
			printf("1) %lf\n", fabs(xx));
			printf("2) %lf\n", fabs(yy));
			if (xx < yy)
				printf("Значит, более точное выражение: %.0lf/%.0lf = %lf\n", a, b, a / b);
			else
				printf("Значит, более точное выражение: sqrt(%.0lf) = %lf\n", c,(sqrt(c)));
			system("pause");
			break;
		case 2:
			system("cls");
			printf("Введите число:");
			scanf("%lf", &a);
			printf("Введите относительную погрешность:");
			scanf("%lf", &b);
			printf("");
			system("pause");
			break;
		case 3:

			break;
		}
	}

}
