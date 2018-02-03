/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BST.cpp
 * Author: Uni-R
 * 
 * Created on 3. Februar 2018, 18:27
 */

#include "BST.h"

BST::BST() {
}

BST::BST(const BST& orig) {
}

/*BST::~BST() {
}*/


void BST::insert(string t) {
    root = insert(root, t);
}

node* BST::insert(node* Node, string t) {
    static int zahl = 0;
    if (Node == nullptr) {
        Node = new node;
        Node->data = t;
        Node->number = zahl;
        zahl++;
        Node->left = Node->right = nullptr;
    } else if (Node->data >= t) { //Vergleicht Strings nach Alphabet und Groß und Klein Schreibung
        Node->left = insert(Node->left, t);
    } else if (Node->data < t) { //Vergleicht Strings nach Alphabet und Groß und Klein Schreibung
        Node->right = insert(Node->right, t);
    }
    return Node;
}

void BST::ausgabe() {
    if(root != nullptr){
        queue<node* > q;
        q.push(root);
        while(q.size() > 0){
            node* p = q.front();
            cout << p->data << p->number << " ";
            q.pop();
            if(p->left != nullptr){
                q.push(p->left);
            }
            if(p->right != nullptr){
                q.push(p->right);
            }
        }
    }
    else{
        cout << "Der Baum ist leer!" << endl;
    }
}

