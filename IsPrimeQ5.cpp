#include <iostream>
using namespace std;

int main() {
    int i, num;
    bool isPrime = true;

    cout << "input the positive integer: ";
    cin >> num;

    
    if (num == 0 || num == 1) {
        isPrime = false;
    }
    else {
        for (i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime)
        cout << "Yep :)";
    else
        cout << "Nope :(";

    return 0;
}
