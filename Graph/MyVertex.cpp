//
// Created by alejandrojqc on 25/9/20.
//

#include "MyVertex.h"

MyVertex::MyVertex() {
    this->data = 0;
    this->nextPtr = nullptr;
}

void MyVertex::setData(int data) {
    this->data = data;
}

void MyVertex::setNext(MyVertex *ptr) {
    this->nextPtr = ptr;
}

int MyVertex::getData() {
    return this->data;
}

MyVertex *MyVertex::getNext() {
    return this->nextPtr;
}

void MyVertex::setCost(int cost) {
    this->cost = cost;
}

int MyVertex::getCost() {
    return this->cost;
}
