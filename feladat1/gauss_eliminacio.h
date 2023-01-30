//
// Created by solteszistvan on 2022.11.05..
//

#ifndef UNTITLED_GAUSS_ELIMINACIO_H
#define UNTITLED_GAUSS_ELIMINACIO_H

// # Típusdefiníciók
typedef double** dMatrix;
typedef double* dVector;
// # Mátrixokat definiáló függvények
double f1(int i, int j);
double f2(int i, int j);

// # Gauss Elimináció
double** GaussElimination(dMatrix matrix, int rows, int columns);

// ## Elemi átalakítások
double* multiplyRow(double* row, double scalar, int length);
void addRowToRow(double* rowS, double* rowT, int length); // Itt rowT módosul
void swapRowWithRow(double* rowS, double* rowT, int length);

// # Dinamikusan foglalása és felszabadítása mátrixoknak függvényekkel
dMatrix allocateMatrix(int rows, int columns);
dMatrix createMatrix(int rows, int columns, double (*f)(int, int));

void freeMatrix(dMatrix matrix, int rows, int columns);

// # Mátrixok összeadása

// # Mátrixok kiírása

void printMatrix(dMatrix matrix, int rows, int columns);

#endif //UNTITLED_GAUSS_ELIMINACIO_H
