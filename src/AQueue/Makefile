BUILD = ../../build
CPP = g++
CPPFLAGS = -Wall -Wextra

main: queue_tester.cpp AQueue.o
	$(CPP) $(CPPFLAGS) -o $(BUILD)/AQueue queue_tester.cpp AQueue.o

AQueue.o: AQueue.h AQueue.cpp
	$(CPP) $(CPPFLAGS) -c AQueue.cpp

clean:
	rm -f *.o
	rm -f *~
	rm -f $(BUILD)/AQueue
