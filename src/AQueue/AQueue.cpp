#include "AQueue.h"
#include <iostream>
#include <assert.h>

AQueue::AQueue(int initialSize){
	theQueue = new int[initialSize];
	front = 0;
	back = 0;
	currentSize = 0;
	capacity = initialSize;
}

AQueue::~AQueue(){
	delete[] theQueue;
}

void AQueue::enqueue(int number){	
	currentSize++;
	if(currentSize == capacity){
		capacity*=2;
		int* newQueue = new int[capacity];		
		if(back < front){
			for(int i=front;i<capacity;++i){
				newQueue[i-front] = theQueue[i];
			}
			for(int i=0;i<=back; ++i){
				newQueue[capacity-(front-back)]=theQueue[i];
			}
		}else{
			for(int i = 0; i < capacity; ++i){
				newQueue[i] = theQueue[i];
			}
		}
		delete[] theQueue;
		theQueue = newQueue;
	}
	back = (front+currentSize-1)%capacity;
	theQueue[back] = number;	
}


int AQueue::dequeue(){
	assert(currentSize>0);
	/*if((capacity/currentSize)>=4){
		capacity = capacity/4;
		int* newQueue = new int[capacity];
		for(int i = front; i <= back; ++i){
			newQueue[i] = theQueue[i];
		}
		delete[] theQueue;
		theQueue = newQueue;
	}*/
	int result = theQueue[front];
	front = (front+1)%capacity;
	--currentSize;
	return result;
}
