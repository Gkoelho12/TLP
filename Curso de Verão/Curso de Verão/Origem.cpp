#include <iostream>
#include <math.h>

using namespace std;

void main()
{
	int dia, grupo;
	float pre�o, valor, centimos;
	do
	{
		cin >> pre�o;
		cin >> dia;
		cin >> grupo;
	} while (pre�o < 100 && pre�o > 100000);

	pre�o = pre�o / 100;
	pre�o = pre�o - pre�o * 0.25;
	centimos = pre�o - trunc(pre�o);

	if (centimos > 0.5)
	{
		valor = trunc(pre�o) + 1;
	}
	else
	{
		valor = trunc(pre�o) + 0.5;
	}
	pre�o = valor;


	if (dia > 4 && dia < 9)
	{
		pre�o = pre�o - pre�o * 0.4;
		centimos = pre�o - trunc(pre�o);

		if (centimos > 0.5)
		{
			valor = trunc(pre�o) + 1;
		}
		else
		{
			valor = trunc(pre�o) + 0.5;
		}
		pre�o = valor;

	}
	else if (dia > 8)
	{
		pre�o = pre�o - pre�o * 0.65;
		centimos = pre�o - trunc(pre�o);

		if (centimos > 0.5)
		{
			valor = trunc(pre�o) + 1;
		}
		else
		{
			valor = trunc(pre�o) + 0.5;
		}
		pre�o = valor;
	}


	if (grupo > 3)
	{
		pre�o = pre�o - pre�o * 0.5;
		centimos = pre�o - trunc(pre�o);

		if (centimos > 0.5)
		{
			valor = trunc(pre�o) + 1;
		}
		else
		{
			valor = trunc(pre�o) + 0.5;
		}

	}

	pre�o = valor * 100;
	cout << pre�o;
}