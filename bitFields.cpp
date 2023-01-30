//
// Created by solteszistvan on 2023.01.15..
//
#include <iostream>
#include"bitFields.h"
using namespace std;
void bitF1(){
    cout << "##########\nbitFields\n\n";
    struct S{
        int head : 4;
        int content : 8;
        int modified : 1;
        int address : 48;

        struct A{
            unsigned int content : 4;
        }A;
    }S;
    /*
     * Objects of struct S consist of 5 different memory locations
     * The order of the memory locations is not trivial.
     */
    struct S v1 = {15,255, 0, 0xaaaa, {15}};
    cout << v1.head << "\n" << v1.A.content << "\n";
    cout << "Type of v1's head member is " << typeid(v1.head).name() << "\n";
    cout << "Size of v1 is " << sizeof(v1) << "\n";
    //Within 16 bytes = 128 bits, an instance of a struct with
    //4 bit field members of width 4,8,1,48 and of type int fit, together
    //with a nested class with a bit field of length 4 of type unsigned int.
    //The data members of S are as wide as their width.
    cout << "\n##########\n";

}