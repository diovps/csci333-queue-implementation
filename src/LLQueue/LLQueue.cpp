#include "LLQueue.h"
#include <iostream>
#include <assert.h>

LLQueue::LLQueue(){
	node = new Node(0);
}

LLQueue::~LLQueue(){

}

void LLQueue::enqueue(int number){	
	Node* tempNode = new Node(number);
	tempNode->setNext(node);
	node = tempNode;
	std::cout << "Values are: " << node->getValue() <<
		" "<< node->getNext()->getValue()<< std::endl;
}

int LLQueue::dequeue(){
	return 9;
}
