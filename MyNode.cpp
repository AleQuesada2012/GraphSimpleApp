//
// Created by alejandrojqc on 23/9/20.
//
#include <iostream>
#include "MyNode.h"

MyNode::MyNode() {
    this->data = 0;
    this->nextPtr = nullptr;
}

void MyNode::setData(int newData) {
    this->data = newData;
}

void MyNode::setNext(MyNode *newPtr) {
    this->nextPtr = newPtr;
}

int MyNode::getData() {
    return this->data;
}

MyNode *MyNode::getNext() {
    return this->nextPtr;
}

void MyNode::print() {
    std::cout << "Node Value: " << this->data <<  std::endl;
}


