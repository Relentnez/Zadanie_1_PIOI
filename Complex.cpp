#include "Complex.h"
#include <math.h>

//Konstruktor 5-param.
Complex::Complex(string n, double r, double i, double a, double m){

	name = n;
	real = r;
	imag = i;
	argum = a;
	module = m;

	cout << "Nazwa = " << name;
	cout << ", adres = " << this;
	cout << ", cz. rzeczywista = " << real;
	cout << ", cz. urojona = " << imag;
	cout << "argument = " << argum;
	cout << "modul = " << module;

	cout << " UTWORZONO!" << endl;
}
//Konstruktor 3-param.
Complex::Complex(string n, double r, double i){

	name = n;
	real = r;
	imag = i;
	argum = 0;
	module = 0;

	cout << "Nazwa = " << name;
	cout << ", adres = " << this;
	cout << ", cz. rzeczywista = " << real;
	cout << ", cz. urojona = " << imag;
	cout << "argument = " << argum;
	cout << "modul = " << module;

	cout << " UTWORZONO!" << endl;

}

//Konstruktor 0-param.
Complex::Complex(){

	name = "Bez nazwy";
	real = 0.0;
	imag = 0.0;
	argum = 0.0;
	module = 0.0;

	cout << "Nazwa = " << name;
	cout << ", adres = " << this;
	cout << ", cz. rzeczywista = " << real;
	cout << ", cz. urojona = " << imag;
	cout << "argument = " << argum;
	cout << "modul = " << module;

	cout << " UTWORZONO!" << endl;
}

//Konstruktor 1-param.
Complex::Complex(string n){

	name = n;
	real = 0.0;
	imag = 0.0;
	argum = 0.0;
	module = 0.0;

	cout << "Nazwa = " << name;
	cout << ", adres = " << this;
	cout << ", cz. rzeczywista = " << real;
	cout << ", cz. urojona = " << imag;
	cout << "argument = " << argum;
	cout << "modul = " << module;

	cout << " UTWORZONO!" << endl;

}

//Konstruktor 2-param.
Complex::Complex(double r, double i){

	name = "Bez nazwy";
	real = r;
	imag = i;

	cout << "Nazwa = " << name;
	cout << ", adres = " << this;
	cout << ", cz. rzeczywista = " << real;
	cout << ", cz. urojona = " << imag;
	cout << "argument = " << argum;
	cout << "modul = " << module;

	cout << " UTWORZONO!" << endl;

}

Complex::Complex(const Complex &other) {

	if(this == &other)
		return;

	name = other.name;
	real = other.real;
	imag = other.imag;

	cout << "Nazwa = " << name;
	cout << ", adres = " << this;
	cout << ", cz. rzeczywista = " << real;
	cout << ", cz. urojona = " << imag;
	cout << "argument = " << argum;
	cout << "modul = " << module;

	cout << " SKOPIOWANO!" << endl;
}

Complex::~Complex() {

	cout << "Nazwa = " << name;
	cout << ", adres = " << this;
	cout << ", cz. rzeczywista = " << real;
	cout << ", cz. urojona = " << imag;
	cout << "argument = " << argum;
	cout << "modul = " << module;

	cout << " ZNISZCZONO!" << endl;
}


void Complex::Info() {

	cout << "INFO: Nazwa = " << name;
	cout << ", adres = " << this;
	cout << ", cz. rzeczywista = " << real;
	cout << ", cz. urojona = " << imag ;
	cout << "argument = " << argum;
	cout << "modul = " << module << endl;
}

void Complex::Set(const Complex &other) {

	if(this == &other)
		return;

	name = other.name;
	real = other.real;
	imag = other.imag;
	argum = other.argum;
	module = other.module;
}

double Complex::c_abs() const {

	return sqrt(pow(real, 2.0) + pow(imag, 2.0));
}

double Complex::c_odwr_r() const {
	return real / (pow(real, 2.0) + pow(imag, 2.0)) ;

}

double Complex::c_odwr_u() const {
	return (imag/ (pow(real, 2.0) + pow(imag, 2.0)));

}

Complex Complex::conj() const {

	return Complex("Sprzezenie: " + name, real, -imag);
}

double Complex::c_arg() const {
	return  (atan2(imag,real)) * M_PI/ 180 ;

}

bool Complex::operator>(const Complex &p) {

	return c_abs() > p.c_abs();
}

bool Complex::operator<(const Complex &p) {

	return c_abs() < p.c_abs();
}

bool Complex::operator>=(const Complex &p) {

	return c_abs() >= p.c_abs();
}

bool Complex::operator<=(const Complex &p) {

	return c_abs() <= p.c_abs();
}

bool Complex::operator==(const Complex &p) {

	return (Get_name() == p.Get_name())
			&& (Get_real() == p.Get_real())
			&& (Get_imag() == p.Get_imag());

}

bool Complex::operator!=(const Complex &p) {

	return (Get_name() != p.Get_name())
			|| (Get_real() != p.Get_real())
			|| (Get_imag() != p.Get_imag());

}

Complex Complex::operator+(const Complex &p) {

	//L1: (a) + (b)i
	//L2: (c) + (d)i
	//W : (a+c) + (b+d)i

	double a = Get_real(), b = Get_imag();
	double c = p.Get_real(), d = p.Get_imag();

	Complex w("Suma: " + Get_name() + " + " + p.Get_name(), a+c, b+d);

	return w;
}

Complex Complex::operator-(const Complex &p) {

	//L1: (a) + (b)i
	//L2: (c) + (d)i
	//W : (a-c) + (b-d)i

	double a = Get_real(), b = Get_imag();
	double c = p.Get_real(), d = p.Get_imag();

	Complex w("Ró¿nica: " + Get_name() + " - " + p.Get_name(), a-c, b-d);

	return w;
}

Complex Complex::operator*(const Complex &p) {

	//L1: (a) + (b)i
	//L2: (c) + (d)i
	//W : (ac - bd) + (ad + bc)i

	//(a + bi)*(c + di) = a*c + a*di + bi*c + bi*di = (ac - bd) + (ad + bc)i

	double a = Get_real(), b = Get_imag();
	double c = p.Get_real(), d = p.Get_imag();

	Complex w("Iloczyn: " + Get_name() + " * " + p.Get_name(), a*c - b*d, a*d + b*c);

	return w;
}

Complex Complex::operator/(const Complex &p) {



	double a = Get_real(), b = Get_imag();
	double c = p.Get_real(), d = p.Get_imag();
	Complex w("Iloraz: " + Get_name() + " * " + p.Get_name(), (a*c + b*d) / (c*c + d*d), (b*c - a*d) / (c*c + d*d));


	return w;
}
void Complex::Input_from_console(){



	cout << "Podaj nazwe: ";
	cin >> name;

	cout << "Podaj czesc rzeczywista: ";
	cin >> real;

	cout << "Podaj czesc urojona: ";
	cin >> imag;
	cout << "Podaj argument: ";
	cin >> argum;
	cout << "Podaj modul: ";
			cin >> module;





}

ostream & operator<<(ostream & console_out, const Complex &n){

	return console_out << n.Get_name() << ": " << n.Get_real() << " + " << n.Get_imag() << "i";

}
