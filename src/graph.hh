#ifndef GRAPH_HH
#define GRAPH_HH

#include <iostream>
#include <list>
#include <vector>
#include "unionfind.hh"

using namespace std;


class Graph {
  private:
    vector<list<int> > graph;
  public:
    //___________CONSTRUCTORES__________
    Graph();
    Graph(const int vert);
    //Graph(const Graph & graph);
    ~Graph();
    //___________MODIFICADORES__________
    vector<list<int> > getGraph() const;
    void addEdge(const int vert0, const int vert1);
    void deleteEdge(int vert0, int vert1);
    void deleteVert(int vert);
    Graph percolateVertices(int q);
    Graph percolateEdges(int q);
    bool checkConnected(const list<int>& top, const list<int>& bottom);
  public:
    //__________CONSULTORES__________
    void read();
    void print() const;
};
#endif
