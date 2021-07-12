#include <iostream>

using namespace std;

int main()
{
    int inputUser = 0, star = 0, space = 0;
    cout << "Enter number: ";
    cin >> inputUser;
    for (int i = 0; i < inputUser; i++) {
        for (star = 0; star <= i; star++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < inputUser; i++) {
        for (star = inputUser; star > i; star--) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < inputUser; i++) {
        for (space = 1; space <= i; space++) {
            cout << " ";
        }
        for (star = inputUser; star > i; star--) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < inputUser; i++) {
        for (space = inputUser - 1; space > i; space--) {
            cout << " ";
        }
        for (star = 0; star <= i; star++) {
            cout << "*";
        }
        cout << endl;
    }
}
