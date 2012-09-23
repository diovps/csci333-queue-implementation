#ifndef __LLQUEUE_H__
#define __LLQUEUE_H__

#include "Node.h"

class LLQueue{
	private:
		Node* node;
		Node* front;
		Node* back;
		int currentSize;
	public:
		LLQueue();
		~LLQueue();
		void enqueue(int number);
		int dequeue();
		int size();
};

#endif
