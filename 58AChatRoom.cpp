#include <iostream>
using namespace std;

int main() {
    string msg;
    int first = 0, eCount = 0, lCount = 0, oCount = 0, hFlag = 0, eFlag = 0, lFlag = 0, j = 0, hIndex = 100, eIndex = 100;
    cin >> msg;
    for(int i = 0; i < msg.length(); i++) {
        if(msg[i] == 'h' && hFlag != 1) {
            hIndex = i;
            j = i;
            while(msg[j] != '\0') {
                if(msg[j] == 'e')
                    eCount++;
                    j++;
            }
            hFlag = 1;
        }

        if(msg[i] == 'e' && eFlag != 1 && i > hIndex) {
            j = i;
            eIndex = i;
            while(msg[j] != '\0') {
                if(msg[j] == 'l')
                    lCount++;
                    j++;
            }
            eFlag = 1;
        }
        if(msg[i] == 'l' && lFlag != 1 && i > eIndex) {
            j = i;
            while(msg[j] != '\0') {
                if(msg[j] == 'o')
                    oCount++;
                    j++;
            }
            lFlag = 1;
        }
        
    }
    if(eCount >= 1 && lCount >= 2 && oCount >= 1) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}


// int main() {
//     string msg;
//     int first = 0, eCount = 0, lCount = 0, oCount = 0;
//     cin >> msg;
//     for(int i = 0; i < msg.length(); i++) {
//         if(msg[i] == 'h' && first != 1) {
//             for(int j = i; j < msg.length(); j++) {
//                 if (msg[j] == 'e') {
//                    eCount++ ;
//                 }
//                 else if (msg[j] == 'l') {
//                     lCount++;
//                 }
//                 else if (msg[j] == 'o') {
//                     oCount++;
//                 }
//             }
//             first = 1;
//         }
//     }
//     if(eCount >= 1 && lCount >= 2 && oCount >= 1) {
//         cout << "YES" << endl;
//     }
//     else {
//         cout << "NO" << endl;
//     }

//     return 0;
// }