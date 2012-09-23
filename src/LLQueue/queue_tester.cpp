#include <iostream>
#include "LLQueue.h"

int main(){
	LLQueue* q = new LLQueue();	
	q->enqueue(7);
	std::cout << q->dequeue() << std::endl;
	delete q;	
	return 0;
}
