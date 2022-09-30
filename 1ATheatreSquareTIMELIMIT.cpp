#include <iostream>

using namespace std;

int main() {
    long long n, m, a, areaRectangle, areaStone, count, multiple, i;
    cin >> n >> m >> a;
    areaRectangle = n * m;
    areaStone = a * a;
    if(areaRectangle <= areaStone) {
        count = 1;
        cout << count <<endl;
    }
    else {
        i = 2;
        multiple = areaStone;
        while(areaRectangle > multiple) {
            multiple = areaStone * i;
            if(areaRectangle == multiple) {
                break;
            }
            i++;
        }
        if(i % 2 != 0) {
            i++;
        }
        cout << i << endl;

    }


    return 0;
}