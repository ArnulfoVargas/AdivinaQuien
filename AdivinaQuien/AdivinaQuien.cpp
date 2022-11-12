// AdivinaQuien.cpp : Arnulfo Vargas Mejia
// Este programa contiene un adivina quien

#include <iostream>

int main()
{
	bool humano = false, 
		dinosaurio = false,
		mascara = false,
		verde = false,
		rojo = false,
		rosa = false,
		naranja = false,
		amarillo = false,
		morado = false,
		tortuga = false,
		lanzaFuego = false,
		hongo = false,
		marron = false;

	std::cout << "Bienvenido al adivina quien de Mario Bros" <<std::endl;

	std::cout << "Tu personaje es humano? [0 = No] [1 = Si]" << std::endl;
	std::cin >> humano;
	system("CLS");

	if (humano) {
		std::cout << "Tu personaje usa el color rojo? [0 = No] [1 = Si]" << std::endl;
		std::cin >> rojo;
		system("CLS");

		if (rojo) {
			std::cout << "Tu personaje es: Mario" << std::endl;
		}
		else {
			std::cout << "Tu personaje usa el color verde? [0 = No] [1 = Si]" << std::endl;
			std::cin >> verde;
			system("CLS");

			if (verde) {
				std::cout << "Tu personaje es: Luigui" << std::endl;
			}
			else {
				std::cout << "Tu personaje usa el color rosa? [0 = No] [1 = Si]" << std::endl;
				std::cin >> rosa;
				system("CLS");

				if (rosa) {
					std::cout << "Tu personaje es: Peach" << std::endl;
				}
				else {
					std::cout << "Tu personaje usa el color naranja? [0 = No] [1 = Si]" << std::endl;
					std::cin >> naranja;
					system("CLS");

					if (naranja) {
						std::cout << "Tu personaje es: Daisy" << std::endl;
					}
					else {
						std::cout << "Tu personaje usa el color amarillo? [0 = No] [1 = Si]" << std::endl;
						std::cin >> amarillo;
						system("CLS");

						if (amarillo) {
							std::cout << "Tu personaje es: Wario" << std::endl;
						}
						else {
							std::cout << "Tu personaje usa el color morado? [0 = No] [1 = Si]" << std::endl;
							std::cin >> morado;
							system("CLS");

							if (morado) {
								std::cout << "Tu personaje es: Waluigui" << std::endl;
							}
							else {
								std::cout << "Tu personaje es: Rosalina" << std::endl;
							}
						}
					}
				}
			}
		}
	}
	else {
		std::cout << "Tu personaje es un dinosaurio? [0 = No] [1 = Si]" << std::endl;
		std::cin >> dinosaurio;
		system("CLS");

		if (dinosaurio) {
			std::cout << "Tu personaje usa el color verde? [0 = No] [1 = Si]" << std::endl;
			std::cin >> verde;
			system("CLS");

			if (verde) {
				std::cout << "Tu personaje es: Yoshi" << std::endl;
			}
			else {
				std::cout << "Tu personaje es: Birdo" << std::endl;
			}
		}
		else {
			std::cout << "Tu personaje es un koopa? [0 = No] [1 = Si]" << std::endl;
			std::cin >> tortuga;
			system("CLS");

			if (tortuga) {
				std::cout << "Tu personaje lanza fuego? [0 = No] [1 = Si]" << std::endl;
				std::cin >> lanzaFuego;
				system("CLS");

				if (lanzaFuego) {
					std::cout << "Tu personaje es: Bowser" << std::endl;
				}
				else {
					std::cout << "Tu personaje es: Koopa Troopa" << std::endl;
				}
			}
			else {
				std::cout << "Tu personaje usa mascara? [0 = No] [1 = Si]" << std::endl;
				std::cin >> mascara;
				system("CLS");

				if (mascara) {
					std::cout << "Tu personaje es: Shy Guy" << std::endl;
				}
				else {
					std::cout << "Tu personaje es un hongo? [0 = No] [1 = Si]" << std::endl;
					std::cin >> hongo;
					system("CLS");

					if (hongo) {
						std::cout << "Tu personaje es marron? [0 = No] [1 = Si]" << std::endl;
						std::cin >> marron;
						system("CLS");

						if (marron) {
							std::cout << "Tu personaje es: Goomba" << std::endl;
						}
						else {
							std::cout << "Tu personaje es: Toad" << std::endl;
						}
					}
					else {
						std::cout << "Tu personaje es: Pokey" << std::endl;
					}
				}
			}
		}
	}
}