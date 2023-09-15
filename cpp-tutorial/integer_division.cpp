//
// Created by huseyin on 8/24/23.
//

#include<iostream>
using namespace std;
int main(){
    int i1 = 18;
    int i2 = 16;
    double dv1 = i1 / i2; // 1
    double dv2 = double(i1) / i2; // 1.125 i2 is implicitly cast.
    double dv3 = double(i1/i2); // 1.0
    double dv4 = double(i1)/double(i2); // 1.125

    cout << dv1<<endl;
    cout <<dv2 <<endl;
    cout << dv3 <<endl;
    cout << dv4 << endl;

}