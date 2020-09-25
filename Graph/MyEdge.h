//
// Created by alejandrojqc on 25/9/20.
//

#pragma once

class MyEdge {
public:
    MyEdge(int src, int dest, int weight);
    void setSource(int newSrc);
    int getSource();
    void setDestination(int newDest);
    int getDestination();
    void setWeight(int newWeight);
    int getWeight();
private:
    int source;
    int destination;
    int weight;
};

