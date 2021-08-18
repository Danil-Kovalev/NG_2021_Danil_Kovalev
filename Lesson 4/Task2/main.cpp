#include <iostream>

using namespace std;

int main()
{
    char inputUser[100];
    int longestWord = 0, count = 0, i = 0, start = 0;
    cout << "Enter the string: ";
    cin.getline(inputUser, 100);
    cout << "Longest word: ";
    while (inputUser[i] != 0)
    {
        if ((inputUser[i] >= 'a' && inputUser[i] <= 'z') || (inputUser[i] >= 'A' && inputUser[i] <= 'Z'))
        {
            count++;
            if (longestWord < count)
            {
                longestWord = count;
                start = i - count + 1;
            }
        }
        else {
            count = 0;
        }
        i++;
    }
    longestWord += start + 1;
    for (int index = start; index < longestWord - 1; index++)
    {
        cout << inputUser[index];
    }
}
