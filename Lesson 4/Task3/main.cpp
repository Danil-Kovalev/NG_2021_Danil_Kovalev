#include <iostream>

using namespace std;

int main()
{
    char inputUser[100], stringInput;
    int i = 0;
    cout << "Enter the string: ";
    cin.getline(inputUser, 100);
    cout << "Uppercase string: ";
    while (inputUser[i] != 0) {
        if (inputUser[i] >= 'a' && inputUser[i] <= 'z') {
            stringInput = inputUser[i];
            stringInput -= 32;
            cout << stringInput;
        }
        i++;
    }
}
