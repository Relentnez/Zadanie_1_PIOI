#include <iostream>
using namespace std;

#include "Complex"
#include "Complex.h"
#include <math.h>

int main() {

	Complex l1, l2, w;

	bool pop_wyb = true;

	int op1, op2, g;
while (g!=100){
	cout << "Kalkulator!" << endl;

	//Wczytanie liczby 1
	cout << "Podaj liczbe 1!" << endl;
	l1.Input_from_console();

	//Wczytanie liczby 2
	cout << "Podaj liczbe 2!" << endl;
	l2.Input_from_console();

	cout << endl;
	cout << "Dostepne opcje:" << endl;
	cout << "1 - operacje matematyczne" << endl;
	cout << "2 - operacje porownania" << endl;
	cout << "3 - inne" << endl;
	cout << "4 - Zakoncz" << endl;

	cout << endl;
	cout << "Podaj opcje! " << endl;
	cin >> op1;

	cout << "Podales opcje: " << op1 << endl;

	switch(op1){

	case 1:	//Operacje matematyczne

		cout << "Dostepne operacje:" << endl;

		cout << "1 - dodawanie" << endl;
		cout << "2 - odejmowanie" << endl;
		cout << "3 - mnozenie" << endl;
		cout << "4 - dzielenie" << endl;

		cout << endl;
		cout << "Podaj operacje! " << endl;
		cin >> op2;

		cout << "Podales operacje: " << op2 << endl;

		switch(op2){

		case 1:	//Dodawanie
			w = l1 + l2;
			break;

		case 2:	//Odejmowanie
			w = l1 - l2;
			break;

		case 3:	//Mno¿enie
			w = l1 * l2;
			break;

		case 4: //dzielenie

			w = l1 / l2;
			break ;

		default:

			pop_wyb = false;
			cout << "Nieprawidlowy wybor!" << endl;

			break;

		}

		if(pop_wyb)
			cout << "Wynik operacji: " << w << endl;

		break;

		case 2: //Operacje porownania

			cout << "Dostepne operacje:" << endl;

			cout << "1 - wieksze" << endl;
			cout << "2 - mniejsze" << endl;
			cout << "3 - rowne" << endl;

			cout << endl;
			cout << "Podaj operacje! " << endl;
			cin >> op2;

			cout << "Podales operacje: " << op2 << endl;

			switch(op2){

			case 1:	//Wieksze

				if(l1 > l2)
					cout << "Liczba 1 jest wieksza" << endl;
				else
					cout << "Liczba 2 jest wieksza" << endl;

				break;

			case 2:	//Mniejsze
				if(l1 < l2)
					cout << "Liczba 1 jest mniejsza" << endl;
				else
					cout << "Liczba 2 jest mniejsza" << endl;
				break;

			case 3:	//Rowne
				if(l1 == l2)
					cout << "Liczba 1 i liczba 2 sa rowne" << endl;
				else
					cout << "Liczba 1 i liczba 2 nie sa rowne" << endl;
				break;

			default:

				cout << "Nieprawidlowy wybor!" << endl;

				break;

			}


			break;


			case 3: //Inne

				cout << "Dostepne operacje:" << endl;

				cout << "1 - modul" << endl;
				cout << "2 - odwrotnosc" << endl;
				cout << "3 - argument " << endl;

				cout << endl;
				cout << "Podaj operacje! " << endl;
				cin >> op2;

				cout << "Podales operacje: " << op2 << endl;

				switch(op2){

				case 1:	//Modul liczby 1

					cout << "Wynik operacji: " << l1.c_abs() << endl;

					break;
				case 2: // Odwrotnosc liczby 1

					cout << "Wynik operacji: " << l1.c_odwr_r() << " + i * " << l1.c_odwr_u() << endl;
					break;

				case 3: // Argument liczby 1

					cout << "Wynik operacji: " << l1.c_arg ()  << endl;
					break;
				default:

					cout << "Nieprawidlowy wybor!" << endl;

					break;
				}

				break;

	case 4:
		g = 100;

		break ;
	}


}
	return 0;
}
