#include <iostream>

using namespace std;

void fillCards (int allCards []) {
    for (int i = 0; i < 10; i++) {
        allCards[i] = 0;
    }
}

void outputAllCards (int allCards []) {
    for (int i = 0; i < 10; i++) {
        cout << allCards[i] << " ";
    }
}

int getInputCard (int card = 0) {
    cout << "Which card do you want to put money on: ";
    cin >> card;
    return card;
}

int getInputMoney (int money = 0) {
    cout << "How many money do you want to put on the card: ";
    cin >> money;
    return money;
}

void outputSumm (int summa = 0) {
    cout << "Summa: " << summa << endl;
}

char getInputUser () {
    char inputUser;
    cout << "Press f to exit, press any key to continue: ";
    cin >> inputUser;
    return inputUser;
}

char checkInputUser (char inputUser) {
    if (inputUser == 'f') {
        return 1;
    }
    else {
        return 0;
    }
}


void cycleBank () {
    int allCards[10], card = 0, summa = 0, money = 0;
    char inputUser;
    fillCards(allCards);
    while (true) {
        outputAllCards(allCards);
        cout << endl;
        card = getInputCard(card);
        cout << endl;
        money = getInputMoney(money);
        cout << endl;
        allCards[card - 1] += money;
        summa += money;
        outputSumm(summa);
        cout << endl;
        inputUser = getInputUser();
        if (checkInputUser(inputUser) == 1) {
            return;

        }
    }
}



int main()
{
    cycleBank();
}
