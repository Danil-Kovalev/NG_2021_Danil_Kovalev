#include <iostream>

using namespace std;

int main()
{
    int inputUser = 0;
    cout << "Enter number: ";
    cin >> inputUser;
    for (int transition = 0; transition < inputUser; transition++) {
        for (int star = 0; star < inputUser; star++) {
            cout << "*";
        }
        cout << endl;
    }
}
