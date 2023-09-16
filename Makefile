CXX = c++

EXECUTABLE = petShop

OBJS = petShop.o VirtualPet.o Pokemon.o Pikachu.o Digimon.o Gatoman.o

.PHONY: all clean

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJS)
	$(CXX) -o $@ $(OBJS)

%.o: %.cpp
	$(CXX) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXECUTABLE)
