BUILD = ../../build
CPP = g++
CPPFLAGS = -Wall -Wextra
LLQUEUE = ../LLQueue
LQUEUE = ../LQueue
AQUEUE = ../AQueue

main: LLTiming LTiming ATiming
	
LLTiming: $(LLQUEUE)/LLQueue.o LLTiming.cpp
	$(CPP) $(CPPFLAGS) -o $(BUILD)/LLTiming LLTiming.cpp $(LLQUEUE)/LLQueue.o $(LLQUEUE)/Node.o

LTiming: $(LQUEUE)/LQueue.o LTiming.cpp
	$(CPP) $(CPPFLAGS) -o $(BUILD)/LTiming LTiming.cpp $(LQUEUE)/LQueue.o

ATiming: $(AQUEUE)/AQueue.o ATiming.cpp
	$(CPP) $(CPPFLAGS) -o $(BUILD)/ATiming ATiming.cpp $(AQUEUE)/AQueue.o

clean:
	rm -f *~
	rm -f $(BUILD)/LLTiming
	rm -f $(BUILD)/LTiming
	rm -f $(BUILD)/ATiming
