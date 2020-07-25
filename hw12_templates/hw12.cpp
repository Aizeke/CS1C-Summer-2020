#include "queue.h"

int main() {

    cout << "************************************** " << endl;
        cout << "*           Running HW11             * " << endl;
        cout << "*      Programmed by Isaac Guido     * " << endl;
        cout << "*         CS1C July 18th             * " << endl;
        cout << "************************************** " << endl;
        cout << endl;
        
	// Queue #1 Queue of Integers
	Queue<int> intQueue(8);

	cout << "\tIntegar Queue\n";
	cout << "Test to delete from empty queue:\n\n";

	intQueue.dequeue();

    cout << "Adding 6 Items:\n\n";
    intQueue.enqueue(24);
    intQueue.enqueue(4);
    intQueue.enqueue(123);
    intQueue.enqueue(77);
    intQueue.enqueue(480);
    intQueue.enqueue(612);

    cout << "\nDeleting 4 Items:\n\n";

    intQueue.dequeue();
    intQueue.dequeue();
    intQueue.dequeue();
    intQueue.dequeue();

    cout << "\nAdding 5 Items:\n\n";

    intQueue.enqueue(456);
    intQueue.enqueue(457);
    intQueue.enqueue(458);
    intQueue.enqueue(500);
    intQueue.enqueue(501);

    cout << "\nDeleting 3 Items:\n\n";

    intQueue.dequeue();
    intQueue.dequeue();
    intQueue.dequeue();


    if (intQueue.isEmpty())
    {
        cout << "intQueue Is Empty\n\n";
    } else {
        cout << "intQueue Is Not Empty\n\n";
    }

    cout << "Emptying The Queue:\n\n";

    while (!intQueue.isEmpty())
    {
        intQueue.dequeue();
    }
    
    cout << endl;
    
	Queue<double> doubleQueue;

    cout << "\tDouble Queue\n";
	cout << "Test to delete from empty queue:\n\n";

	doubleQueue.dequeue();

    cout << "Adding 6 Items:\n\n";
    doubleQueue.enqueue(2.4);
    doubleQueue.enqueue(4344.1234);
    doubleQueue.enqueue(123.3234);
    doubleQueue.enqueue(77.435);
    doubleQueue.enqueue(480.24);
    doubleQueue.enqueue(612.087);

    cout << "\nDeleting 4 Items:\n\n";

    doubleQueue.dequeue();
    doubleQueue.dequeue();
    doubleQueue.dequeue();
    doubleQueue.dequeue();

    cout << "\nAdding 5 Items:\n\n";

    doubleQueue.enqueue(456.456);
    doubleQueue.enqueue(457.457);
    doubleQueue.enqueue(458.458);
    doubleQueue.enqueue(500.005);
    doubleQueue.enqueue(501.105);

    cout << "\nDeleting 3 Items:\n\n";

    doubleQueue.dequeue();
    doubleQueue.dequeue();
    doubleQueue.dequeue();


    if (doubleQueue.isEmpty())
    {
        cout << "doubleQueue Is Empty\n\n";
    } else {
        cout << "doubleQueue Is Not Empty\n\n";
    }

    cout << "Emptying The Queue:\n\n";

    while (!doubleQueue.isEmpty())
    {
        doubleQueue.dequeue();
    }

	Queue<string> stringQueue;

    cout << "\tDouble Queue\n";
	cout << "Test to delete from empty queue:\n\n";

	stringQueue.dequeue();

    cout << "Adding 6 Items:\n\n";
    stringQueue.enqueue("Cat");
    stringQueue.enqueue("Dog");
    stringQueue.enqueue("Bird");
    stringQueue.enqueue("Fish");
    stringQueue.enqueue("Hamster");
    stringQueue.enqueue("Snake");

    cout << "\nDeleting 4 Items:\n\n";

    stringQueue.dequeue();
    stringQueue.dequeue();
    stringQueue.dequeue();
    stringQueue.dequeue();

    cout << "\nAdding 5 Items:\n\n";

    stringQueue.enqueue("Spider");
    stringQueue.enqueue("Geeko");
    stringQueue.enqueue("Worm");
    stringQueue.enqueue("Rock");
    stringQueue.enqueue("Alpaca");

    cout << "\nDeleting 3 Items:\n\n";

    stringQueue.dequeue();
    stringQueue.dequeue();
    stringQueue.dequeue();


    if (stringQueue.isEmpty())
    {
        cout << "stringQueue Is Empty\n\n";
    } else {
        cout << "stringQueue Is Not Empty\n\n";
    }

    cout << "Emptying The Queue:\n\n";

    while (!stringQueue.isEmpty())
    {
        stringQueue.dequeue();
    }


	return 0;
}