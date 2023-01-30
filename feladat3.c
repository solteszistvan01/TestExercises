//
// Created by solteszistvan on 2022.11.03..
//
/*
Feladat, C,3
Automaták,nyelvfelismerés

Cél: Legyen DFA egy struct, mely képes eldönteni egy karaktersorozatról, hogy eleme-e az általa generált nyelvnek.

Legyen Q := {0,1,2,10,11,12,20,21,30,111,121,123},
∑ = C-ben lehetséger char típusú szimbólumok,
δ-t definiálja az alábbi táblázat, ahol egy üres elem átmenetet jelentsen a 0 állapotba.
δ	c	s	a	p	o	l	t	‘ ‘	s	o	r
0	1
1		2
2			10
10				11
11					12
12						20
20							21
21								30
30									111
111										121
121											123
123	123	123	123	123	123	123	123	123	123	123	123
0 legyen a kezdőállapot,
F := {123}

Az alábbi modellt tudja példányosítani a halmazok, mint listák, az átmeneti függveny, mint 2 dimenziós lista, a 0 mint int megadásával ebben a sorrendben!
 */
#include<stdio.h>

int main(){
    return 0;
}