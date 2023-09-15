//
// Created by huseyin on 9/15/23.
//

#include "GameScoreArray.h"

void Scores::add(const GameEntry &e) {
    int newScore = e.getScore();
    if(numEntries == maxEntries){
        if(newScore <= entries[maxEntries-1].getScore()){
            return;
        }
    }else{
        numEntries++;
    }
    int i = numEntries - 2;
    while(i >= 0 && newScore > entries[i].getScore()){
        entries[i+1] = entries[i];
        i--;
    }
    entries[i+1] = e;
}

GameEntry Scores::remove(int i) noexcept(false) {
    if(i<0 || i >=numEntries){
        throw IndexOutOfBounds("Invalid Index");
    }
    GameEntry temp = entries[i];
    while(i != (numEntries - 1) ){
        entries[i] = entries[i + 1];
        i++;
    }
    numEntries--;
    return temp;
}