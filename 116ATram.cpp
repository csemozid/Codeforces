#include <iostream>

using namespace std;

int main() {
    int n, exit, enter, current = 0, max = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> exit >> enter;
        current = current - exit + enter;
        if(current > max) {
            max = current;
        }
    }

    cout << max << endl;
    return 0;
}