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
/*
BST::BST(const BST& orig) {
}
 */

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

bool BST::search(node * Node, string data) { // search info in tree p
    if (Node == nullptr) return false;
    if (data == Node->data) return true;
    else if (data < Node->data)
        return search(Node->left, data);
    else
        return search(Node->right, data);
}

void BST::inorder(node * Node) {
    if (Node == nullptr) {
        return;
    }
    inorder(Node->left);
    cout << " | " << Node->data;
    cout << " " << Node->number;
    inorder(Node->right);
}

void BST::preorder(node* Node) {
    if (Node == nullptr) {
        return;
    }
    cout << " | " << Node->data;
    cout << " " << Node->number;
    preorder(Node->left);
    preorder(Node->right);
}

void BST::postorder(node* Node) {
    if (Node == nullptr) {
        return;
    }

    preorder(Node->left);
    preorder(Node->right);
    cout << " | " << Node->data;
    cout << " " << Node->number;
}

void BST::ausgabeEbenen(node* root) {
    if (root != nullptr) {
        queue<node*> q;
        q.push(root);
        while (q.size() > 0) {
            node* p = q.front();
            cout << " | " << p->data << " " << p->number << " ";
            q.pop();
            if (p->left != nullptr) {
                q.push(p->left);
            }
            if (p->right != nullptr) {
                q.push(p->right);
            }
        }
    } else {
        cout << "Der Baum ist leer!" << endl;
    }
}

/* Compute the "height" of a tree -- the number of
    nodes along the longest path from the root node
    down to the farthest leaf node.*/
int BST::height(node* node) {
    if (node == nullptr) {
        return 0;
    } else {
        /* compute the height of each subtree */
        int lheight = height(node->left);
        int rheight = height(node->right);

        /* use the larger one */
        if (lheight > rheight) {
            return (lheight + 1);
        } else {
            return (rheight + 1);
        }
    }
}

/* Function to print level order traversal a tree*/
void BST::printLevelOrder(node* Node) {
    int h = height(Node);
    int i;
    for (i = 1; i <= h; i++) {
        printGivenLevel(Node, i);
        cout << endl;
    }
}

/* Print nodes at a given level */
void BST::printGivenLevel(node* Node, int level) {
    if (Node == NULL)
        return;
    if (level == 1) {
        cout << " | " << Node->data;
        cout << " " << Node->number;
    } else if (level > 1) {
        printGivenLevel(Node->left, level - 1);
        printGivenLevel(Node->right, level - 1);
    }
}
