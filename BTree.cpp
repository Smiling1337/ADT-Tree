/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BTree.cpp
 * Author: Uni-R
 * 
 * Created on 3. Februar 2018, 14:30
 */

#include "BTree.h"

BTree::BTree() {
    //root = nullptr;
}

BTree::BTree(node* orig) {
    //this->copyhelper(orig);
}

node* BTree::copyhelper(node* t) {// returns a pointer to an exact copy of t
    if (t == NULL)
        return NULL;
    node *l, *r, *n;
    l = copyhelper(t->left); // copy left subtree
    r = copyhelper(t->right); // copy right subtree
    n = new node; // create new node
    n->data = t->data; // store info into the node
    n->left = l; // let left subtree become l
    n->right = r; // let left subtree become r
    return n;
}

bool BTree::empty(node* root) {
    if (root == nullptr) {
        return true;
    }
    return false;
}

node* BTree::leftTree(node* b) {
    return b->left;
}

node* BTree::rightTree(node* b) {
    return b->right;
}

string BTree::value(node* b) {
    return b->data;
}

void BTree::print(node* root) {
    static int zahl = 0;
    if (root == nullptr) {
        return;
    }
    print(root->left);
    cout << " | " << root->data;
    cout << " " << zahl << endl;
    zahl++;
    print(root->right);
}

node* BTree::create() {
    node* root = nullptr;
    return root;
}

node* BTree::newnode(node* b1, string t, node* b2) {
    node* root = new node;
    root->data = t;
    root->left = b1;
    root->right = b2;
    return root;
}


