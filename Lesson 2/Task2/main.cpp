#include <iostream>

using namespace std;

int main()
{
    int inputUser = 0, i = 0;
    cout << "Enter number: ";
    cin >> inputUser;
    cout << "Numbers: ";
    for (i = 0; i < inputUser; i++){
        cout << i << ",";
    }
    cout << i;
}
