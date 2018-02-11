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
    //BST(const BST& orig);
    //virtual ~BST();

    void insert(string t);
    node* insert(node* root, string t);
    
    bool search(node* Node, string data);
    
    void inorder(node* root);
    void preorder(node* root);
    void postorder(node* root);

    void ausgabeEbenen(node* root);
    int height(node* node);
    void printLevelOrder(node* Node);
    void printGivenLevel(node* Node, int level);

    void main() {
        cout << endl << "BST::main()" << endl;
        insert("Peter");
        insert("Altenbernd");
        insert("faehrt");
        insert("nach");
        insert("Darmstadt");
        //print(root);
        inorder(root);
        cout << endl;
        preorder(root);
        cout << endl;
        postorder(root);
        cout << endl;
        ausgabeEbenen(root);
        cout << endl;
        int levels = height(root);
        printLevelOrder(root);
        cout << search(root, "nach") << " " << search(root, "asd") << endl;
    }
private:
    //node* root;
};

#endif /* BST_H */


