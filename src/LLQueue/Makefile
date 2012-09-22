BUILD = ../../build
CPP = g++
CPPFLAGS = -Wall -Wextra

main: queue_tester.cpp LLQueue.o Node.o
	$(CPP) $(CPPFLAGS) -o $(BUILD)/LLQueue queue_tester.cpp LLQueue.o Node.o

LLQueue.o: LLQueue.h LLQueue.cpp
	$(CPP) $(CPPFLAGS) -c LLQueue.cpp

Node.o: Node.cpp Node.h
	$(CPP) $(CPPFLAGS) -c Node.cpp
clean:
	rm -f *.o
	rm -f *~
	rm -f $(BUILD)/LLQueue
