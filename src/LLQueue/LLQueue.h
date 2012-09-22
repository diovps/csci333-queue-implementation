#ifndef __LLQUEUE_H__
#define __LLQUEUE_H__

#include "Node.h"

class LLQueue{
	private:
		Node* node;
	public:
		LLQueue();
		~LLQueue();
		void enqueue(int number);
		int dequeue();
};

#endif
