//
// Created by solteszistvan on 2023.01.15..
//

#include"../hdr/def&odr.h"
#include <iostream>

void test1(){
    Base* p[2];
    Inherited1* p1;
    Inherited2* p2;
    p[0] = p1; //It was required to use public inheritance for heterogenous collection
    p[1] = p2;

}