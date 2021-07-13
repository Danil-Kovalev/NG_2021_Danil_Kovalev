#include <iostream>

using namespace std;


int main()
{
    int temperature = 0, mode = 0;
    cout << "Select mode: ";
    cin >> mode;
    cout << "Enter temperature: ";
    cin >> temperature;
    switch(mode) {
    case 1:
        break;
    case 2:
        cout <<  "[CORE]: Using default configuration" << endl;
        if (temperature == 300) {
            cout << "[CORE]: Bad configuration detected. Stopping down core";
        }
        break;
    default:
        cout << "Error...";
        break;
    }
    if (temperature >= 500 && temperature < 600) {
        cout << "[CORE]: Overheat mode";
    }
    if (temperature >= 600 && temperature < 700) {
        cout << "[CORE]: Cooldown required";
    }
    if (temperature >= 700) {
        cout << "[CORE]: Cooldowm started!";
    }
}
