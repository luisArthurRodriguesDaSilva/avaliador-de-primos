
#include<iostream>
#include<locale>

using namespace std;

int entrada, i, x, y, lim,j;

int caixa[99999];


void processo();

int main() {


    setlocale(LC_ALL, "");

    while (1) {
        x = 0;
        y= 0;
        cin >> lim;

        cout << endl << endl;

        processo();
        
        while(j>0)
        {
        
        caixa[y]=0;
        
        j--;
        y--;
        }

    }

}


void processo() {
    
    for (entrada = lim; entrada > 1; entrada--)
    {
        x = 0;

        for (i = 2;x==0 and i < ((entrada / 2) + 1); i++)
        {

          //cout << "tentativa:" << i << endl << endl;

            if (((entrada % i) == 0)) { x=1; }
        }
        
        if (x == 0)
        {
            caixa[y] = entrada;
            y++;
          
        }
    }


    for (j = 1; y>=0; y--)
    {
    
        if (caixa[y] != 0) 
        {
            cout << "primo " << j << ":" << caixa[y] << endl;
            j++;
        }

    }
j=99999;
y=99999;
}

