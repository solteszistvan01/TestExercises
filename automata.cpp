//
// Created by solteszistvan on 2023.01.17..
//

#include "automata.h"
#include <iostream>


int len(char* string) {
    return sizeof(string)/sizeof(string[0]);
}

//Alphabet

bool Alphabet::in(char& c){
    for(int i =0;  i<len(this->characters); i++){
        if (c==*(characters+i)){
            return true;
        }
    }
    return false;
}

//DFA

DFA::State DFA::transition(State current, char input){
    State nextState;

    return nextState;
}

