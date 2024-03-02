//2023111359 √÷∞°¿±
//Movie.h
#include <iostream>
using namespace std;

class Movie {
private:
	string name;
	string director;
	double point;
public:
	Movie();
	Movie(string, string, double);
	void setName(string);
	void setDirector(string);
	void setPoint(double);
	void print();
	string getName(); // optional
	string getDirector(); // optional
	double getPoint(); // optional
};
