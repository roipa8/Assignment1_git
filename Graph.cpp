#include "Graph.h"
#include <iostream>
using namespace std;
Graph::Graph(std::vector<std::vector<int>> matrix):edges(matrix){}

void Graph::infectNode(int nodeInd) {
    this->statusList[nodeInd]=Infected;
}
bool Graph::isInfected(int nodeInd) {
    return (this->statusList[nodeInd]==Infected);
}

void Graph::setHealthy(){
    for(int i = 0; i<this->edges.size(); i++){
        this->statusList.push_back(Healthy);
    }

}

bool Graph::isFinish() {
    std::vector<bool> isVisited;
    for(int i=0; i<edges.size(); i++){
        isVisited.push_back(false);
    }
//    bool isVisited= false;
    for (int i=0; i<this->edges.size(); i++){
        if(isVisited[i]== false){
            isVisited[i]=true;
            if(isFinishAux(isVisited, i, statusList[i])==false)
                return false;
        }
    }
    return true;
}

bool Graph::isFinishAux(std::vector<bool> &isVisited, int row, Status status) {
    for(int i=0; i<edges.size(); i++){
        if(edges[row][i]==1){
            if(isVisited[i]== false){
                isVisited[i]=true;
                if(statusList[i]!=status){
                    return false;
                }
                else{
                    return isFinishAux(isVisited,i,statusList[i]);
                }
            }
        }
    }

}

//Graph::Graph(std::vector<std::vector<int>> matrix) {
//    edges = matrix;
//}
//Graph::~Graph() {}
