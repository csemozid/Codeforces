#include <iostream>
#include<iomanip>


using namespace std;
double VolumeFraction(double n, double arr1[]) {
    double sum = 0;
    for(int i = 0; i < n; i++) {
        sum = sum + arr1[i];
    }
    return sum/n;
}

int main() {
    int num;
    double result;
    cin >> num;
    double arr[num];
    for(int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    
    cout << fixed<< setprecision(12) << VolumeFraction(num, arr)  << endl;

    return 0;
}