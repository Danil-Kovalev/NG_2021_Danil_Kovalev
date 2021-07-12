#include <iostream>

using namespace std;

int main()
{
    int inputUser = 0;
    for (int i = 0; i < 20; i++) {
        cout << "Enter number: ";
        cin >> inputUser;
        if (inputUser == 0) {
            break;
        }
        cout << endl;
    }
}
