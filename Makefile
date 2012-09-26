BUILD = ./build
TEST = ./test
LIB = ./lib
SRC = ./src

CPP = g++
CPPFLAGS = -Wall -Wextra

AQueue = ./src/AQueue
LQueue = ./src/LQueue
LLQueue = ./src/LLQueue
TTest = ./src/TTest

all: $(BUILD)/Source $(TEST)/queue_test $(Timing)/timing_test

$(BUILD)/Source: 
	cd $(SRC); $(MAKE)

$(TEST)/queue_test: $(TEST)/Queue.cpp $(AQueue)/AQueue.o $(LQueue)/LQueue.o $(LLQueue)/LLQueue.o $(LLQueue)/Node.o
	cd $(TEST); $(MAKE)

$(Timing)/timing_test:
	cd $(TTest); $(MAKE) 
clean:
	cd $(SRC); $(MAKE) clean
	cd $(TEST); $(MAKE) clean

