#ifndef TREE_H_
#define TREE_H_

#include <vector>

class Session;

class Tree{
public:
    Tree(int rootLabel);
    Tree(const Tree& other);
    void addChild(const Tree& child);
    Tree* clone() const;
    static Tree* createTree(const Session& session, int rootLabel);
    virtual int traceTree()=0;
    const std::vector<Tree*>&getChildren();

protected:
    int node;
    std::vector<Tree*> children;
};

class CycleTree: public Tree{
public:
    CycleTree(int rootLabel, int currCycle);
    CycleTree( CycleTree& other);

    virtual int traceTree();
    Tree* clone() const;
    void addChild(const CycleTree& child);
private:
    int currCycle;
};

class MaxRankTree: public Tree{
public:
    MaxRankTree();
    Tree* clone();

    MaxRankTree(int rootLabel);
    virtual int traceTree();
};

class RootTree: public Tree{
public:
    RootTree(int rootLabel);
    virtual int traceTree();
    Tree* clone();
}
;
#endif
