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
        else if ((inputUser[i] >= ' ' && inputUser[i] <= '@') || (inputUser[i] >= '[' && inputUser[i] <= '`') || (inputUser[i] >= '{' && inputUser[i] <= '-')) {
            count = 0;
        }
        i++;
    }
    cout << "Number words: " << words;
}
