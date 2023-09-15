#include<iostream>
#include<string>

using std::string;

namespace myglobals {
    int cat = 5;
    string name = "Okan";
}

int main(){
    std::cout << myglobals::cat << std::endl;
}