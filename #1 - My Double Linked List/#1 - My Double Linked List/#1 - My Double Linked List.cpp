#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;


int main()
{

    clsDblLinkedList <int> MydblLinkedList;

    MydblLinkedList.InsertAtBeginning(6);
    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);

    cout << "\nLinked List Contenet:\n";
    MydblLinkedList.PrintList();

    // =========================================================================
    // ======== Main operations Linked list ===========

    /*clsDblLinkedList<int>::Node* N1 = MydblLinkedList.Find(2);

    if (N1 != NULL)
        cout << "\nNode with value 2 is Found :-)\n";
    else
        cout << "\nNode Is not found :-(\n";

    MydblLinkedList.InsertAfter(N1, 500);
    cout << "\nAfter Inserting 500 after 2:\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.InsertAtEnd(700);
    cout << "\nAfter Inserting 700 at end:\n";
    MydblLinkedList.PrintList();

    clsDblLinkedList<int>::Node* N2 = MydblLinkedList.Find(4);
    MydblLinkedList.DeleteNode(N2);
    cout << "\nAfter Deleting 4:\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.DeleteFirstNode();
    cout << "\nAfter Deleting First Node:\n";
    MydblLinkedList.PrintList();

    cout << "\nAfter Deleting Last Node:\n";
    MydblLinkedList.DeleteLastNode();
    MydblLinkedList.PrintList();*/

    // =========================================================================
    // ======== Check if empty Linked list ===========

    // cout << "\nNumber of items in the linked list: " << MydblLinkedList.Size() << endl;

    /* if (MydblLinkedList.IsEmpty())
    {
        cout << "\nThe list is Empty\n";
    }
    else {
        cout << "\nThe list is NOT Empty\n";
    }*/

    // =========================================================================
    // ======== Clear Linked list ===========

    /*cout << "\nExectuing .Clear()";
    MydblLinkedList.Clear();

    cout << "\nNumber of items in the linked list: " << MydblLinkedList.Size() << endl;*/

    // =========================================================================
    // ======== Reverse Linked list ===========

    /*cout << "\nLinked List Contenet after reverse:\n";

    MydblLinkedList.Reverse();

    MydblLinkedList.PrintList();*/

    // =========================================================================
    // ======== Get item ===========

    /*clsDblLinkedList <int> ::Node *N;

    N = MydblLinkedList.GetNode(7);

    cout << "Node value is: " << N->value;*/

    // =========================================================================
    // ======== Get item by index ===========

    //cout << "the value of index (2) is: " << MydblLinkedList.GetItem(2);

    // =========================================================================
    // ======= Update Node value using index ========

    /*MydblLinkedList.UpdateItem(2, 100);
    cout << "List items after update: " << endl;
    MydblLinkedList.PrintList();*/

    // =========================================================================
    // ======= Insert after index ========

    MydblLinkedList.InsertAfter(2, 100);
    cout << "List items after update: " << endl;
    MydblLinkedList.PrintList();

    system("pause>0");

}