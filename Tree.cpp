#include "Tree.h"
#include "Session.h"
Tree::Tree(int rootLabel):node(rootLabel) {
//    this->children.push;
}

Tree::Tree(const Tree& other):  node(other.node), children(other.children){
    for(int i=0; i<this->children.size();i++){
        other.children
    }
}

Tree * Tree::clone() {
    return nullptr;
}

void Tree::addChild(const Tree &child) {
    Tree* newChild=child.clone();
}
//
//Tree *Tree::clone() {
//    return new Tree (*this);
//}

Tree* CycleTree::clone() {return new CycleTree(*this);}

//void CycleTree::addChild(const CycleTree &child) {
//    CycleTree* clone=
//}
const std::vector<Tree*>&getChildren(){
}

CycleTree::CycleTree(int rootLabel, int currCycle):currCycle(currCycle),Tree(rootLabel) {

}

CycleTree::CycleTree(CycleTree &other): {
}


Tree* MaxRankTree::clone() {return new MaxRankTree(*this);}

Tree* RootTree::clone() {return new RootTree(*this);}

Tree * Tree::createTree(const Session &session, int rootLabel) {

}


//
//void Tree::addChild(const Tree &child) {
//
//}


