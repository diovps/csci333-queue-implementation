BUILD = ./build
TEST = ./test
LIB = ./lib
SRC = ./src

CPP = g++
CPPFLAGS = -Wall -Wextra

AQueue = ./src/AQueue
LQueue = ./src/LQueue
LLQueue = ./src/LLQueue

all: $(BUILD)/Source $(TEST)/queue_test

$(BUILD)/Source: 
	cd $(SRC); $(MAKE)

$(TEST)/queue_test: $(TEST)/Queue.cpp $(AQueue)/AQueue.o $(LQueue)/LQueue.o $(LLQueue)/LLQueue.o
	cd $(TEST); $(MAKE)

clean:
	cd $(SRC); $(MAKE) clean
	cd $(TEST); $(MAKE) clean

