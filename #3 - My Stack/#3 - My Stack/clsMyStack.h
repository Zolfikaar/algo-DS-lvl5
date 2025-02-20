#pragma once
#include <iostream>

#include "clsDblLinkedList.h"

template <class T>
class clsMyStack
{

protected:
    clsDblLinkedList <T> _MyList;

public:
    void push(T item)
    {
        _MyList.InsertAtEnd(item);
    }

    void pop()
    {
        _MyList.DeleteLastNode();
    }

    void print() {
        _MyList.PrintList();
    }

    int size() {
        return _MyList.Size();
    }

    bool isEmpty()
    {
        return _MyList.IsEmpty();
    }

    T top() {
        return _MyList.GetItem(0);
    }

    void clear()
    {
        _MyList.Clear();
    }

    void Reverse()
    {
        _MyList.Reverse();
    }

    void UpdateItem(int index, T value)
    {
        _MyList.UpdateItem(index, value);
    }
};

