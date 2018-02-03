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
    root = nullptr;
}

BTree::BTree(const BTree &orig) {
    this->copyhelper(orig.root);
}

node* BTree::copyhelper(node* t) {// returns a pointer to an exact copy of t
    if (t == nullptr)
        return nullptr;
    node *l, *r, *n;
    l = copyhelper(t->left); // copy left subtree
    r = copyhelper(t->right); // copy right subtree
    n = new node; // create new node
    n->data = t->data; // store info into the node
    n->left = l; // let left subtree become l
    n->right = r; // let left subtree become r
    return n;
}
/*
BTree::~BTree() {
    destroyhelper(root);
}*/

void BTree::destroyhelper(node* t) {
    if (t->left == nullptr && t->right == nullptr) {
        delete t;
        return;
    }
    if (t->left == nullptr) {
        destroyhelper(t->right);
    } else if (t->right == nullptr) {
        destroyhelper(t->left);
    } else {
        destroyhelper(t->left);
    }

}

bool BTree::empty(node* Node) {
    if (Node == nullptr) {
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

void BTree::print(node* Node) {
    if (Node == nullptr) {
        return;
    }
    print(Node->left);
    cout << " | " << Node->data;
    cout << " " << Node->number << endl;
    print(Node->right);
}

node* BTree::create() {
    node* Node = nullptr;
    return Node;
}

node* BTree::newnode(node* b1, string t, node* b2) {
    static int zahl = 0;
    node* root = new node;
    root->data = t;
    root->left = b1;
    root->right = b2;
    root->number = zahl;
    zahl++;
    return root;
}

