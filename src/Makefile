BUILD = ../build
CPP = g++
AQueue = AQueue
LLQueue = LLQueue
LQueue = LQueue
CPPFLAGS = -Wall -Wextra

all: AQueue LLQueue LQueue

AQueue: $(AQueue)/AQueue.cpp $(AQueue)/AQueue.o
	cd AQueue; $(MAKE)

LLQueue: $(LLQueue)/LLQueue.cpp $(LLQueue)/LLQueue.o
	cd LLQueue; $(MAKE)

LQueue: $(LQueue)/LQueue.cpp $(LQueue)/LQueue.o
	cd LQueue; $(MAKE)

clean:
	cd AQueue; $(MAKE) clean
	cd LLQueue; $(MAKE) clean
	cd LQueue; $(MAKE) clean
