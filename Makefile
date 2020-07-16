# Esta regla compila el principal file
falppy: main.o cure.o dardo.o enemy.o entity.o game.o player.o rock.o
	g++ -o falppy main.o cure.o dardo.o enemy.o entity.o game.o player.o rock.o

main.o: main.cpp game.h
	g++ -c main.cpp

cure.o: cure.cpp cure.h
	g++ -c cure.cpp

dardo.o: dardo.cpp dardo.h
	g++ -c dardo.cpp

enemy.o: enemy.cpp enemy.h
	g++ -c enemy.cpp

entity.o: entity.cpp entity.h
	g++ -c entity.cpp

game.o: game.cpp game.h enemy.h
	g++ -c game.cpp

player.o: player.cpp player.h
	g++ -c player.cpp

rock.o: rock.cpp rock.h
	g++ -c rock.cpp

clean:
	rm -f programa *.o && rm falppy 
