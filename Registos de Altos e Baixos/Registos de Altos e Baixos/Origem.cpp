#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    using namespace std;

    int km[1000], metros[1000], i, caminhada = 0, n0, n1;

    for (i = 0; i < 1000; i++)
    {
        do
        {
            cin >> km[i];
            cin >> metros[i];
        } while ((km[i] > 100 || km[i] < 0) || (metros[i] > 999 || metros[i] < 0));


        if (km[i] == 0 && metros[i] == 0 && caminhada > 1)
        {
            break;
        }
        else if (km[i] == 0 && metros[i] == 0 && caminhada <= 1)
        {
            cout << "Número inválido de caminhadas.\n";
            break;
        }
        else
        {
            caminhada = caminhada + 1;
        }
    }
    for (i = 1; i < caminhada; i++)
    {
        n0 = (km[i - 1] * 1000 + metros[i - 1]);
        n1 = (km[i] * 1000 + metros[i]);

        if (n0 > n1)
        {
            cout << "BAIXO" << ((n0 - n1) / 1000) << " Km" << ((n0 - n1) % 1000) << " m \n";
        }
        else if (n0 < n1)
        {
            cout << "ALTO" << ((n1 - n0) / 1000) << " Km" << ((n1 - n0) % 1000) << " m \n";
        }
        else
        {
            cout << "PATAMAR\n";
        }
    }
    return 0;
}