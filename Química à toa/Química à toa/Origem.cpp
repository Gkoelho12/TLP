#include <iostream>
#include <locale.h>
#include <string>

//Qu�mica a toa

void main()
{
	int num = 1;
	using namespace std;
	setlocale(LC_ALL, "Portuguese");
	string frase;

	cout << "Escreve a f�rmula e acaba com ponto final.\n";
	cin >> frase;

	for (int i = 0; i < frase.size(); i++)
	{
		if (isupper(frase[i]))
		{
			if (num == 0)
			{
				cout << " 1";
			}
			num = 0;
			cout << "\n";
		}
		if (isdigit(frase[i]) && num == 0)
		{
			cout << " ";
			num = num + 1;
		}
		if (frase[i] == '.')
		{
			if (num == 0)
			{
				cout << " 1";
			}
			num = 0;
			cout << "\n";
		}
		else
		{
			cout << frase[i];
		}
	}
}