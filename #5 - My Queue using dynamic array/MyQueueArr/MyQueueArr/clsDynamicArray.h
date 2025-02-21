#pragma once

#include <iostream>
using namespace std;

template <class T>
class clsDynamicArray
{

private:
    int _Size = 0;
    T* _TempArr;

public:
    T* OriginalArray;

    clsDynamicArray(int Size = 0)
    {
        if (Size < 0)
            Size = 0;

        _Size = Size;

        OriginalArray = new T[_Size];
    }

    ~clsDynamicArray()
    {
        delete[]  OriginalArray;
    }

    bool SetItem(int index, T Value)
    {
        if (index >= _Size || _Size < 0)
        {
            return false;
        }

        OriginalArray[index] = Value;
        return true;
    }

    int Size()
    {
        return _Size;
    }

    bool IsEmpty()
    {
        return (_Size == 0 ? true : false);
    }

    void Print()
    {
        for (int i = 0; i <= _Size - 1; i++)
        {
            cout << OriginalArray[i] << " ";
        }

        cout << "\n";
    }

    void Resize(int newSize)
    {
        if (newSize < 0)
        {
            newSize = 0;
        }

        _TempArr = new T[newSize];

        // Limit the original size to the new size if its less
        if (newSize < _Size)
            _Size = newSize;

        // copy all items from original array untill the new size
        for (int i = 0; i < _Size; i++)
        {
            _TempArr[i] = OriginalArray[i];
        }

        _Size = newSize;
        delete[] OriginalArray;
        OriginalArray = _TempArr;

    }

    void Reverse()
    {
        for (int i = 0; i < (_Size / 2); i++)
        {
            T temp = OriginalArray[i];
            OriginalArray[i] = OriginalArray[_Size - 1 - i];
            OriginalArray[_Size - 1 - i] = temp;
        }
    }

    T GetItem(int index)
    {
        if (index >= _Size)
        {
            return NULL;
        }
                
        return OriginalArray[index];
    }

    void Clear()
    {
        OriginalArray = NULL;
        delete[]  OriginalArray;
        _Size = 0;
    }

    bool DeleteItem(int index)
    {
        if (index >= _Size || _Size < 0)
        {
            return false;
        }

        _Size--;

        _TempArr = new T[_Size];

        for (int i = 0; i < index; i++)
        {
            _TempArr[i] = OriginalArray[i];
        }

        for (int i = index + 1; i < _Size + 1; i++)
        {
            _TempArr[i - 1] = OriginalArray[i];
        }

        delete[] OriginalArray;
        OriginalArray = _TempArr;
        return true;
    }

    bool DeleteFirstItem()
    {
        return DeleteItem(0);
    }

    bool DeleteLastItem()
    {
        return DeleteItem(_Size - 1);
    }

    int FindByValue(T value)
    {
        for (int i = 0; i < _Size; i++)
        {
            if (OriginalArray[i] == value)
                return i;
                       
        }

        return -1;
    }

    bool DeleteItemByValue(T value)
    {
        int ItemIndex = FindByValue(value);

        return (ItemIndex != -1) ? DeleteItem(ItemIndex) : false;
    }

    void DeleteAllRepetItemByValue(T value)
    {

        for (int i = 0; i < _Size; i++)
        {
            if (OriginalArray[i] == value)
            {
                DeleteItem(i);
            }
        }

    }

    bool InsertAtIndex(int index, T value)
    {
        if (index > _Size || _Size < 0)
        {
            return false;
        }
       
         _Size++;
         _TempArr = new T[_Size];

        for (int i = 0; i < index; i++)
        {
            _TempArr[i] = OriginalArray[i];
        }

        _TempArr[index] = value;

        for (int i = index; i < _Size - 1; i++)
        {
            _TempArr[i + 1] = OriginalArray[i];
        }

        delete[] OriginalArray;
        OriginalArray = _TempArr;
        return true;
    }

    bool InsertAtBeginning(T value)
    {
        return InsertAtIndex(0,value);
    }

    bool InsertAfter(int index, T value)
    {
        if (index >= _Size)
            return InsertAtIndex(_Size - 1, value);
        else
            return InsertAtIndex(index + 1, value);
    }

    bool InsertBefore(int index, T value)
    {
        if(index < 1)
            return InsertAtIndex(0, value);
        else
            return InsertAtIndex(index - 1, value);
    }

    bool InsertAtEnd(T value)
    {
        return InsertAtIndex(_Size, value);
    }
};

