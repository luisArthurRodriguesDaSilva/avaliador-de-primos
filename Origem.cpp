#include<iostream>
#include<locale>

using namespace std;

int entrada, i, x, y, lim;

int caixa[10000];

void processo();

int main() {

    setlocale(LC_ALL, "");

    while (1) {
        x = 0;
        cin >> lim;

        cout << endl << endl;

        processo();

    }

}


void processo() {
    y = 0;
    for (entrada = lim; entrada > 1; entrada--)
    {
        x = 0;

        for (i = 2; x == 0 && i < ((entrada / 2) + 1); i++)
        {

          //  cout << "tentativa:" << i << endl << endl;

            if (((entrada % i) == 0)) { x = 1; }
        }
        if (x == 0)
        {
            caixa[y] = entrada;
            cout << "primo " << y + 1 << " :" << caixa[y] << endl;
            y++;
        }
    }

}
