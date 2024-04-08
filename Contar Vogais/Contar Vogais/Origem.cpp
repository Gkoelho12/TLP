#include <iostream>
#include <string>
#include <locale.h>

int resposta, i, r, va = 0, ve = 0, vi = 0, vo = 0, vu = 0;

int main()
{

	using namespace std;

	setlocale(LC_ALL, "Portuguese");

	string txt;

	do
	{
		cout << "Escolhe um opção\n";
		cout << "1 - Contar Vogais\n";
		cout << "0 - Sair\n";
		cin >> r;

		switch (r)
		{
		case 1:
		{
			cout << "Escreve até dizer chega\n";

			cin.ignore();
			getline(cin, txt);

			for (i = 0; i < txt.size(); i++)
			{
				switch (txt[i])
				{
				case 'A':
				case 'a':
				{
					va = va + 1;
					break;
				}
				case 'E':
				case 'e':
				{
					ve = ve + 1;
					break;
				}
				case 'I':
				case 'i':
				{
					vi = vi + 1;
					break;
				}
				case 'O':
				case 'o':
				{
					vo = vo + 1;
					break;
				}
				case 'U':
				case 'u':
				{
					vu = vu + 1;
					break;
				}
				}
			}

			cout << "Escreveste " << va << " a's " << ve << " e's " << vi << " i's " << vo << " o's " << vu << " u's.\n";

			va = 0;
			ve = 0;
			vi = 0;
			vo = 0;
			vu = 0;

			break;
		}
		case 0:
		{
			break;
		}
		default:
		{
			break;
		}
		}
	} while (r != 0);

	return 0;
}