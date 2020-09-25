//
// Created by alejandrojqc on 25/9/20.
//
#include "Graph.h"
#include <iostream>
using namespace std;
int main() {
    MyEdge edges[] = {
            {0,1,2} , {0,2,4} , {1,4,3},
            {2,3,2} , {3,1,4} , {4,3,3}
    };
    int N = 6;
    int n = sizeof(edges)/sizeof(edges[0]);
    Graph graph(edges,n,N);

    cout << "Graph adjacency list " << endl << "(source, end, weight)" << endl;
    for (int i = 0; i < N; ++i) {
        graph.printList(graph.head[i], i);
    }
    return 0;
}
