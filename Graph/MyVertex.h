//
// Created by alejandrojqc on 25/9/20.
//
#pragma once

class MyVertex {
public:
    MyVertex();
    void setData(int data);
    void setNext(MyVertex * ptr);
    void setCost(int cost);
    int getData();
    int getCost();
    MyVertex * getNext();

private:
    int data;
    int cost;
    MyVertex * nextPtr;


};
