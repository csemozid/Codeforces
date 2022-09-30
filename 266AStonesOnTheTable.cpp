#include <iostream>

using namespace std;

int main() {
    char arr[100];
    int n, count = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] == arr[i+1]) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}