#include <iostream>

using namespace std;

int main()
{
    int inputUser [20], maxNumber = 0, numberBranches = 0;
    for (numberBranches = 0; numberBranches < 20; numberBranches++) {
        cout << "Enter " << numberBranches + 1 << " number: ";
        cin >> inputUser[numberBranches];
        if (maxNumber < inputUser[numberBranches])
            maxNumber = inputUser[numberBranches];
        if (inputUser[numberBranches] == 0)
            break;
    }
    for (int i = 0; i < numberBranches; i++) {
        for (int j = 0; j < maxNumber - (inputUser[i] + j); j++) {
            cout << " ";
        }
        for (int j = 0; j < inputUser[i]; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
