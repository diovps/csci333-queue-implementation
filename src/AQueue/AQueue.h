#ifndef __AQUEUE_H__
#define __AQUEUE_H__

class AQueue{
	private:
		int* theQueue;
		int front;
		int back;
		int currentSize;
		int capacity;
	public:
		AQueue(int initialSize = 10);
		~AQueue();
		void enqueue(int number);
		int dequeue();
		int size();
		bool isEmpty();
};

#endif
