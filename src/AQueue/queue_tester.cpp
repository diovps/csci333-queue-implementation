#include <iostream>
#include "AQueue.h"

int main(){
	AQueue* q = new AQueue();
	for(int i = 0; i < 15; ++i){
		q->enqueue(i);
	}

	for(int i = 0; i < 6; ++i){
		q->dequeue();
	}

	for(int i = 15; i < 24; ++i){
		q->enqueue(i);
	}

	for(int i = 0; i < 18; ++i){
		std::cout << q->dequeue() << std::endl;
	}
	delete q;
	return 0;
}
