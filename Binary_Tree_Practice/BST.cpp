#include <iostream>
#include <cstdlib>
#include "BST.h"



BST::BST() {
    root = nullptr;
}

BST::node* BST::CreateLeaf(int key) {
    node* n = new node;
    n->key;
    n->left = nullptr;
    n->right = nullptr;

    return n;
}

void BST::AddLeaf(int key) {
    AddLeafPrivate(key, root);
}

void BST::AddLeafPrivate(int key, BST::node *Ptr) {
    if(root == nullptr) {
        root = CreateLeaf(key);
    }
    else if(key < Ptr -> key) {
        if(Ptr->left != nullptr) {
            AddLeafPrivate(key, Ptr->left);
        }
        else {
            Ptr->left = CreateLeaf(key);
        }
    }
    else if(key > Ptr -> key) {
        if(Ptr->right != nullptr) {
            AddLeafPrivate(key, Ptr->right);
        }
        else {
            Ptr->right = CreateLeaf(key);
        }
    }
    else {
        std::cout << "The key " << key << " already exists.\n" << std::endl;
    }
}