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

int main(int argc, char** argv) {

    BTree B;
    B.main();

    BTree C(B);
    cout << "B KOPIE:" << endl;
    C.print();
    
    BST A;
    A.main();
    return 0;
}

