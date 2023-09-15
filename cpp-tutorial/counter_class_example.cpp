//
// Created by huseyin on 8/24/23.
//
#include <iostream>
#include "counter_class.cpp"

using namespace std;

int main(){
    Counter ctr;
    cout << ctr.getCount()<<endl;
    ctr.increaseBy(4);
    cout << ctr.getCount()<<endl;
    ctr.increaseBy(5);
    cout << ctr.getCount() <<endl;
}