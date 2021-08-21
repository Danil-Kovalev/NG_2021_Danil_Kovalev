#include <iostream>

using namespace std;

int main()
{
    int key = 0;
    char text [1000];
    cout << "Enter text: ";
    cin.getline(text, 1000);
    cout << "Enter key: ";
    cin >> key;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            for (int j = 0; j < key; j++)
            {
                if (text[i] == 'a')
                {
                    text[i] = 'z';
                    text[i] = text[i] + 1;
                }
                text[i] = text[i] - 1;
            }
        }
    }
    cout << "Decoding text: " << text;
}
