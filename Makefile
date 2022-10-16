FLAGS = -g -c --std=c++17

all:
		mkdir -p bin
		g++ $(FLAGS) src/empleado.cpp -o bin/empleado.o
		g++ $(FLAGS) src/main.cpp -o bin/main.o
		g++ -g -o bin/planillas bin/empleadoNomina.o bin/empleadoIndependientePorHoras.o bin/main.o bin/empleado.o bin/planilla.o
test:
		mkdir -p bin
		g++ $(FLAGS) src/empleado.cpp -o bin/empleado.o
		g++ $(FLAGS) src/empleadoNomina.cpp -o bin/empleadoNomina.o
		g++ $(FLAGS) src/empleadoIndependientePorHoras.cpp -o bin/empleadoIndependientePorHoras.o
		g++ -g -o bin/tests bin/tests_empleadoindependienteporhoras_calcularpagoneto.o bin/tests_empleadonomina_calcularpagoneto.o bin/tests_empleado_obteneratributos.o  bin/empleado.o bin/empleadoIndependientePorHoras.o bin/empleadoNomina.o -lgtest -lgtest_main -lpthread
clean:
		rm -Rf bin