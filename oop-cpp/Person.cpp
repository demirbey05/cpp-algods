//
// Created by huseyin on 8/30/23.
//

#include "Person.h"
#include <iostream>
using namespace std;
string Person::getName() {
    return name;
}
void Person::print() {
    cout << "Name " << name << endl;
    cout << "IDnum " << idNum << endl;
}
void Student::print() {
    Person::print();
    cout << "Major " << major << endl;
    cout << "Year " << gradYear << endl;
}

void Student::changeMajor(const std::string &newMajor) {
    major = newMajor;
}

Person::Person(const std::string &_name, const std::string &_idNum) {
    cout << "Constructing the Person"<<endl;
    name = _name;
    idNum = _idNum;
}
Student::Student(const std::string &_name, const std::string &_idNum, const std::string &_major, int _gradYear): Person(_name,_idNum) {
    cout << "Constructing the Student"<<endl;
    major = _major;
    gradYear = _gradYear;
    
}
Person::~Person()  {
    cout << "Destructing the Person"<<endl;

}
Student::~Student(){
    cout << "Destructing the Student" << endl;
}