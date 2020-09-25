//
// Created by alejandrojqc on 25/9/20.
//

#include "MyEdge.h"

MyEdge::MyEdge(int src, int dest, int weight) {
    this->source = src;
    this->destination = dest;
    this->weight = weight;
}

void MyEdge::setSource(int newSrc) {
    this->source = newSrc;
}

int MyEdge::getSource() {
    return this->source;
}

void MyEdge::setDestination(int newDest) {
    this->destination = newDest;
}

int MyEdge::getDestination() {
    return this->destination;
}

void MyEdge::setWeight(int newWeight) {
    this->weight = newWeight;
}

int MyEdge::getWeight() {
    return this->weight;
}
