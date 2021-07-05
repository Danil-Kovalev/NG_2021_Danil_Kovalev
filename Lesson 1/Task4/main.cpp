#include <iostream>

using namespace std;

int main()
{
    int salary;
    cout << " Skolko ti zarabativaesh: ";
    cin >> salary;
    if ( salary < 1000 ) {
        cout << " Rabotai bolshe ";
    }
    if ( salary > 999 ) {
        if ( salary > 999999 )
            cout << " Ti millioner! ";
        if ( salary < 1000000 )
            cout << " Kruto! ";
    }
    cout << ", no ti molodec! ";
}
