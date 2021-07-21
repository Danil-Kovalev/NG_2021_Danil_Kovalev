#include <iostream>

using namespace std;

int main()
{
    int allCards [10], card = 0, money = 0, summa = 0;
    char inputUser;
    for (int i = 0; i < 10; i++) {
        allCards[i] = 0;
    }
    for ( ; ;) {
        for (int i =0; i < 10; i++) {
            cout << allCards[i] << " ";
        }
        cout << endl;
        cout << "Which card do you want to put money on: ";
        cin >> card;
        cout << endl;
        cout << "How many money do you want to put on the card: ";
        cin >> money;
        cout << endl;
        allCards[card - 1] += money;
        summa += money;
        cout << "Summa: " << summa << endl;
        cout << "Press f to exit, press any key to continue: ";
        cin >> inputUser;
        if (inputUser == 'f') {
            break;
        }
        else {
            continue;
        }
    }
}
