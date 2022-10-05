#include <iostream>
using namespace std;

int main() {
    string ber, bir;
    int flag = 0, len, end; 
    cin >> ber >> bir;
    len = ber.length();
    end = len - 1;
    for(int i = 0; i < len; i++) {
        if(ber[i] != bir[end]) {
            flag = 1;
            break;;
        }
        end--;
    }
    //cout <<"Flag: " << flag << endl;
    if(flag == 0) {
        cout << "YES" << endl;
    } 
    else {
        cout << "NO" << endl;
    }



    return 0;
}