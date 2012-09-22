#include <iostream>
#include "LQueue.h"

int main(){
	LQueue* q = new LQueue();
	q->enqueue(5);
	std::cout << q->dequeue()<< std::endl;
	return 0;
}
