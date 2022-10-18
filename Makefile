FLAGS = -g -c --std=c++17

all:
		mkdir -p bin
		g++ $(FLAGS) src/colaArregloCircular.cpp -o bin/colaArregloCircular.o
		g++ $(FLAGS) src/arbolHMIHDContador.cpp -o bin/arbolHMIHDContador.o
		g++ $(FLAGS) src/nodo.cpp -o bin/nodo.o
		g++ $(FLAGS) src/main.cpp -o bin/main.o
		g++ -g -o bin/main bin/colaArregloCircular.o bin/arbolHMIHDContador.o bin/nodo.o bin/main.o 

clean:
		rm -Rf bin