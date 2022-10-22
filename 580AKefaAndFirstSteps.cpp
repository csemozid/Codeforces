#include<iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long arr[n], max = 1, temp = 1;
    cin >> arr[0];
    for(int i = 1; i < n; i++) {
        cin >> arr[i];
        if(arr[i] >= arr[i-1]) max++;
        else {
            if(max > temp) temp = max;
            max = 1;
        }
    }
    if(max > temp) cout << max << endl;
    else cout << temp << endl;

    return 0;
}