#include <iostream>

using namespace std;

void getInputUser (char inputUser [100]) {
    cout << "Enter the string: ";
    cin.getline(inputUser, 100);
}

int countWord (char inputUser [100]) {
    int words = 0, i = 0;
    while (inputUser[i] != 0) {
        if (((inputUser[i] >= 'a' && inputUser[i] <= 'z') || (inputUser[i] >= 'A' && inputUser[i] <= 'Z')) && (!((inputUser[i + 1] >= 'a' && inputUser[i + 1] <= 'z') || (inputUser[i + 1] >= 'A' && inputUser[i + 1] <= 'Z')))) {
            words++;
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
