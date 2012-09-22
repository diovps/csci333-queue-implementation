#ifndef __LLQUEUE_H__
#define __LLQUEUE_H__

class LLQueue{
	private:
		int* theQueue;
		int front;
		int back;
		int currentSize;
		int capacity;
	public:
		LLQueue(int initialSize = 10);
		~LLQueue();
		void enqueue(int number);
		int dequeue();
};

#endif
