#ifndef __NODE__H__
#define __NODE__H__

class Node{
	private:
		Node* next;
		int value;
	public:
		Node(int number);
		~Node();
		int getValue();
		Node* getNext();
		bool hasNext();
		void setNext(Node* &n);
};

#endif
