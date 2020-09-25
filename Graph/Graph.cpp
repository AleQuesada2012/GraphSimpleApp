//
// Created by alejandrojqc on 25/9/20.
//

#include "Graph.h"
#include <iostream>
using namespace std;
Graph::~Graph() {
    for (int i = 0; i < this->N; ++i) {
        delete [] head[i];
    }
    delete [] head;
}

MyVertex *Graph::getAdjListNode(int value, int weight, MyVertex *head) {
    MyVertex *newVertex = new MyVertex;
    newVertex->setData(value);
    newVertex->setCost(weight);
    newVertex->setNext(head);
    return newVertex;
}

Graph::Graph(MyEdge *edges, int n, int N) {
    this->head = new MyVertex *[N]();
    this->N = N;

    for (int i = 0; i < N; ++i) {
        this->head[i] = nullptr;
    }

    for (unsigned i = 0; i < n; i++) {
        int source = edges[i].getSource();
        int destin = edges[i].getDestination();
        int weight = edges[i].getWeight();
        MyVertex * newVertex = getAdjListNode(destin, weight, head[source]);
        head[source] = newVertex;
    }
}

void Graph::printList(MyVertex *ptr, int i) {
    while (ptr != nullptr) {
        cout << '(' << i << ", " << ptr->getData() << ", "
        << ptr->getCost() << ") ";
        ptr = ptr->getNext();
    }
    cout << endl;
}
