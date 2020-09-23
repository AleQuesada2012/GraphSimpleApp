//
// Created by alejandrojqc on 23/9/20.
//
#pragma once

class MyNode {
private:
    int data;
    MyNode * nextPtr;

public:
    MyNode();
    void print();
    void setData(int data);
    void setNext(MyNode * nextPtr);
    int getData();
    MyNode * getNext();
};

