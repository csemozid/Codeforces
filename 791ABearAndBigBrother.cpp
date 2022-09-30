#include <iostream>

using namespace std;

int main() {
    int Limak, Bob, i;
    cin >> Limak >> Bob;
    for(i = 1; Limak <= Bob; i++) {
        Limak = Limak * 3;
        Bob = Bob * 2;
    }
    cout << i-1 << endl;
    return 0;
}