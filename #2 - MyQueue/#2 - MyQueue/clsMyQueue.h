#pragma once
#include <iostream>
#include "clsDblLinkedList.h"

template <class T>
class clsMyQueue
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
        _MyList.DeleteFirstNode();
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

    T front() {
        return _MyList.GetItem(0);
    }

    T back() {
        return _MyList.GetItem(size() - 1);
    }

    T GetItem(int index)
    {
        return _MyList.GetItem(index);
    }

    void Reverse()
    {
        _MyList.Reverse();
    }

    void UpdateItem(int index, T value)
    {
        _MyList.UpdateItem(index, value);
    }

    void InsertAfter(int index, T value)
    {
        _MyList.InsertAfter(index, value);
    }

    void InsertAtFront(T value)
    {
        _MyList.InsertAtBeginning(value);
    }

    void InsertAtBack(T value)
    {
        _MyList.InsertAtEnd(value);
    }

    void clear()
    {
        _MyList.Clear();
    }
};

