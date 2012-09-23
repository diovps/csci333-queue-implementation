#include <iostream>
#include "LLQueue.h"

int main(){
	LLQueue* q = new LLQueue();
	
	for(int i = 0; i < 20; ++i){
		q->enqueue(i);
	}
	for(int i = 0; i < 5; ++i){
		q->dequeue();
	}
	for(int i = 0; i< 15; ++i){
		std::cout << q->dequeue() << std::endl;
	}
	
	return 0;
}
