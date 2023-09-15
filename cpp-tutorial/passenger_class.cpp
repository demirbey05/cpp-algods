//
// Created by huseyin on 8/24/23.
//

#include"passenger.h"

int main(){
    Passenger p1; // default constructor
    Passenger p2("John Smith", VEGETARIAN, "293145"); // 2nd constructor
    Passenger p3("Pocahontas", REGULAR);// not a frequent flyer
    Passenger p4(p3); // copied from p3
    Passenger p5 = p2; // copied from p2
    Passenger* pp1 = new Passenger; // default constructor
    Passenger* pp2 = new Passenger("Joe Blow", NO_PREF); // 2nd constr.
    Passenger pa[20]; // uses the default constructor
    p3.setName("Okan");
    cout << p3.getName() << endl; // Okan
    cout << p4.getName() << endl; // Pocahontas
}
//pp1 and pp2 create new passenger objects
//from the free store, and return a pointer to each