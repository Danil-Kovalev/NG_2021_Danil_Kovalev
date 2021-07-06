#include <iostream>

using namespace std;

void checkTemperature(int temperature = 0) {
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

int main()
{
    int temperature = 0, mode = 0;
    cout << "Select mode: ";
    cin >> mode;
    switch(mode) {
    case 1:
        cout << "Enter temperature: ";
        cin >> temperature;
        checkTemperature(temperature);
        break;
    case 2:
        cout << "Enter temperature: ";
        cin >> temperature;
        cout <<  "[CORE]: Using default configuration" << endl;
        if (temperature == 300) {
            cout << "[CORE]: Bad configuration detected. Stopping down core";
        }
        checkTemperature(temperature);
        break;
    default:
        cout << "Error...";
        break;
    }
}
