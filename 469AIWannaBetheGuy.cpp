#include<iostream>
using namespace std;

int main() {
    int n, p, flag = 0;
    cin >> n >> p;
    int arr[2*p];
    for(int i = 0; i < 2*p; ++i) {
        cin >> arr[i];
    }
    for(int j = 1; j <= n; ++j) {
        //cout << "Flag: " << flag << endl;
        for(int k = 0; k < 2*p; k++) {
            if(j == arr[k]) {
                flag++;
                break;
            }
        }
    }
    //cout << "Flag: " << flag << endl;
    if(flag == n) cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;
    return 0;
}