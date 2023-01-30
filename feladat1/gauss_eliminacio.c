#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "gauss_eliminacio.h"
/*
Elmélet:
 Nézze meg, hogy mi a CMake Lists funkcionalitása!
 Nézze meg, hogy milyen módon alkalmazhatóak a moduláris programozási paradigmák egy C projekt készítésekor!
 Miért van szükség dinamikus memóriakezelésre?

Feladat C,1
Dinamikus memóriakezelés

	1.	Hozzon lètre dinamikusan két két dimenziós listát, melyek mindketten 5*7-esek.
	2.	Töltse fel az egyik lista elemeit úgy, hogy az i-edik sor j-edik eleme legyen azonos i^2 +j^2-tel, a másik lista elemeit pedig úgy, hogy az i-edik sor j-edik eleme legyen azonos sqrt(x^2 + y^2)-tel.
	3.	Hozzon létre egy harmadik listát dinamikusan, melynek az i-edik sorának j-edik eleme az előző két 2-dimenzios lista i-edik sorának j-edik eleme.
	4.	Tfh, hogy mindhárom lista egy kibővített együtthatómátrixával megadott lineáris egyenletrendszer reprezentációja. Hozzon létre egy f függvényt, mely eldönti, hogy az egyenletrendszer megoldása egyértelmű, nem megoldható, vagy végtelen megoldás van!
	5.	Tekintsük a 3 lista elemeit mod 2 o ceil. Hozzon létre egy g függvényt, mely összeadja a három, mod2 művelet után kapott mátrixokat az összeadás szerint Z2-ben! M.: 0+0 =0=1+0=0+1, 1+1=0
	6.	Másolja ki a három mátrix eredményét egy .txt fájlba. Az első sorban írja ki, hogy hány mátrix fog szerepelni a fájlban. A második sor legyen üres, a harmadiktól pedig irassa ki a két dimenziós listák elemeit úgy, hogy egy sorban egy lista elemei szerepeljenek vesszővel elválasztva. Két mátrix kiírása legyen elválasztva a “—“ sorral.
	7.	A dinamikusan foglalt elemeket szabadítsa fel a memóriából.

Határidő: 2022.11.06

 BÓNUSZ FELADATOK:
    1. Bontsa fel a programját egy header és egy forrásfájlra, ahol a header-ben megadja egy egyértelmű felbontását a függvényeknek.
    A felbontáshoz tartozó hierarchia szintjeit jelölje a '#' szimbólumok száma, elemeiket pedig a #-ok után következő karaktersorozatok.
    2. A feladathoz tartozó program fusson egy 'program1.c' nevú fájlban
    3. Kezelje a több dimenziós listákat struktúrákkal, melyek lehessenek indexelhetőek vagy nézze meg, hogy érdemesebb-e a typedef kulcsszót használni mátrixok definiálásához!
 */

// # Mátrixokat definiáló függvények
double f1(int i, int j){
    return i*i + j*j;
}

double f2(int i, int j){
    double result;

    result = sqrt((double)(i*i) + (double)(j*j));
    return result;
}


// ## Elemi átalakítások
double* multiplyRow(dVector row, double scalar, int length){
    double* newRow;

    return newRow;
}

void addRowToRow(dVector rowS, dVector rowT, int length){
    for (int i = 0; i <length;i++){
        rowT[i] = rowT[i] + rowS[i];
    }
}

void swapRowWithRow(dVector rowS, dVector rowT, int length){

}


// # Gauss Elimináció
double** GaussElimination(dMatrix matrix,int rows, int columns){
    for (int i =0; i < rows;){
        for (int j = 0; j < columns;){
            if (! matrix[i][j] == 0.0) {
                multiplyRow(matrix[i], 1 / matrix[i][j], rows);
                if (i < rows) {
                    for (int t = i + 1; t <= rows; t++) {
                        addRowToRow(multiplyRow(matrix[i], -matrix[t][j], rows), matrix[t], rows);
                    }
                } else if (i == rows || j == columns) {
                    break;
                } else {
                    i = i++;
                    j = j++;
                }
            }
            else{
                int Mtj_not_null = 0;
                for (int t = i+1; t <= rows; t++){
                    if(! matrix[t][j] == 0){
                        Mtj_not_null = 1;
                        break;
                    }
                }
                if (i < rows || Mtj_not_null){
                    //swapRowWithRow(matrix[i], matrix[j]);
                }
                else{
                    if (j == columns-1){
                        i = i-1;
                        break;
                    }
                    else{
                        j = j+1;
                    }
                }
            }
        }
    }
}


// # Dinamikusan foglalása mátrixoknak függvényekkel
dMatrix allocateMatrix(int rows, int columns){
    dMatrix Matrix;

    Matrix = (dMatrix)malloc(sizeof(dVector)* rows);
    for (int i = 0; i < rows; i++){
        Matrix[i] = (dVector)malloc(sizeof(double)*columns);
    }

    return Matrix;
}

dMatrix allocateForMatrix(int rows, int columns, double(*f)(int, int)){
    dMatrix Matrix;

    Matrix = (dMatrix)malloc(sizeof(dVector)* rows);
    for (int i = 0; i < rows; i++){
        Matrix[i] = (dVector)malloc(sizeof(double)*columns);
        for (int j = 0; j < columns; j++){
            Matrix[i][j] = f(i,j);
        }
    }

    return Matrix;
}

void freeForMatrix(dMatrix Matrix, int rows, int columns){
    for (int i = 0; i < rows ; i++){
        for (int j = 0; j < columns; j++){
            free(Matrix[i]+j);
        }
        free(Matrix + i);
    }
}

// # Mátrixok kiírása
void printMatrix(dMatrix matrix, int rows, int columns){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            printf("%d, ", matrix[i][j]);
        }
        printf("\n");
    }
}

/*
 * Notes:
 ** C passes arguments to functions by value -> There is no direct way for the called function to alter a variable in the calling function.
 * The address of a variable x of type T can be stored in a pointer of type T.
 *  *x is interpreted as the value referenced by x.
 *  The value referenced by x is the content of x.
 *  Ha "int a[n];" kifejezést tartalmaz egy helyes P programkód, mely c nyelven van megírva, ahol n természetes szám, akkor P-ben "x[m]" <-> "*(x+m)", ahol m<n természetes szám.
 *  Legyen P egy C nyelven írt programkód, "char s[];" része P-nek. Ekkor "char s[];" ekvivalens "char* s;"-vel.
 *  Legyen P programkor
 *  1) "f(&a[2])" ekvivalens "f(a+2)"-vel, ahol a tömb, a+2 résztömbje a-nak.
 */
