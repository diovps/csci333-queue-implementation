#include "LLQueue.h"
#include <iostream>
#include <assert.h>

LLQueue::LLQueue(){
	front = 0;
	back = 0;
}

LLQueue::~LLQueue(){

}

void LLQueue::enqueue(int number){	
	/*Node* tempNode = new Node(number);
	if(!node->hasNext()){
		head = tempNode;	
	}
	node->setNext(tempNode);
	node = tempNode;*/
	
	node = new Node(number);
	if(front == 0){
		front = node;
	}else{
		back->setNext(node);
	}
	back = node;
		
	//std::cout << "back " << back->getValue() << std::endl;
	//std::cout << "front " << front->getValue() << std::endl;
}

int LLQueue::dequeue(){
	assert(front!=0);
	int result = front->getValue();
	front = front->getNext();
	if(front == 0){
		back = 0;
	}
	return result;
}
