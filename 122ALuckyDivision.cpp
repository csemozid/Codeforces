#include <iostream>
using namespace std;

int main() {
    int num, n, countFour = 0, countSeven = 0;
    bool con;
    cin >> num;
    n = num;
    while(num != 0) {
        if(num % 10 == 4) {
            countFour++;
        }
        else if(num % 10 == 7) {
            countSeven++;
        }
        else {
            countFour = 0;
            countSeven = 0;
        }
        num = num/10;
    }
    //cout << countFour << " " << countSeven << endl;
    if (countFour >= 1 && countSeven >= 1 || n%4 == 0 || n%7 == 0 || n%47 == 0 || n%447 == 0 || n%774 == 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    
    return 0;
}