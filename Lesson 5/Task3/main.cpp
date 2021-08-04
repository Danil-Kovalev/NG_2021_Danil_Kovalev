#include <iostream>

using namespace std;

void getInputUser (char inputUser [100]) {
    cout << "Enter the string: ";
    cin.getline(inputUser, 100);
}

int countWord (char inputUser []) {
    int count = 0, words = 0, i = 0;
    while (inputUser[i] != 0) {
        if(count == 0) {
            if ((inputUser[i] >= 'a' && inputUser[i] <= 'z') || (inputUser[i] >= 'A' && inputUser[i] <= 'Z')) {
                count = 1;
                words++;
            }
        }
        else if ((inputUser[i] >= ' ' && inputUser[i] <= '@') || (inputUser[i] >= '[' && inputUser[i] <= '`') || (inputUser[i] >= '{' && inputUser[i] <= '-')) {
            count = 0;
        }
        i++;
    }
    return words;
}

void outputNumberWord (int words = 0) {
    cout << "Number words: " << words;
}

void cycleCountWord (char inputUser [100]) {
    int count = 0;
    count = countWord(inputUser);
    outputNumberWord(count);
}

int main()
{
    char inputUser [100];
    getInputUser(inputUser);
    cycleCountWord(inputUser);
}
