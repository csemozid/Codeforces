#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>


using namespace std;

int main() {
    int n, k, value, arr[100];
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> value;
        arr[i] = value;
    }
    int j, count =0;
    for(j = 0; j < n; j++) {
        if(arr[j] >= arr[k-1] && arr[j] != 0) {
            count++;
        }
    }
    cout << count <<endl;
    return 0;
}