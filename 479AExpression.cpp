#include<iostream>
using namespace std;

int main() {
    int arr[3], count = 0;
    for(int i = 0; i < 3; i++) {
        cin >> arr[i];
        if(arr[i] == 1) count++;
    }

    if(count == 0) {
        cout << arr[0]*arr[1]*arr[2] << endl;
    }
    if(count == 3) cout << 3 << endl;
    if(count == 2) {
        if(arr[0] == 1 && arr[1] == 1) cout << 2*arr[2] << endl;
        if(arr[1] == 1 && arr[2] == 1) cout << 2*arr[0] << endl;
        if(arr[0] == 1 && arr[2] == 1) cout << arr[1]+2 << endl;
    }
    if(count == 1) {
        if(arr[0] == 1) cout << (arr[0]+arr[1])*arr[2] <<endl;
        if(arr[2] == 1) cout << arr[0]*(arr[1]+arr[2]) << endl;
        if(arr[1] == 1) {
            if(arr[0] < arr[2]) cout << (arr[0]+arr[1])*arr[2] << endl;
            else cout << arr[0]*(arr[1]+arr[2]) << endl;
        }
    }
    

    return 0;
}