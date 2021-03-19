#ifndef COMPLEX_COMPLEX_H_
#define COMPLEX_COMPLEX_H_

#include <iostream>

#include <math.h>

#include <string>
using namespace std;

class Complex {

	//POLA
private:
	double real;
	double imag;
	double argum;
	double module;

	string name;

	//METODY
public:
	Complex(string n, double r, double i);	//Konstruktor 3-param.
	Complex();								//Konstruktor 0-param.
	Complex(string n);						//Konstruktor 1-param.
	Complex(double r, double i);			//Konstruktor 2-param.
	Complex(string n, double r, double i, double a, double m); //Konstruktor 5-param.


	Complex(const Complex &other);			//Konstruktor kopiujacy

	//Set
	void Set_name(string n){
		this->name = n;
	}

	void Set_real(double r){
		this->real = r;
	}

	void Set_imag(double i){
		this->imag = i;
	}

	void Set_argum(double a){
			this->argum = a;
		}

	void Set_module(double m){
				this->module = m;
			}

	//Get
	string Get_name() const {
		return this->name;
	}

	double Get_real() const {
		return this->real;
	}

	double Get_imag() const {
		return this->imag;
	}

	double Get_argum() const {
			return this->argum;
		}

	double Get_module() const {
			return this->module;
		}

	//Destruktor
	virtual ~Complex();

	//Dodatki
	double c_abs() const;
	Complex conj() const;
	double c_odwr_r() const;
	double c_odwr_u() const;
	double c_arg() const;

	void Info();
	void Set(const Complex &other);

	//Operatory porównania
	bool operator>(const Complex &p);
	bool operator<(const Complex &p);

	bool operator>=(const Complex &p);
	bool operator<=(const Complex &p);

	bool operator==(const Complex &p);
	bool operator!=(const Complex &p);

	//Operatory mat.
	Complex operator+(const Complex &p);
	Complex operator-(const Complex &p);
	Complex operator*(const Complex &p);
	Complex operator/(const Complex &p);

	//Operacje na konsoli
	void Input_from_console();

	friend ostream & operator<<(ostream & console_out, const Complex &n);
};

#endif
