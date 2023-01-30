//
// Created by solteszistvan on 2023.01.17..
//
#include "/home/solteszistvan/CLionProjects/FSA/automata.h"
#include "/home/solteszistvan/CLionProjects/FSA/Google_tests/lib/googletest-main/googletest/include/gtest/gtest.h"

char* transition1(char active, char input){
    switch(active){ //TODO: SOLVE: Switch case is not good for testing strings as states
        case '1':
            switch(input){
                case '0':
                    return "4";
                case '1':
                    return "2";
            }
        case '2':
            switch(input){//TODO: SOLVE: Switch case is not reachable
                case '0':
                    return "4";
                case '1':
                    return "3";
            }
        case '3':
            switch(input){
                case'0':
                    return "4";
                case '1':
                    return "5";
            }
        case '4':
            switch(input){
                case '0':
                    return "4";
                case '1':
                    return "5";
            }
        case '5':
            switch(input){
                case '0':
                    return "4";
                case '1':
                    return "4";
            }
    }
}

    TEST(test suite, testname){
        EXPECT_TRUE(false);

};