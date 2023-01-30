//
// Created by solteszistvan on 2023.01.15..
//
#include <iostream>
#include"basic_concepts.h"
using namespace std;

void Identifiers(){
}
void pointers2pointers2pointers(){
    std::cout << "########## p2p2p\n\n";
    int***r; // A tree of depth 3 has been introduced.

    int**x1; // A tree of depth 2 has been introduced

    int *x11;// A tree of depth 1 has been introduced
    x11 = new int[4]; // The tree named by x11 has 4 children
    x11[0] = 1; // The first children is 1
    x11[1] = 2;
    x11[2] = 3;
    x11[3] = 4;

    int *x12;
    bool x12IsLater = x12 <= x11;
    cout << "x12's memory address is at a greater address than x11's address: " << bool(x12IsLater) << "\n";
    x12 = new int[4];
    x12[0] = 5;
    x12[1] = 6;
    x12[2] = 7;

    int *x13;
    x13 = new int[4];
    x13[0] = 8;
    x13[1] = 9;
    x13[2] = 10;
    x13[3] = 11;


    x1 = new int*[3]; // x1 has 3 children whose childrens are trees of depth 1
    x1[0] = x11; // An unqualified name lookup happens. x11 is found within the current scope.
    x1[1] = x12;
    x1[2] = x13;


    int**x2;
    int*x21;
    x21 = new int[2];
    x21[0] = 1;
    x21[1] = 322371;

    int*x22;
    x22 = new int[2];
    x22[0] = 221;
    x22[1] = 222;

    x2 = new int*[2];
    x2[0] = x21;
    x2[1] = x22;

    r = new int**[2];
    r[0] = x1;
    r[1] = x2;

    std::cout << "First table's first element is " << r[0][0][0] << "\n";
    std::cout << "Within the first part of the restaurant in desserts the second dessert's number is " <<  r[1][0][1] << "\n";

    std::cout << "The initialized data of the 4th element of x12 is " << x12[3] << "\n";
    delete(x11);
    delete(x12);
    delete(x13);
    delete(x1);
    delete(x21);
    delete(x22);
    delete(x2);
    delete(r);
    //Assuming that all deleted data has been deleted

    cout << "Connecting "\
    << "Two physical lines into a single logical line\n";

    std::cout << "##########\n";
}
