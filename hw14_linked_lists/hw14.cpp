#include "LinkedList.h"

int main()
{
	// 1. Create a doubly Linked List with at least 5 nodes using
	//	  a class template with template methods;

	doublyLinkedList<int> intList;

	intList.insert(88);
	intList.insert(78);
	intList.insert(62);
	intList.insert(143);
	intList.insert(60);

	cout << "Part 1:\nLinked List 1: ";
	intList.print();

    cout << endl;

    // 2. Add a copy constructor and overloaded assignment 
    //    operator to the linked list;

    cout << "Part 2:\nLinked List 1 Copy Constructor: ";


    doublyLinkedList<int> intList2(intList);

    intList2.print();
    
    cout << "\nLinked List 1 Copy Assingment: ";

    doublyLinkedList<int> intList3 = intList;

    intList3.print();

    cout << "\nPart 3:\nLinked List 2: ";

    intList.reverseList();

    intList.print();

    cout << "\nPart 4:(After deleting the third node):\nLinked List 1:";

    intList2.deleteNode(62);
    intList.deleteNode(62);

    intList2.print();

    cout << "\nLinked List 2: ";
    intList.print();

    cout << "\nPart 5 (After Adding a node in the middle of the list):\nLinked List 1: ";

    intList2.insertMiddle(70);
    intList.insertMiddle(70);

    intList2.print();

    cout << "\nLinked List 2: ";

    intList.print();

    cout << "\nPart 6: Using Double\n\n";

    doublyLinkedList<double> doubleList;

	doubleList.insert(88.88);
	doubleList.insert(78.87);
	doubleList.insert(62.26);
	doubleList.insert(143.341);
	doubleList.insert(60.06);

	cout << "Part 1:\nLinked List 1: ";
	doubleList.print();

    cout << endl;

    // 2. Add a copy constructor and overloaded assignment 
    //    operator to the linked list;

    cout << "Part 2:\nLinked List 1 Copy Constructor: ";


    doublyLinkedList<double> doubleList2(doubleList);

    doubleList2.print();
    
    cout << "\nLinked List 1 Copy Assingment: ";

    doublyLinkedList<double> doubleList3 = doubleList;

    doubleList3.print();

    cout << "\nPart 3:\nLinked List 2: ";

    doubleList.reverseList();

    doubleList.print();

    cout << "\nPart 4:(After deleting the third node):\nLinked List 1:";

    doubleList2.deleteNode(62.26);
    doubleList.deleteNode(62.26);

    doubleList2.print();

    cout << "\nLinked List 2: ";
    doubleList.print();

    cout << "\nPart 5 (After Adding a node in the middle of the list):\nLinked List 1: ";

    doubleList2.insertMiddle(70.07);
    doubleList.insertMiddle(70.07);

    doubleList2.print();

    cout << "\nLinked List 2: ";

    doubleList.print();


	return 0;
}