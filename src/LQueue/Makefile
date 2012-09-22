BUILD = ../../build
CPP = g++
CPPFLAGS = -Wall -Wextra

main: queue_tester.cpp LQueue.o
	$(CPP) $(CPPFLAGS) -o $(BUILD)/LQueue queue_tester.cpp LQueue.o

LQueue.o: LQueue.h LQueue.cpp
	$(CPP) $(CPPFLAGS) -c LQueue.cpp

clean:
	rm -f *.o
	rm -f *~
	rm -f $(BUILD)/LQueue
