//
// Created by alejandrojqc on 21/9/20.
//
//temporarily using external, not self-made linked list code retrieved from https://gist.github.com/dukky/9244500
#include <iostream>
template<class T>
struct Node {
    Node<T> *next;
    T data;
};

template<class T>
class LinkedList {
public:
    Node<T> *first;
    Node<T> *last;
    LinkedList<T>() {
        first = nullptr;
        last = nullptr;
    }

    void add (T data) {
        if(!first) {
            // the list is empty
            first = new Node<T>;
            first->data = data;
            first->next = nullptr;
            last = first;
        }
        else {
            // the list isn't empty
            if (last == first) {
                // the list has only one element
                last = new Node<T>;
                last->data = data;
                last->next = nullptr;
                first->next = last;
            }
            else {
                // the list has more than one element
                Node<T> *toInsert = new Node<T>;
                toInsert->data = data;
                toInsert->next = nullptr;
                last->next = toInsert;
            }
        }
    }
    T get(int index) {
        if (index == 0) {
            return this->first->data;
        }
        else {
            Node<T> *current = this->first;
            for (int i = 0; i < index; ++i) {
                current = current->next;
            }
            return current->data;
        }
    }

    T operator[](int index) {
        return get(index);
    }
};