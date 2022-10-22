#include<iostream>
using namespace std;

int main() {
    int n, sol, min, max, imin, imax, swap = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> sol;
        if(i == 0) {
            min = sol;
            max = sol;
            imin = i;
            imax = i;
        }
        if(sol <= min) {
            min = sol;
            imin = i;
        }
        if(sol > max) {
            max = sol;
            imax = i;
        }
    }
    swap = imax + (n-1-imin);
    if(imax > imin) {
        swap--;
    }
    cout << swap << endl;

    return 0;
}