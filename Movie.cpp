//2023111359 �ְ���
//Movie.cpp
#include <iostream>
#include "Movie.h"
using namespace std;

Movie::Movie() { name = ""; director = ""; point = 0.0; };
Movie::Movie(string n, string d, double p) { name = n; director = d; point = p; };
void Movie::setName(string n) { name = n; };
void Movie::setDirector(string d) { director = d; };
void Movie::setPoint(double p) { point = p; };
void Movie::print() { cout << "��ȭ���� : " << name << endl << "��    �� : " << director << endl << "��    �� : " << point << endl; };
string Movie::getName() { return name; }; // optional
string Movie::getDirector() { return director; }; // optional
double Movie::getPoint() { return point; }; // optional