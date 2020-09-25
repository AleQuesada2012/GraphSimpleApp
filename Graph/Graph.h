//
// Created by alejandrojqc on 25/9/20.
//

#include "MyVertex.h"
#include "MyEdge.h"

#pragma once


class Graph {
    MyVertex * getAdjListNode(int value, int weight, MyVertex * head);

    int N;
public:
    MyVertex ** head;
    Graph(MyEdge edges[], int n, int N);
    void printList(MyVertex * ptr, int i);
    ~Graph();
};

