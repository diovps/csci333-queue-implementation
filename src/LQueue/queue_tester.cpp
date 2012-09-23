#include <iostream>
#include "LQueue.h"

int main(){
	LQueue* q = new LQueue();
	for(int i = 0; i < 16; ++i){
		q->enqueue(i);
	}
	for(int i = 0; i < 6; ++i){
		q->dequeue();
	}
	for(int i = 0; i < 5; ++i){
		q->enqueue(i);
	}
	while(!q->isEmpty()){
		std::cout << q->dequeue() << std::endl;
	}
	delete q;
	return 0;
}
