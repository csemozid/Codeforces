#include <iostream>
using namespace std;

int main() {
    int n, val = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> val;
        if(val == 1) {
            cout << "HARD" << endl;
            return 0;
        }
    }
    cout << "EASY" << endl;
    return 0;
}