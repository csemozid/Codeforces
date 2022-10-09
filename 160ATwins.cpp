#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num, total = 0, hand = 0, reminder, count = 0;
    cin >> num;
    int arr[num];
    for(int i = 0; i < num; i++) {
        cin >> arr[i];
        total = total + arr[i];
    }
    reminder = total;
    sort(arr, arr + num, greater<int>());
    //cout << total;
    int j = 0;
    while(hand <= reminder) {   //5, 4 2 2 2 2     
        hand = hand + arr[j];
        reminder = reminder - arr[j];
        j++;
        count++;
    }
    cout << count << endl;
    // for(int i = 0; i < num; i++) {
    //     cout << arr[i];
    // }
    return 0;
}