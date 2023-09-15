//
// Created by huseyin on 8/24/23.
//

#ifndef CPP_ALGODS_VECT_H
#define CPP_ALGODS_VECT_H


class Vect {
public:
    Vect(int n=10);
    Vect(const Vect& a);
    ~Vect();
    Vect& operator=(const Vect& a);
private:
    int* data;
    int size;
};


#endif //CPP_ALGODS_VECT_H
