#include "LLQueue.h"
#include <iostream>
#include <assert.h>

LLQueue::LLQueue(){
	front = 0;
	back = 0;
	currentSize=0;
}

LLQueue::~LLQueue(){
	for(int i = 0; i <= currentSize; ++i){
		dequeue();
	}
}

void LLQueue::enqueue(int number){	
	node = new Node(number);
	if(front == 0){
		front = node;
	}else{
		back->setNext(node);
	}
	back = node;
	currentSize++;		
}

int LLQueue::dequeue(){
	assert(front!=0);
	int result = front->getValue();
	Node* tempFront = front->getNext();
	delete front;
	front = tempFront;
	if(front == 0){
		back = 0;
	}
	currentSize--;
	return result;
}

int LLQueue::size(){
	return currentSize;
}
