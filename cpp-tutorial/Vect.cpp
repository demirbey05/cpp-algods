//
// Created by huseyin on 8/24/23.
//

#include "Vect.h"


Vect::Vect(int n) {
    size = n;
    data = new int[n];
}
Vect::Vect(const Vect &a) {
    size = a.size;
    data = new int[size];
    for(int i = 0;i<size;i++){
        data[i] = a.data[i];
    }
}
Vect::~Vect() {
    delete [] data;
}

Vect& Vect::operator=(const Vect& a){
    if(this != &a){
        delete [] data;
        size = a.size;
        data = new int[size];
        for(int i = 0;i<size;i++){
            data[i] = a.data[i];
        }
    }
    return *this;
}
//If we did not provide the destructor in the example above, the deletion of an object
//of type Vect would cause a memory leak