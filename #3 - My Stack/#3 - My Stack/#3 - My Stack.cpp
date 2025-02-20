#include <iostream>
#include "clsMyStack.h"

using namespace std;

int main()
{
    clsMyStack <int> MyStack;

    MyStack.push(10);
    MyStack.push(20);
    MyStack.push(30);
    MyStack.push(40);

    cout << "Stack: \n";
    MyStack.print();

    cout << "\nStack Top: " << MyStack.top();
    cout << "\nStack Size: " << MyStack.size();

    if(MyStack.isEmpty())
        cout << "\nStack is Empty: ";
    else
        cout << "\nStack is NOT Empty: ";

    MyStack.pop();
    cout << "\n\nStack after pop()\n" << endl;
    MyStack.print();
    cout << "\nStack Size: " << MyStack.size();
    

    //// Extention #2
    MyStack.Reverse();
    cout << "\n\nStack after reverse: ";
    MyStack.print();

    //// Extention #3
    MyStack.UpdateItem(2, 600);
    cout << "\n\nStack after update item[2] to 600: ";
    MyStack.print();


    // Extention #7
    MyStack.clear();
    cout << "\n\nStack after clear() : ";
    MyStack.print();
}
