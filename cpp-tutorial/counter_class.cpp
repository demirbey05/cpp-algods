//
// Created by huseyin on 8/24/23.
//
class Counter {
public:
    Counter();
    int getCount();
    void increaseBy(int x);

private:
    int count;
};

Counter::Counter() {
    count = 0;
}
int Counter::getCount() {
    return count;
}
void Counter::increaseBy(int x) {
    count += x;
}

//Note that if no access specifier is given, the default is private for classes and
//public for structures.