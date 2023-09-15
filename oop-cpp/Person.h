//
// Created by huseyin on 8/30/23.
//

#ifndef CPP_ALGODS_PERSON_H
#define CPP_ALGODS_PERSON_H
#include<string>
using std::string;

class Person {
public:
    Person(const string& _name,const string& _idNum);
    void print();
    string getName();
    virtual ~Person();
private:
    string name;
    string idNum;
};

class Student:public Person{
private:
    string major;
    int gradYear;
    virtual ~Student();
public:
    Student(const string& _name,const string& _idNum, const string& _major,int _gradYear);
    virtual void print();
    void changeMajor(const string& newMajor);
};


#endif //CPP_ALGODS_PERSON_H
