#include <iostream>

using namespace std;

int main()
{
    int inputUser[5], maxNumber = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter " << i + 1 << " number: ";
        cin >> inputUser[i];
        if (maxNumber < inputUser[i])
        {
            maxNumber = inputUser[i];
        }
    }
    for (int i = 0; i < maxNumber; i++)
    {
        for (int j = 0; j < 5; j++) {
            if (inputUser[j] > i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
