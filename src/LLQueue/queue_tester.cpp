#include <iostream>
#include "LLQueue.h"

int main(){
	LLQueue* q = new LLQueue();
	q->enqueue(5);
	q->enqueue(6);
	q->enqueue(7);
	q->enqueue(8);
	std::cout << q->dequeue() << std::endl;
	std::cout << q->dequeue() << std::endl;
	std::cout << q->dequeue() << std::endl;
	return 0;
}
