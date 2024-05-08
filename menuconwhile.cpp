#include <iostream>
using namespace std;
int main()
{

    char c = 'A';
    cout << "Menu\n";

    while (c!= 'X')
    {
        cout << endl<<"A = Pollo\nB = Carne\nC = Lomito de cerdo\nD = Sopa\nE = Lasagna\nX = X = Salir del menu"<<endl;
        cin >> c;

        switch (c)
        {
        case 'A':
            cout << "Pollo\n";
            break;
        case 'B':
            cout << "Carne\n";
            break;
        case 'C':
            cout << "Lomito de cerdo\n";
            break;
        case 'D':
            cout << "Sopa\n";
            break;
        case 'E':
            cout << "Lasagna\n";
            break;
        case 'X':
            cout << "Salir del menu\n";
            break;
        default:
            cout << "La letra ingresada no es valida\n";
            break;
        }

    }
    return 0;
}