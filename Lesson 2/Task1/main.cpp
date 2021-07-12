#include <iostream>

using namespace std;

int main()
{
    int inputUser = 0;
    cout << "Vvedite kolichestvo zvezdochek: ";
    cin >> inputUser;
    for (int i = 0; i < inputUser; i++)
        cout << "*";
}
