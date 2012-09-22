BUILD = ../build
TEST = ../test
LIB = ../lib
SRC = ../src
GTEST = $(LIB)/gtest-1.6.0
GTEST_MAINA = $(GTEST)/make/gtest_main.a

GTEST_INCLUDES = -I$(GTEST) -I$(GTEST)/include

CPP = g++
CPPFLAGS = -Wall -Wextra

AQueue = $(SRC)/AQueue
LLQueue = $(SRC)/LLQueue
LQueue = $(SRC)/LQueue

#stack: Stack.cpp $(SRC)/Stack.o $(GTEST_MAINA)
#	$(CPP) $(CFLAGS) $(GTEST_INCLUDES) -pthread -o stack_test $^

queue_test: Queue.cpp $(AQueue)/AQueue.o $(LLQueue)/LLQueue.o $(LQueue)/LQueue.o $(GTEST_MAINA)
	$(CPP) $(CFLAGS) $(GTEST_INCLUDES) -pthread -o queue_test Queue.cpp $(AQueue)/AQueue.o $(LQueue)/LQueue.o $(LLQueue)/LLQueue.o $(GTEST_MAINA)

$(GTEST_MAINA): $(GTEST)/src/*.cc $(GTEST)/src/*.h
	cd $(GTEST)/make; make

clean:
	rm -f queue_test
	rm -f $(GTEST_MAINA)
	cd $(GTEST)/make; $(MAKE) clean


