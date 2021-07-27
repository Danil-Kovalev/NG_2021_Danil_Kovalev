#include <iostream>

using namespace std;

int main()
{
    char inputUser[100];
    int i = 0;
    cout << "Enter the string: ";
    cin.getline(inputUser, 100);
    while (inputUser[i] != 0) {
        if (inputUser[i] >= 'a' && inputUser[i] <= 'z') {
            inputUser[i] -= 32;
        }
        i++;
    }
    cout << "Uppercase string: " << inputUser;
}
