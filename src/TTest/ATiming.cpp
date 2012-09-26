#include <iostream>
#include <ctime>
#include "../AQueue/AQueue.h"

int main(){
	int start,end,elapsed;
	AQueue* q = new AQueue();
	start = clock();
	for(long i = 0; i < 9999999l; ++i){
		q->enqueue(i);
	}
	for(long i = 0; i < 9999999l; ++i){
		q->dequeue();
	}
	end = clock();
	elapsed = end-start;
	double seconds = (double)elapsed/CLOCKS_PER_SEC;
	std::cout << "Array based queue took: "<< seconds << 
		" seconds to enqueue and dequeue 9999999 numbers"<< std::endl;
	delete q;
	return 0;
}
