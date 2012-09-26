#include "AQueue.h"
#include <iostream>
#include <assert.h>

AQueue::AQueue(int initialSize){
	assert(initialSize>0);
	theQueue = new int[initialSize];
	front = 0;
	back = 0;
	currentSize = 0;
	int threshold = initialSize;
	capacity = initialSize;
}

AQueue::~AQueue(){
	delete[] theQueue;
}

void AQueue::enqueue(int number){	
	currentSize++;
	if(currentSize == capacity){
		int tempCap = capacity;
		capacity*=2;
		int* newQueue = new int[capacity];		
		if(back < front){
		int diff = tempCap - front;	
		for(int i=front;i<currentSize;++i){
				newQueue[i-front] = theQueue[i];
			}
			for(int i=0;i<=back; ++i){
				newQueue[diff+i]=theQueue[i];
			}
		}else{
			for(int i = 0; i < currentSize; ++i){
				newQueue[i] = theQueue[i];
			}
		}
		front = 0;
		back = currentSize;
		delete[] theQueue;
		theQueue = newQueue;
	}
	back = (front+currentSize-1)%capacity;
	theQueue[back] = number;	
}


int AQueue::dequeue(){
	assert(currentSize>0);
	int tempCap = capacity;
	if((capacity/currentSize)>=4 && (capacity/2)>threshold){
		capacity = capacity/2;
		int* newQueue = new int[capacity];
		if(back < front){
			int diff = tempCap - front;
			for(int i = front; i < tempCap; ++i){
				newQueue[i-front] = theQueue[i];
			}

			for(int i = 0;i<=back; ++i){
				newQueue[diff+i] = theQueue[i];
			}
		}else{	
			for(int i = front; i <= back; ++i){
				newQueue[i-front] = theQueue[i];
			}
		}
		front = 0;
		back = currentSize;
		delete[] theQueue;
		theQueue = newQueue;
	}
	int result = theQueue[front];
	front = (front+1)%capacity;
	--currentSize;
	return result;
}

int AQueue::size(){
	return currentSize;
}

bool AQueue::isEmpty(){
	return currentSize == 0;
}
