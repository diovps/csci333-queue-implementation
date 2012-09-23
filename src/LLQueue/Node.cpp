#include "Node.h"

Node::Node(int number){
	value = number;
	next = 0;	
}
Node::~Node(){

}

int Node::getValue(){
	return value;
}

Node* Node::getNext(){
	return next;
}

void Node::setNext(Node* &node){
	next = node;
}

