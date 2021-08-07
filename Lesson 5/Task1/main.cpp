#include <iostream>

using namespace std;

int getInputUser(int inputUser = 0) {
    cout << "Vvedite razmer elochki: ";
    cin >> inputUser;
    return inputUser;
}

void drawSpace (int inputUser = 0) {
    int i = 0;
    for (int space = inputUser - 1; space > i; space--) {
        cout << " ";
    }
}

void drawStar (int i = 0) {
    for (int star = 0; star <= i * 2; star++) {
        cout << "*";
    }
}

void drawBranches (int inputUser = 0) {
    for (int i = 0; i < inputUser; i++) {
        drawSpace(inputUser);
        drawStar(i);
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
