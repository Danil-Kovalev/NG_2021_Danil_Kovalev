#include <iostream>

using namespace std;

int getInputUser(int inputUser = 0) {
    cout << "Vvedite razmer elochki: ";
    cin >> inputUser;
    return inputUser;
}

void drawSymbol (int size, char symbol) {
    for (int star = 0; star < size; star++) {
        cout << symbol;
    }
}

void drawBranches (int inputUser = 0) {
    for (int i = 1; i <= inputUser; i++) {
        drawSymbol(inputUser - i, ' ');
        drawSymbol(i * 2 - 1, '*');
        cout << endl;
    }
}

void drawTreePillar (int size) {
    drawSymbol(size - 1, ' ');
    cout << "*";
}

void drawTree (int size) {
    drawBranches(size);
    drawTreePillar(size);
}

int main()
{
    drawTree(getInputUser());

}
