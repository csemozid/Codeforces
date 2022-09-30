#include <iostream>

using namespace std;

int main() {
    string seq;
    cin >> seq;
    int i, count = 0;
    for(i = 1; i < seq.length(); i++) {
        if(seq[i] == seq[i-1]) {
            count++;
        }
        else {
            count = 1;
        }

        if(count >= 7) {
            break;
        }
    }
    if(count >= 7) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}