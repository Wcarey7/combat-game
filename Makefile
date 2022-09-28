Project3: main.o Creature.o Barbarian.o BlueMen.o HarryPotter.o Medusa.o Vampire.o inputValidate.o
	g++ -std=c++0x main.o Creature.o Barbarian.o BlueMen.o HarryPotter.o Medusa.o Vampire.o inputValidate.o -o Project3

main.o: main.cpp 
	g++ -std=c++0x -c main.cpp

Creature.o: Creature.cpp Creature.hpp
	g++ -std=c++0x -c Creature.cpp

Barbarian.o: Barbarian.cpp Barbarian.hpp
	g++ -std=c++0x -c Barbarian.cpp

BlueMen.o: BlueMen.cpp BlueMen.hpp
	g++ -std=c++0x -c BlueMen.cpp

HarryPotter.o: HarryPotter.cpp HarryPotter.hpp
	g++ -std=c++0x -c HarryPotter.cpp

Medusa.o: Medusa.cpp Medusa.hpp
	g++ -std=c++0x -c Medusa.cpp

Vampire.o: Vampire.cpp Vampire.hpp
	g++ -std=c++0x -c Vampire.cpp

inputValidate.o: inputValidate.cpp inputValidate.hpp
	g++ -std=c++0x -c inputValidate.cpp

clean:
	rm *.o Project3
