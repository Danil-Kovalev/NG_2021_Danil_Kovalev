#include <iostream>

using namespace std;

int main()
{
    int first_number = 0, second_number = 0, act = 0;
    cout << "Enter first number: ";
    cin >> first_number;
    cout << "Enter second number: ";
    cin >> second_number;
    cout << "Enter action 1 to 4 (1 - for plus, 2 - for minus, 3 - for multiplication, 4 - division): ";
    cin >> act;
    cout << "Result: ";
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
