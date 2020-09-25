//
// Created by alejandrojqc on 23/9/20.
//

#include "MyLinkedList.h"
#include <malloc.h>
MyLinkedList::MyLinkedList() {
    this->length = 0;
    this->headPtr = nullptr;
    this->lastPtr = nullptr;
}

void MyLinkedList::append(int data) {
    MyNode * newNode = new MyNode(); // use of pointers
    newNode->setData(data);
    newNode->setNext(nullptr);
    if (this->headPtr == nullptr) {
        this->headPtr = newNode; // sets the new node pointer as the head pointer
        this->lastPtr = newNode; // list is only one node so it is both the head and the last node.
    }
    else {
        MyNode * temp = headPtr;
        while (temp->getNext() != nullptr) {
            temp = temp->getNext();
        }
        temp->setNext(newNode); //links the temp pointer to new node
        this->lastPtr = newNode;
    }
    this->length++;
}

void MyLinkedList::remove(int data) {
    //check first if the head is the tbremoved.
    if (headPtr->getData() == data) {
        // do removal when the data to kill is in first node
        MyNode * toFree = headPtr;
        headPtr = headPtr->getNext();
        toFree->setData(0);
        free(toFree);
    }
    else {
        MyNode *temp = headPtr;
        while (temp->getNext() != nullptr) {
            if (temp->getNext()->getData() == data) {
                //procedure of removal for any other node
                // TODO: finish deletion steps. (not urgent).
            }
            else {
                temp = temp->getNext();
            }
        }
    }
    this->length--;
}

void MyLinkedList::remIndex(int i) {
    this->length--;
}

MyNode *MyLinkedList::getHead() {
    return this->headPtr;
}

MyNode *MyLinkedList::getLast() {
    return this->lastPtr;
}

bool MyLinkedList::contains(int data) {
    MyNode * temp = headPtr;
    while (temp->getNext()!= nullptr) {
        if (temp->getData() == data)
            return true;
        temp = temp->getNext();
    }
    return false;
}
