# Esta regla compila el principal file
falppy: main.o cure.o dardo.o enemigo.o objeto.o juego.o player.o rock.o
	g++ -o falppy main.o cure.o dardo.o enemigo.o objeto.o juego.o player.o rock.o

main.o: main.cpp juego.h
	g++ -c main.cpp

cure.o: cure.cpp cure.h
	g++ -c cure.cpp

dardo.o: dardo.cpp dardo.h
	g++ -c dardo.cpp

enemigo.o: enemigo.cpp enemigo.h
	g++ -c enemigo.cpp

objeto.o: objeto.cpp objeto.h
	g++ -c objeto.cpp

juego.o: juego.cpp juego.h enemigo.h
	g++ -c juego.cpp

player.o: player.cpp player.h
	g++ -c player.cpp

rock.o: rock.cpp rock.h
	g++ -c rock.cpp

clean:
	rm -f programa *.o && rm falppy 
