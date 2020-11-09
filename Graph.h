#ifndef GRAPH_H_
#define GRAPH_H_
#include <list>
#include <vector>
enum Status{
    Sick,
    Healthy,
    Infected
};
//struct node{
//    int number;
//    Status status;
//};
class Graph{
public:
    Graph(std::vector<std::vector<int>> matrix);
    void BFS (int startingNode);
    void infectNode(int nodeInd);
    bool isInfected(int nodeInd);
    void setHealthy();
    bool isFinish();
    bool isFinishAux(std::vector<bool> &isVisited, int row, Status status);
private:
    std::vector<std::vector<int>> edges;
    std::vector<Status> statusList;
};

#endif