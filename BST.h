/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BST.h
 * Author: Uni-R
 *
 * Created on 3. Februar 2018, 18:27
 */

#ifndef BST_H
#define BST_H
#include "BTree.h"
#include <queue>

class BST : BTree {
public:
    BST();
    BST(const BST& orig);
    //virtual ~BST();

    void insert(string t);
    node* insert(node* root, string t);
    void ausgabe();
    
    void main() {
        cout << endl << "BST::main()" << endl;
        insert("Peter");
        insert("Altenbernd");
        insert("faehrt");
        insert("nach");
        insert("Darmstadt");
        print(root);
        ausgabe();
    }
private:
    node* root;
};

#endif /* BST_H */

        
