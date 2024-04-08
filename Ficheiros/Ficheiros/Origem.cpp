#include <iostream>
#include <fstream>
#include <string>
#include <locale.h>

using namespace std;

void main()
{

	setlocale(LC_ALL, "Portuguese");

	string nome;
	ofstream Escrita("nome.txt");

	cout << "Qual é o teu nome? \n";
	
	getline(cin, nome);

	Escrita << nome;
	Escrita.close();

	ifstream Leitura("nome.txt");
	while (getline(Leitura, nome))
	{
		cout << nome;
	}
	Leitura.close();
}