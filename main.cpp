/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Uni-R
 *
 * Created on 3. Februar 2018, 14:29
 */

#include <cstdlib>

#include "BTree.h"
#include "BST.h"

using namespace std;

/* PROBLEME:
 * Print benötigt einen Input node -> in der Aufgabe steht nur print()
 * Ich weiß nicht ob der Kopierkonstruktor wirklich funktioniert ^^"
 * Destruktor bekomme ich nicht zum laufen -.-
 * Stimmt eigentlich die Vererbung? o.o
 * Aufgabe 3 habe ich den Insert schon sortieren lassen anstatt den print() sollte erlaubt sein ?:D
 */
int main(int argc, char** argv) {

    BTree B;
    B.main();
    
    BTree C = BTree(B);
    
    BST A;
    A.main();
    return 0;
}

