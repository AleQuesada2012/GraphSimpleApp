//
// Created by alejandrojqc on 23/9/20.
//
#pragma once
#include "MyNode.h"
class MyLinkedList {
public:
    MyLinkedList();
    void append(int data);
    void remove(int data);
    void remIndex(int i);
    MyNode * getHead();
    MyNode * getLast();
    int length;
    bool contains(int data);

private:
    MyNode * headPtr;
    MyNode * lastPtr;
};

