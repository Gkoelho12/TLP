#include <iostream>
#include <math.h>

using namespace std;

void main()
{
	int dia, grupo;
	float preço, valor, centimos;
	do
	{
		cin >> preço;
		cin >> dia;
		cin >> grupo;
	} while (preço < 100 && preço > 100000);

	preço = preço / 100;
	preço = preço - preço * 0.25;
	centimos = preço - trunc(preço);

	if (centimos > 0.5)
	{
		valor = trunc(preço) + 1;
	}
	else
	{
		valor = trunc(preço) + 0.5;
	}
	preço = valor;


	if (dia > 4 && dia < 9)
	{
		preço = preço - preço * 0.4;
		centimos = preço - trunc(preço);

		if (centimos > 0.5)
		{
			valor = trunc(preço) + 1;
		}
		else
		{
			valor = trunc(preço) + 0.5;
		}
		preço = valor;

	}
	else if (dia > 8)
	{
		preço = preço - preço * 0.65;
		centimos = preço - trunc(preço);

		if (centimos > 0.5)
		{
			valor = trunc(preço) + 1;
		}
		else
		{
			valor = trunc(preço) + 0.5;
		}
		preço = valor;
	}


	if (grupo > 3)
	{
		preço = preço - preço * 0.5;
		centimos = preço - trunc(preço);

		if (centimos > 0.5)
		{
			valor = trunc(preço) + 1;
		}
		else
		{
			valor = trunc(preço) + 0.5;
		}

	}

	preço = valor * 100;
	cout << preço;
}