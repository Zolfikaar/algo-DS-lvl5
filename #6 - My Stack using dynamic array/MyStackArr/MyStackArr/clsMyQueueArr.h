#pragma once
#include "clsDynamicArray.h"

template <class T>
class clsMyQueueArr
{
protected:
	clsDynamicArray <T> myDynamicArr;

public:
	void push(T value) {
		myDynamicArr.InsertAtEnd(value);
	}

	void pop() {
		myDynamicArr.DeleteFirstItem();
	}

	int Size() {
		return myDynamicArr.Size();
	}

	bool IsEmpty()
	{
		return myDynamicArr.IsEmpty();
	}

	T front() {
		return myDynamicArr.GetItem(0);
	}

	T back() {
		return myDynamicArr.GetItem(Size() - 1);
	}

	void Print() {
		myDynamicArr.Print();
	}

	T GetItem(int index) {
		return myDynamicArr.GetItem(index);
	}

	void Reverse() {
		myDynamicArr.Reverse();
	}

	void UpdateItem(int Index, T NewValue)
	{
		myDynamicArr.SetItem(Index, NewValue);
	}

	void InsertAfter(int Index, T NewValue)
	{
		myDynamicArr.InsertAfter(Index, NewValue);
	}

	void InsertAtFront(T Value)
	{
		myDynamicArr.InsertAtBeginning(Value);
	}

	void InsertAtBack(T Value)
	{
		myDynamicArr.InsertAtEnd(Value);
	}

	void Clear()
	{
		myDynamicArr.Clear();
	}

};

