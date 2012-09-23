#include <iostream>
#include "AQueue.h"

int main(){
	AQueue* q = new AQueue();
	for(int i = 0; i < 25; ++i){
		q->enqueue(i);
	}

	for(int i = 0; i < 25; ++i){
		std::cout << q->dequeue() << std::endl;
	}
	return 0;
}
