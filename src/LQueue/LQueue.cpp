#include "LQueue.h"
#include <iostream>
#include <assert.h>

LQueue::LQueue(){

}

LQueue::~LQueue(){

}

void LQueue::enqueue(int number){	
	theQueue.push_back(number);
}

int LQueue::dequeue(){
	assert(!theQueue.empty());
	int result = theQueue.front();
	theQueue.pop_front();
	return result;
}

int LQueue::size(){
	return theQueue.size();
}

bool LQueue::isEmpty(){
	return theQueue.empty();
}

