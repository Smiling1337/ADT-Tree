/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BTree.h
 * Author: Uni-R
 *
 * Created on 3. Februar 2018, 14:30
 */

#ifndef BTREE_H
#define BTREE_H
#include <cstdlib>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct node {
    string data;
    node* left;
    node* right;
    int number;
};

class BTree {
public:
    BTree();
    BTree(const BTree &orig);
    node* copyhelper(node* t);
    //virtual ~BTree();
    void destroyhelper(node* t);

    bool empty(node* root);
    node* leftTree(node* b);
    node* rightTree(node* b);
    string value(node* b);
    void print(node* root);
    void print();
    node* create();
    node* newnode(node* b1, string t, node* b2);

    void main() {
        root = newnode(newnode(create(), "Peter", newnode(create(), "Altenbernd", create())), "faehrt", newnode(create(), "nach", newnode(create(), "Darmstadt", create())));
        cout << empty(root->right) << endl;
        cout << value(root->left) << endl;
        print(root);
        
    };
private:
    node* root;
};

#endif /* BTREE_H */
