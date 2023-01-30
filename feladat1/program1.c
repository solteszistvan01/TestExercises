//
// Created by solteszistvan on 2022.11.05..
//

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
    1. Bontsa fel a programját egy header és egy forrásfájlra, ahol a header-ben megadja egy egyértelmű felbontását a függvényeknek. OK
    A felbontáshoz tartozó hierarchia szintjeit jelölje a '#' szimbólumok száma, elemeiket pedig a #-ok után következő karaktersorozatok. OK
    2. A feladathoz tartozó program fusson egy 'program1.c' nevú fájlban OK
 */

#include "gauss_eliminacio.h"

int program1() {
    int m = 5, n=7;
    dMatrix M1;
    dMatrix M2;
    dMatrix M3;

    M1 = createMatrix(m,n,f1);
    M2 = createMatrix(m, n, f2);

    printMatrix(M1,m,n);
    printMatrix(M1,m,n);

    freeMatrix(M1,m,n);
    freeMatrix(M2,m,n);

    /*
    double** arr3;
    arr3 = (double**)malloc(sizeof(double*)*m);
    for (int i = 0; i < n ; i++){
        arr3[i] = (double*)malloc(sizeof(double)*n);
    }

    for (int i = 0; i < m ; i++){
        for (int j = 0; j < n; j++){
            arr3[i][j] = arr1[i][j] + arr2[i][j];
            printf("a3(%d,%d) = %f\n",i,j,arr3[i][j]);
        }
    }

    arr3 = GaussElimination(&arr3, m, n);

    for(int i =0 ; i < m; i++){
        for (int j = 0 ; j< n; j++){
            free(arr1[i]+j);
            free(arr2[i]+j);
            free(arr3[i]+j);
        }
        free(arr1 +i);
    }
    */

    return 0;
}