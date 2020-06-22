
#include<iostream>
//#include<stdlib.h>

using namespace std;

int entrada, i, x, y;

int main() {

    while (1) {
        x = 0;
        cin >> entrada;

        cout << endl;

        for (i = (entrada - 1); x == 0 && i > 1; i--)
        {

            cout << "tentativa" << i << endl;

            if (((entrada % i) == 0)) { x = 1; }

        }

        cout << endl;

        if (x == 1) { cout << "n é"; }
        else { cout << "é"; }

        cout << endl;
    }

}