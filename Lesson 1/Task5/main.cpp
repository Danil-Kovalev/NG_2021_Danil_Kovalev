#include <iostream>

using namespace std;

int main()
{
    int first_number = 0, second_number = 0, act = 0;
    cout << "Vvedite pervoe chislo: ";
    cin >> first_number;
    cout << "Vvedite vtoroe chislo: ";
    cin >> second_number;
    cout << "Vvedite deistvie: ";
    cin >> act;
    cout << "Resultat: ";
    switch(act) {
    case 1:
        cout << first_number + second_number;
        break;
    case 2:
        cout << first_number - second_number;
        break;
    case 3:
        cout << first_number * second_number;
        break;
    case 4:
        cout << first_number / second_number;
        break;
    default:
        cout << "Error...";
    }
}
