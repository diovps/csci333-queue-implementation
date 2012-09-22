BUILD = ../../build
CPP = g++
CPPFLAGS = -Wall -Wextra

main: queue_tester.cpp LLQueue.o
	$(CPP) $(CPPFLAGS) -o $(BUILD)/LLQueue queue_tester.cpp LLQueue.o

LLQueue.o: LLQueue.h LLQueue.cpp
	$(CPP) $(CPPFLAGS) -c LLQueue.cpp

clean:
	rm -f *.o
	rm -f *~
	rm -f $(BUILD)/LLQueue
