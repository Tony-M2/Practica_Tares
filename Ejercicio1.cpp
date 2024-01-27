#include <iostream>

// Variables globales
double numero1, numero2;

// Funciones
void mostrarMenuPrincipal();
void mostrarSubMenuNumeros();

int main() {
	char opcionPrincipal, opcionNumeros;
	
	do {
		mostrarMenuPrincipal();
		std::cin >> opcionPrincipal;
		
		switch (opcionPrincipal) {
		case '1':
			mostrarSubMenuNumeros();
			std::cin >> opcionNumeros;
			
			switch (opcionNumeros) {
			case '1':
				std::cout << "Ingrese dos n�meros para sumar: ";
				std::cin >> numero1 >> numero2;
				std::cout << "La suma es: " << numero1 + numero2 << std::endl;
				break;
			case '2':
				std::cout << "Ingrese dos n�meros para dividir: ";
				std::cin >> numero1 >> numero2;
				if (numero2 != 0) {
					std::cout << "La divisi�n es: " << numero1 / numero2 << std::endl;
				} else {
					std::cout << "No se puede dividir por cero." << std::endl;
				}
				break;
			case 'm':
			case 'M':
				// Volver al men� principal
				break;
			default:
				std::cout << "Opci�n no v�lida." << std::endl;
				break;
			}
			break;
			
		case '2':
		{
			std::string cadena1, cadena2;
			std::cout << "Ingrese la primera cadena: ";
			std::cin >> cadena1;
			std::cout << "Ingrese la segunda cadena: ";
			std::cin >> cadena2;
			std::cout << "La concatenaci�n es: " << cadena1 + cadena2 << std::endl;
		}
		break;
		
		case 's':
		case 'S':
			std::cout << "Saliendo del programa." << std::endl;
			break;
			
		default:
			std::cout << "Opci�n no v�lida." << std::endl;
			break;
		}
		
	} while (opcionPrincipal != 's' && opcionPrincipal != 'S');
	
	return 0;
}

void mostrarMenuPrincipal() {
	std::cout << "MENU PRINCIPAL" << std::endl;
	std::cout << "(1) -- Operaciones con N�meros" << std::endl;
	std::cout << "(2) -- Concatenar 2 cadenas." << std::endl;
	std::cout << "(S) -- Salir" << std::endl;
	std::cout << "Seleccione una opci�n: ";
}

void mostrarSubMenuNumeros() {
	std::cout << "SUBMENU OP NUMEROS" << std::endl;
	std::cout << "1) - - Suma de 2 n�meros." << std::endl;
	std::cout << "2) - - Divisi�n de 2 n�meros." << std::endl;
	std::cout << "(m/M) - - Volver al Menu principal" << std::endl;
	std::cout << "Seleccione una opci�n: ";
}
