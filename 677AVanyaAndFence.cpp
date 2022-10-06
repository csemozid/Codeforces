#include <iostream>
using namespace std;

int main() {
    int n, fenceHeight, arr[2000], width, i;
    cin >> n >> fenceHeight;
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }
    width = n, i = 0;
    while(i < n) {
        if(arr[i] > fenceHeight) {
            width++;
        }
        i++;
    }
    cout << width << endl;
    return 0;
}