#include <iostream>
using namespace std;

int main() {
    long int number, n;
    cin >> number >> n;
    for(int i = 0; i < n; i++) {
        if(number % 10 != 0) {
            number = number -1;
        }
        else {
            number = number / 10;
        }
    }
    cout << number << endl;

    return 0;
}
