#include <iostream>
#include <ctime>
#include "../LQueue/LQueue.h"

int main(){
	int start,end,elapsed;
	double seconds;

	LQueue* q = new LQueue();
	
	start = clock();
	for(long i = 0; i < 9999999l; ++i){
		q->enqueue(i);
	}

	for(long i = 0; i < 9999999l; ++i){
		q->dequeue();
	}

	end = clock();
	
	elapsed = end-start;

	seconds = (double)elapsed/CLOCKS_PER_SEC;
	
	std::cout << "List queue took: " << seconds <<
		" seconds to enqueue and dequeue 9999999 elements" << std::endl;
	return 0;
}
