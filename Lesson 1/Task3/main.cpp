#include <iostream>

using namespace std;

int main()
{
    int N = 0, M = 0, K = 0, result = 0;
    cout << " Skolko oreshkov nuzhno belochke: ";
    cin >> N;
    cout << " Skolko oreshkov v odnoy shishke: ";
    cin >> K;
    cout << " Skolko shishek bylo sobrano: ";
    cin >> M;
    result = K * M;
    if ( N <= result ) {
        cout << "Hvatit dlya zhizni";
    }
    else {
        cout << " Ne hvatit. F! ";
    }
}
