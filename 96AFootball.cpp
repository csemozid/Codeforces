#include <iostream>

using namespace std;

int main() {
    string seq;
    int i, j, count = 0;
    cin >> seq;

    for(i = 0; i < seq.size()-7; i++) {
        if(count == 7) {
            break;
        }
        for(j = i; j < i+7; j++) {
            if(seq[i] == seq[j]) {
                count++;
            }
            else {
                count = 0;
                break;
            }
        }
    }

    if(count == 7) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}


