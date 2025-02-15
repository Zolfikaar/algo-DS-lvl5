#include <iostream>
#include "clsMyQueue.h"

using namespace std;

int main()
{
    clsMyQueue <int> MyQueue;

    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);
    MyQueue.push(40);

    cout << "Queue: \n"; 
    MyQueue.print();

    cout << "\nQueue Front: " << MyQueue.front();
    cout << "\nQueue Back: " << MyQueue.back();
    cout << "\nQueue Size: " << MyQueue.size();

    MyQueue.pop();
    cout << "\nQueue after pop()\n" << endl;
    MyQueue.print();

    // Extention #1
    cout << "\n\nItem[2]: " << MyQueue.GetItem(2);

    // Extention #2
    MyQueue.Reverse();
    cout << "\n\nQueue after reverse: ";
    MyQueue.print();

    // Extention #3
    MyQueue.UpdateItem(2, 600);
    cout << "\n\nQueue after update item[2] to 600: ";
    MyQueue.print();

    // Extention #4
    MyQueue.InsertAfter(2, 800);
    cout << "\n\nQueue after insert 800 after item[2] : ";
    MyQueue.print();

    // Extention #5
    MyQueue.InsertAtFront(900);
    cout << "\n\nQueue after Insert At Front : ";
    MyQueue.print();

    // Extention #6
    MyQueue.InsertAtBack(300);
    cout << "\n\nQueue after Insert At Back : ";
    MyQueue.print();

    // Extention #7
    MyQueue.clear();
    cout << "\n\nQueue after clear() : ";
    MyQueue.print();
}
