#include "gtest/gtest.h"
#include "../src/AQueue/AQueue.h"
#include "../src/LLQueue/LLQueue.h"
#include "../src/LQueue/LQueue.h"

TEST(StackTest, enqueue) {
  AQueue* q = new AQueue();
  q->enqueue(6);
  EXPECT_EQ(6, q->dequeue());
  delete q;
}
