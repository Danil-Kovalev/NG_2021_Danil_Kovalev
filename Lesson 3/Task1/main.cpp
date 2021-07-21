#include <iostream>

using namespace std;

int main()
{
    int schools [11], mySchool = 0;
    bool checkSchool;
    for (int i = 0; i < 10; i++) {
        cout << "Enter " << i + 1 << " school: ";
        cin >> schools[i];
    }
    cout << "Enter your school: ";
    cin >> mySchool;
    for (int i = 0; i < 10; i++) {
        if (mySchool == schools[i]) {
            checkSchool = true;
        }
    }
    if (checkSchool == true) {
        cout << "I know your school";
    }
    else {
        cout << "I don`t know your school";
    }
}
