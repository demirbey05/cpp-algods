//
// Created by huseyin on 8/30/23.
//
#include "Person.h"
#include <iostream>
using namespace std;
int main() {
    Person* pp[100];
    pp[0] = new Person("Mary", "12-345");
    pp[1] = new Student("Bob", "98-764", "Math", 2012); // declare a Student
    pp[0]->print();
    pp[1]->print();
    delete pp[0];

}