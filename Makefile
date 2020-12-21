#Esto sirve para compilar el programa
#referencia https://www.youtube.com/watch?v=_r7i5X0rXJk&t=393s
falppy: main.o cura.o dardo.o enemigo.o objeto.o juego.o jugador.o bola.o
	g++ -o flappy main.o cura.o dardo.o enemigo.o objeto.o juego.o jugador.o bola.o

main.o: main.cpp juego.h
	g++ -c main.cpp

cura.o: cura.cpp cura.h
	g++ -c cura.cpp

dardo.o: dardo.cpp dardo.h
	g++ -c dardo.cpp

enemigo.o: enemigo.cpp enemigo.h
	g++ -c enemigo.cpp

objeto.o: objeto.cpp objeto.h
	g++ -c objeto.cpp

juego.o: juego.cpp juego.h enemigo.h
	g++ -c juego.cpp

jugador.o: jugador.cpp jugador.h
	g++ -c jugador.cpp

bola.o: bola.cpp bola.h
	g++ -c bola.cpp

clean:
	rm -f programa *.o && rm flappy 
