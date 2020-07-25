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
	}
	else {
		cout << "intQueue Is Not Empty\n\n";
	}

	cout << "Emptying The Queue:\n\n";

	while (!intQueue.isEmpty())
	{
		intQueue.dequeue();
	}

	cout << endl;


	return 0;
}