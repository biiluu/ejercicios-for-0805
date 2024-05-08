#include <iostream>
using namespace std;
int main()
{

    char c;
    cout << "Menu\n";
do

    {
        cout << endl<<"A = Pollo\nB = Carne\nC = Lomito de cerdo\nD = Sopa\nE = Lasagna\nX = Salir del menu"<<endl;
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
    }while (c != 'X');
    
    return 0;
}