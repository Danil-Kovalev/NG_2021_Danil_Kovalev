#include <iostream>

using namespace std;

int getInputUser(int inputUser = 0) {
    cout << "Vvedite razmer elochki: ";
    cin >> inputUser;
    return inputUser;
}

void drawBranches (int inputUser = 0) {
    int space = 0, star = 0;
    for (int i = 0; i < inputUser; i++) {
        for (space = inputUser - 1; space > i; space--) {
            cout << " ";
        }
        for (star = 0; star <= i * 2; star++) {
            cout << "*";
        }
        cout << endl;
    }
}

void drawTreePillar (int inputUser = 0) {
    int space = 0;
    for (space = inputUser; space > 1; space--) {
        cout << " ";
    }
    cout << "*";
}

int main()
{
    int inputUser = getInputUser();
    drawBranches(inputUser);
    drawTreePillar(inputUser);

}
