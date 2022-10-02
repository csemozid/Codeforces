#include <iostream>

using namespace std;

int main() {
    int n, time;
    string seq;
    cin >> n >> time >> seq;
    for(int i = 0; i < time; i++) {
        for(int j = 0; j < seq.length(); j++) {
            if(seq[j] == 'B' && seq[j+1] == 'G') {
                seq[j] = 'G';
                seq[j+1] = 'B';
                j++;
            }
        }
    }
    cout << seq << endl;

    return 0;
}