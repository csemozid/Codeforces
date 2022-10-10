#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    string b, check;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> b;
        if(i == 0) check = b;
        if(i >= 1) {
            if(b != check) {
                count++;
                check = b;
            }
        }
    }

    cout << count+1 << endl;
    return 0;
}