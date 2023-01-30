//
// Created by solteszistvan on 2023.01.13..
//

#ifndef MATRIX_MATRIX_H
#define MATRIX_MATRIX_H

class FloatMatrix{
    float ** data; //Two dimensional array
    int rows;
    int columns;

    FloatMatrix(float** data, int rows, int columns);

    float* getColumn(int n); //Returns an array considered to be the jth column of the data.
    float* getRow(int n); //Returns an array of floats considered to be the ith row of the data.

    FloatMatrix rref(); //Returns the reduced row echelon form of the data.
    FloatMatrix ref(); //Returns the row echelon form of the data.

    FloatMatrix* diads(); // Returns a list of least amount of diads whose sum is equal to the data.

    float determinant(); // Returns the determinant of the data.
};

#endif //MATRIX_MATRIX_H
