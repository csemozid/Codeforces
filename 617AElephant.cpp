#include <iostream>

using namespace std;

int main() {
    long int dis, stepCount = 0;
    cin >> dis;
    if(dis >= 5) {
        stepCount = dis/5;
    }
    if(dis % 5 != 0) {
        stepCount++;
    }
  
    cout << stepCount << endl;

    return 0;
}





// int main() {
//     long int dis, stepCount = 0;
//     cin >> dis;
//     while(dis != 0) {
//         if(dis >= 5) {
//             dis = dis - 5;
//             stepCount++;
//         }
//         else if(dis == 4) {
//             dis = dis - 4;
//             stepCount++;
//         }
//         else if(dis == 3) {
//             dis = dis - 3;
//             stepCount++;
//         }
//         else if(dis == 2) {
//             dis = dis - 2;
//             stepCount++;
//         }
//         else if(dis == 1) {
//             dis = dis - 1;
//             stepCount++;
//         }
//     }
//     cout << stepCount << endl;

//     return 0;
// }