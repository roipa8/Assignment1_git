#include "Tree.h"
#include "Session.h"
Tree::Tree(int rootLabel):node(rootLabel) {
    return;
}

Tree::Tree(const Tree& other):  node(other.node){}

Tree * Tree::createTree(const Session &session, int rootLabel) {

}

void Tree::addChild(const Tree &child) {

}


