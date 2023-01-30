#include <iostream>
#include "hdr/memoryAllocation.h"
#include "hdr/basic_concepts.h"
#include "hdr/bitFields.h"
#include "hdr/Source_inclusion.h"

int main() {
    memoryAllocation();
    pointers2pointers2pointers();
    bitF1();
    inclusion();
    return 0;
}

/*
 * Issues:
 * Linking Error: Multiple definitions
 * solution: https://stackoverflow.com/questions/50799786/linking-error-multiple-definitions
 */

/*
 * Questions:
 * 1)
 * Is it possible to run a program, evaluate it's outputs and modify the program to achieve outputs different outputs
 * either non-deterministically or according to a goal using a function called f?
 * Can such a function f be defined within the program that is to be modified?
 * In short, can a function f modify the program itself in which it is defined?
 */

/*
 * Proposed solutions:
 * 1)
 * Assume, that f has an access to the source code of the code in which it is located.
 */