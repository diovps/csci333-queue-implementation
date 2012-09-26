#include <iostream>
#include <ctime>
#include "../LLQueue/LLQueue.h"

int main(){
	int start,end,elapsed;
	double seconds;
	
	LLQueue* q = new LLQueue();
	
	start = clock();
	for(long i = 0; i < 9999999l; ++i){
		q->enqueue(i);
	}
	for(long i = 0; i < 9999999l; ++i){
		q->dequeue();
	}
	end = clock();

	elapsed = end - start;

	seconds = (double) elapsed/CLOCKS_PER_SEC;
	
	std::cout << "Linked List queue took: " << seconds <<
		" seconds to enqueue and dequeue 9999999 numbers" << std::endl;
	delete q;
	return 0;
}
