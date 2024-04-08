#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");

	int i, j, jogadas = 0, acertos = 0;
	int mastermind[5][10], apostas[5];

	string nome;

	srand(time(0));

	for (j = 0; j < 5; j++)
	{
		apostas[j] = (rand() % 2) + 1;
		cout << " (" << apostas[j] << ") ";
	}

	for (i = 0; i < 10; i++)
	{
		cout << "Diga 5 números \n";

		for (j = 0; j < 5; j++)
		{
			cin >> mastermind[i][j];

			if (mastermind[i][j] == apostas[i])
			{
				acertos = acertos + 1;
			}
		}

		if ()
		{

		}
	}

}