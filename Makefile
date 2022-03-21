CXX = g++
DEPS = gps.hpp
OBJ = gps.o Taps.o main.o

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $<

main: $(OBJ)
	$(CXX) -o $@ $^

clean:
	rm *.o main

objects:
	rm -f *.o *~ 