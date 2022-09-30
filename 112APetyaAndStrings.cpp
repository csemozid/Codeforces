#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char first[200], second[200];

    cin >> first >> second;
    int i = 0;
    while(first[i] != '\0') {
        if(first[i] < 'a') {
            first[i] = first[i] + 32;
        }
        if(second[i] < 'a') {
            second[i] = second[i] + 32;
        }

        if(first[i] > second[i]) {
            cout << 1 << endl;
            break;
        }
        else if(first[i] < second[i]) {
            cout << -1 << endl;
            break;
        }
        i++;
    }
    if(first[i] == second[i]) {
        cout << 0 << endl;
    }
    

    return 0;
}



//Wrong ans in test 5:
// int main() {
//     char first[200], second[200];
//     int i = 0, val1 = 0, val2 = 0, diff;
//     cin >> first >> second;
//     while(first[i] != '\0') {
//         if(first[i] < 'a') {
//             first[i] = first[i] + 32;
//         }
//         if(second[i] < 'a') {
//             second[i] = second[i] + 32;
//         }
//         val1 = val1 + first[i];
//         val2 = val2 + second[i];
//         i++;
//     }
//     diff = val1 - val2;
//     if(diff > 0) {
//         cout << 1 << endl;
//     }
//     else if(diff < 0) {
//         cout << -1 << endl;
//     }
//     else {
//         cout << 0 << endl;
//     }

//     return 0;
// }