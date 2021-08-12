#include <iostream>

using namespace std;

int main()
{
    int inputUser [20], maxNumber = 0;
    for (int i = 0; i < 20; i++) {
        cout << "Enter " << i + 1 << " number: ";
        cin >> inputUser[i];
        if (maxNumber < inputUser[i])
            maxNumber = inputUser[i];
        if (inputUser[i] == 0)
            break;
    }
    for (int i = 0; i < maxNumber; i++) {
        if (inputUser[i] == 0) {
            break;
        }
        for (int j = 0; j < (maxNumber - (inputUser[i] + j)); j++) {
            cout << " ";
        }
        for (int j = 0; j != inputUser[i]; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
