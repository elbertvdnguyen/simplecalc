#ifndef CALC_HPP
#define CALC_HPP

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Calc{
	private:
	double valOne = 0;
	double ValTwo = 0;
	double saveAns = 0;
	public:
	Calc();
	double add(double, double);
	double add(double);
	double sub(double, double);
	double sub(double);
	double mult(double, double);
	double mult(double);
	double div(double, double);
	double div(double);
	double pow(double, double);
	double pow(double);
	double mod(double, double);
	double mod(double);
	void evaluate();
	void getOp();
	void display();		
}
#endif
