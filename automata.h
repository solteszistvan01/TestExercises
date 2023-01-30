//
// Created by solteszistvan on 2023.01.17..
//

#ifndef FSA_AUTOMATA_H
#define FSA_AUTOMATA_H

#include <string>
using namespace std;

class Alphabet {
    char *characters;

    Alphabet(char* characters):characters(characters){};
    bool in(char &c);
};


class DFA{// TODO: Internal state representation might be better with a string

    class State{
        string name;

        State(string name):name(name){};

        string getName(){
            return name;
        }

    };

    //Determines for each state the next state for every possible input


    Alphabet inputA;
    Alphabet outputA;

    State* states;
    State initialState;
    State* accepting;
    State active;

    DFA(string* states, string initialState, string* accepting, char* input, char* output, string** transition);

    State transition(State current, char input);

    string state;
    bool run(string input ){}
};

class Mealy : DFA{};
#endif //FSA_AUTOMATA_H
