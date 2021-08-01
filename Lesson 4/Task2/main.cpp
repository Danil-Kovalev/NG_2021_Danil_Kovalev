#include <iostream>

using namespace std;

int main()
{
    char inputUser[100];
    string text, longestWord;
    cout << "Enter the string: ";
    cin.getline(inputUser, 100);
    for (int i = 0; i < inputUser[i]; i++) {
        if ((inputUser[i] != ' ') && ((inputUser[i] >= 'a' && inputUser[i] <= 'z') || (inputUser[i] >= 'A' && inputUser[i] <= 'Z'))) {
            text += inputUser[i];
        }
        else {
            text = "";
        }
        if (longestWord.length() < text.length()) {
            longestWord = text;
        }
    }
    cout << "Longest word: " << longestWord;
}
