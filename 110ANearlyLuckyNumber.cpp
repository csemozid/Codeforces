#include <iostream>

using namespace std;

int main() {
    long long int n, reminder, i = 10, isFour =0 , isSeven = 0;
    cin >> n;
    while(n != 0) {
       if(n % 10 == 4) {
        isFour++;
       }
       if(n % 10 == 7) {
        isSeven++;
       }
       n = n/10;
    }
    //cout << "4 is: " << isFour << "Seven is: " << isSeven;
    if((isFour + isSeven) == 4 || (isFour + isSeven) == 7) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}