#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Funciones prototipo
int generarNumeroEntre0y500();
float generarNumeroReal();
bool esPrimo(int numero);
void generarNPrimos(int N);

int main() {
	// Semilla para números aleatorios
	srand(time(0));
	
	char opcion;
	do {
		// Menú de opciones
		cout << "(1) Generar número entre 0-500\n";
		cout << "(2) Generar número real\n";
		cout << "(3) Generar N números primos\n";
		cout << "(s/S) Salir\n";
		cout << "Seleccione una opción: ";
		cin >> opcion;
		
		switch (opcion) {
		case '1':
			// Generar y mostrar número aleatorio entre 0 y 500
			cout << "Número generado: " << generarNumeroEntre0y500() << endl;
			break;
		case '2':
			// Generar y mostrar número real aleatorio
			cout << "Número real generado: " << generarNumeroReal() << endl;
			break;
		case '3':
			int N;
			// Pedir al usuario la cantidad de números primos a generar
			cout << "Ingrese la cantidad de números primos a generar: ";
			cin >> N;
			// Generar y mostrar N números primos
			generarNPrimos(N);
			break;
		case 's':
		case 'S':
			// Salir del programa
			cout << "Saliendo del programa.\n";
			break;
		default:
			// Opción inválida
			cout << "Opción no válida. Intente de nuevo.\n";
		}
	} while (opcion != 's' && opcion != 'S');
	
	return 0;
}

// Función para generar número aleatorio entre 0 y 500
int generarNumeroEntre0y500() {
	return rand() % 501;
}

// Función para generar número real aleatorio
float generarNumeroReal() {
	return static_cast<float>(rand()) / RAND_MAX;
}

// Función para verificar si un número es primo
bool esPrimo(int numero) {
	if (numero < 2) {
		return false;
	}
	for (int i = 2; i <= numero / 2; ++i) {
		if (numero % i == 0) {
			return false;
		}
	}
	return true;
}

// Función para generar N números primos
void generarNPrimos(int N) {
	int contador = 0;
	int numeroActual = 2;
	
	while (contador < N) {
		if (esPrimo(numeroActual)) {
			cout << numeroActual << " ";
			++contador;
		}
		++numeroActual;
	}
	cout << endl;
}
