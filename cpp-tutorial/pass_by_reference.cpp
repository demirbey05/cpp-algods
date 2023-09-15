//
// Created by huseyin on 8/24/23.
//


#include <iostream>
using namespace  std;

void f(int value,int& ref){
    value++;
    ref++;
    cout << value << endl;
    cout << ref << endl;
}

int main(){
    int cat = 1;
    int dog = 5;
    f(cat, dog);
    cout << cat << endl;
    cout << dog << endl;
    return EXIT_SUCCESS;
}