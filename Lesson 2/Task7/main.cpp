#include <iostream>

using namespace std;

int main()
{
    int inputUser = 0, space = 0, star = 0;
    cout << "Vvedite razmer elochki: ";
    cin >> inputUser;
    for (int i = 0; i < inputUser; i++) {
        for (space = inputUser - 1; space > i; space--) {
            cout << " ";
        }
        for (star = 0; star <= i * 2; star++) {
            cout << "*";
        }
        cout << endl;
    }
    for (star = 1; star == 1; star--) {
        for (space = inputUser; space > star; space--) {
            cout << " ";
        }
        cout << "*";
    }
}
