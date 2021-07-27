#include <iostream>

using namespace std;

int main()
{
    char inputUser[100];
    int words = 0, count = 0, i = 0;
    cout << "Enter the string: ";
    cin.getline(inputUser, 100);
    while (inputUser[i] != 0) {
        if(count == 0) {
            if ((inputUser[i] >= 'a' && inputUser[i] <= 'z') || (inputUser[i] >= 'A' && inputUser[i] <= 'Z')) {
                count = 1;
                words++;
            }
        }
        else if ((inputUser[i] >= 0 && inputUser[i] <= 64) || (inputUser[i] >= 91 && inputUser[i] <= 96) || (inputUser[i] >= 123 && inputUser[i] <= 126) || inputUser[i] == ' ') {
            count = 0;
        }
        i++;
    }
    cout << "Number words: " << words;
}
