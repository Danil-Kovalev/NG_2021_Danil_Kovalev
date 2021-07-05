#include <iostream>

using namespace std;

int main()
{
    int first_number = 0, second_number = 0, act = 0, result = 0;
    cout << "Vvedite pervoe chislo: ";
    cin >> first_number;
    cout << "Vvedite vtoroe chislo: ";
    cin >> second_number;
    cout << "Vvedite deistvie: ";
    cin >> act;
    switch(act) {
    case 1:
        result = first_number + second_number;
        break;
    case 2:
        result = first_number - second_number;
        break;
    case 3:
        result = first_number * second_number;
        break;
    case 4:
        result = first_number / second_number;
        break;
    }
    cout << "Resultat: " << result;
}
