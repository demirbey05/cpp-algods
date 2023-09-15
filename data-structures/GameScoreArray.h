//
// Created by huseyin on 9/15/23.
//

#ifndef CPP_ALGODS_GAMESCOREARRAY_H
#define CPP_ALGODS_GAMESCOREARRAY_H
#include<string>

#include "RuntimeException.h"

class GameEntry {
public:
    GameEntry(const std::string& n ="", int s = 0):name(n),score(s){}
    std::string getName() const {return name;}
    int getScore() const {return score;}

private:
    std::string name;
    int score;

};

class IndexOutOfBounds : public RuntimeException{
public:
    IndexOutOfBounds(const std::string& err):RuntimeException(err){}
};

class Scores {
public:
    Scores(int maxEnt = 10) : maxEntries(maxEnt),numEntries(0) {
        entries = new GameEntry[maxEntries];
    }
    ~Scores() {delete[] entries;}
    void add(const GameEntry& e);
    GameEntry remove(int i) noexcept(false);


private:
    int maxEntries;
    int numEntries;
    GameEntry* entries;
};


#endif //CPP_ALGODS_GAMESCOREARRAY_H
