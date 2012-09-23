#include "gtest/gtest.h"
#include "../src/AQueue/AQueue.h"
#include "../src/LLQueue/LLQueue.h"
#include "../src/LQueue/LQueue.h"
#include <time.h>

TEST(AQueueTest,size){
	AQueue* q = new AQueue();
	for(int i = 0; i < 15; ++i){
		q->enqueue(i);
	}

	EXPECT_EQ(15,q->size());
	delete q;
}

TEST(AQueueTest, dequeue){
	AQueue* q = new AQueue();
	srand(time(0));
	int randomNumber = rand();
	q->enqueue(randomNumber);
	EXPECT_EQ(randomNumber,q->dequeue());
	delete q;
	
}
TEST(AQueueTest, enqueue_exceedsCap) {
	AQueue* q = new AQueue();
	for(int i = 0; i < 20;++i){
		q->enqueue(i);
	}
	for(int i = 0; i < 19; ++i){
		q->dequeue();
	}
 	EXPECT_EQ(19, q->dequeue());
  	delete q;
}

TEST(LLQueueTest,enqueue){
	LLQueue* q = new LLQueue();
	for(int i = 0; i < 20; ++i){
		q->enqueue(i);
	} 
	for(int i = 0; i < 10; ++i){
		q->dequeue();
	}
	EXPECT_EQ(10,q->dequeue());
	delete q;
}

TEST(LLQueueTest, dequeue){
	LLQueue* q = new LLQueue();
	srand(time(0));
	int randomNumber = rand();
	q->enqueue(randomNumber);
	EXPECT_EQ(randomNumber,q->dequeue());
	delete q;
}

TEST(LLQueueTest,size){
	LLQueue* q = new LLQueue();
	for(int i = 0; i < 36; ++i){
		q->enqueue(i);
	}
	EXPECT_EQ(36,q->size());
	delete q;
}

TEST(LQueueTest,enqueue){
	LQueue* q = new LQueue();
	for(int i = 0; i < 20; ++i){
		q->enqueue(i);
	}

	for(int i = 0; i < 9; ++i){
		q->dequeue();
	}
	EXPECT_EQ(9,q->dequeue());
	delete q;
}

TEST(LQueueTest, dequeue){
	LQueue* q = new LQueue();
	srand(time(0));
	int randomNumber = rand();
	q->enqueue(randomNumber);
	EXPECT_EQ(randomNumber,q->dequeue());
	delete q;
}	

TEST(LQueueTest,size){
	LQueue* q = new LQueue();
	for(int i = 0; i < 42; ++i){
		q->enqueue(i);
	}
	EXPECT_EQ(42,q->size());
	delete q;
}
