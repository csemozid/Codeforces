#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    int  i = 0, flag = 0;
    while(i < str.length()) {
        if(str[i] == 'H' || str[i] == 'Q' || str[i] == '9') {
            flag = 1;
            break;
        }
        i++;
    }
    if(flag == 1) {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}