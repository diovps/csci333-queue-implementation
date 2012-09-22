#ifndef __LQUEUE_H__
#define __LQUEUE_H__
#include <list>

class LQueue{
	private:
		std::list<int> theQueue;
	public:
		LQueue();
		~LQueue();
		void enqueue(int number);
		int dequeue();
		int size();
		bool isEmpty();
		
};

#endif
