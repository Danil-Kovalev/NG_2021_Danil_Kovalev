#include <iostream>

using namespace std;

int main()
{
    int inputUser = 0;
    cout << "Enter number: ";
    cin >> inputUser;
    for (int i = 0; i < inputUser; i++) {
        for (int i = 0; i < inputUser; i++) {
            cout << "*";
        }
        cout << endl;
    }
}
