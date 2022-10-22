#include <iostream>
using namespace std;

int main() {
    long long n, ans = 0;
    int a[] = {0, 0, 0, 0, 0};
    int p;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> p;
        a[p]++;
    }

    // for (int j = 0; j < 5; j++){
    //     cout << a[j] <<" ";
    // }

    //4 4 3 3 2 2 1 1 
    //1 2 4 3 3
    //4 3 3 1 2
    //3 3 3 1 1 1 1 71
    ans = a[4];
    if(a[1] == a[3]) {
        ans = ans + a[1]; 
        a[1] = 0;
        a[3] = 0;
    }
    if(a[1] > a[3]) {
        a[1] = a[1] - a[3]; 
        ans += a[3]; //3 a[1] = 1, a[2] = 71 a[3] = 0
        a[3] = 0;
    }
    if(a[1] < a[3]) {
        ans = ans + a[3];
        a[1] = 0;
        a[3] = 0;
    }
    if(a[2] % 2 == 0) {
        ans = ans + a[2]/2; //5
        a[2] = 0;
    }
    if(a[2] % 2 == 1 && a[2] != 0 && a[2] != 1) {
        ans = ans + a[2]/2; // ans = 38
        a[2] = 1;
    }
    if(a[2] == 1 && a[1] == 0) {
        ans = ans + 1;
        a[2] = 0;
    }
    if(a[2] == 1 && a[1] == 1) {
        ans = ans + 1;
        a[2] = 0;
        a[1] = 0;
    }
    if(a[1] > 2 && a[2] == 1) {
        a[1] = a[1] - 2;
        ans = ans + 1;
    }
    if(a[1] <= 4 && a[1] != 0) {
        ans = ans + 1;
    }
    else {
        ans = ans + a[1]/4;
        if(a[1] % 4 > 0) ans = ans + 1;
    }

    cout << ans << endl;
    
    
    return 0;
}