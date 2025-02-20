#include <iostream>
#include "clsDynamicArray.h"

using namespace std;

int main()
{
	clsDynamicArray <int> MyDynamicArray(6);

	MyDynamicArray.SetItem(0, 10);
	MyDynamicArray.SetItem(1, 20);
	MyDynamicArray.SetItem(2, 30);
	MyDynamicArray.SetItem(3, 40);
	MyDynamicArray.SetItem(4, 50);
	MyDynamicArray.SetItem(5, 20);

	cout << "\nArray Items: \n";
	MyDynamicArray.Print();

	// ==============================================================

	//cout << "\n Is Empty: " << MyDynamicArray.IsEmpty();
	//cout << "\nArray Size: " << MyDynamicArray.Size();
	/*cout << "\nArray Items: \n";
	MyDynamicArray.Print();*/

	// ==============================================================

	/*MyDynamicArray.Resize(2);
	cout << "\nArray Size after resize to 2: " << MyDynamicArray.Size();
	cout << "\nArray Items: \n";
	MyDynamicArray.Print();*/

	/*MyDynamicArray.Resize(10);
	cout << "\nArray Size after resize to 10: " << MyDynamicArray.Size();
	cout << "\nArray Items: \n";
	MyDynamicArray.Print();*/

	// ==============================================================

	//cout << "\nItem[2]: " << MyDynamicArray.GetItem(2);

	// ==============================================================

	/*cout << "\nArray items after reverse: \n";
	MyDynamicArray.Reverse();
	MyDynamicArray.Print();*/

	// ==============================================================

	/*cout << "\nArray items after clear: \n";
	MyDynamicArray.Clear();
	MyDynamicArray.Print();*/

	// ==============================================================

	/*cout << "\nArray items after Delete Item[2]: ";
	MyDynamicArray.DeleteItem(2);
	MyDynamicArray.Print();*/

	// ==============================================================

	/*cout << "\nDelete first item: ";
	MyDynamicArray.DeleteFirstItem();
	MyDynamicArray.Print();*/

	/*cout << "\nDelete Last item: ";
	MyDynamicArray.DeleteLastItem();
	MyDynamicArray.Print();*/

	// ==============================================================

	//cout << "\nFind item (40) by the value, and return its index: " << MyDynamicArray.FindByValue(40);
	
	/*cout << "\nDelete item (40) by the value: \n";
	if (MyDynamicArray.DeleteItemByValue(40))
	{
		cout << "Item Deleted Successfully!\n";
		MyDynamicArray.Print();
	}
	else {
		cout << "Item Was not found!";
	}*/

	// ==============================================================

	/*cout << "\nDelete repetitive item (20) by the value: \n";
	if (MyDynamicArray.DeleteRepetItemByValue(20))
	{
		cout << "Item Deleted Successfully!\n";
		MyDynamicArray.Print();
	}
	else {
		cout << "Item Was not found!";
	}*/

	/*MyDynamicArray.DeleteAllRepetItemByValue(20);
	MyDynamicArray.Print();*/

	// ==============================================================

	/*cout << "\nArray Size: " << MyDynamicArray.Size();

	cout << "\nInsert (500) at index [2]: \n";
	MyDynamicArray.InsertAtIndex(2,500);
	MyDynamicArray.Print();
	cout << "\nArray Size: " << MyDynamicArray.Size();*/

	// ==============================================================

	/*cout << "\nArray Size: " << MyDynamicArray.Size();
	cout << "\nArray After InsertAtBeginning(): \n";
	MyDynamicArray.InsertAtBeginning(100);
	MyDynamicArray.Print();
	cout << "\nArray Size: " << MyDynamicArray.Size();*/

	// ==============================================================

	/*cout << "\nArray Size: " << MyDynamicArray.Size();
	cout << "\nArray After InsertAfter(): \n";
	MyDynamicArray.InsertAfter(2,100);
	MyDynamicArray.Print();
	cout << "\nArray Size: " << MyDynamicArray.Size();*/

	// ==============================================================

	/*cout << "\nArray Size: " << MyDynamicArray.Size();
	cout << "\nArray After InsertBefore(): \n";
	MyDynamicArray.InsertBefore(2, 100);
	MyDynamicArray.Print();
	cout << "\nArray Size: " << MyDynamicArray.Size();*/

	// ==============================================================

	/*cout << "\nArray Size: " << MyDynamicArray.Size();
	cout << "\nArray After InsertAtEnd(): \n";
	MyDynamicArray.InsertAtEnd(100);
	MyDynamicArray.Print();
	cout << "\nArray Size: " << MyDynamicArray.Size();*/

}
