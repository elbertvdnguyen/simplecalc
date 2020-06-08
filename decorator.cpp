#include <iostream>
using namespace std;

#include <cmath>
#include <math.h>

#include "decorator.hpp"
#include "calc.hpp"

Decorator::Decorator(Calc* calc){

	this->calc = calc;

}


Calc* Decorator::get_calc(){

	return this->calc;

}

void Decorator::set_calc(Calc* calc){

	this->calc = calc;

}

ConvertToDegrees::ConvertToDegrees(Calc* calc) : Decorator(calc){};
double ConvertToDegrees::evaluate(){
	return (get_calc()->evaluate() * 180)/M_PI;

}

ConvertToRadians::ConvertToRadians(Calc* calc) : Decorator(calc){};
double ConvertToRadians::evaluate(){
	return (get_calc()->evaluate() * M_PI)/180;

}

SineCalculation::SineCalculation(Calc* calc) : Decorator(calc){};
double SineCalculation::evaluate(){
	return sin(get_calc()->evaluate());	

}

CosineCalculation::CosineCalculation(Calc* calc) : Decorator(calc){};
double CosineCalculation::evaluate(){
	return cos(get_calc()->evaluate());

}

TangentCalculation::TangentCalculation(Calc* calc) : Decorator(calc){};
double TangentCalculation::evaluate(){
	return tan(get_calc()->evaluate());


}

ArcSineCalculation::ArcSineCalculation(Calc* calc) : Decorator(calc){};
double ArcSineCalculation::evaluate(){
	return asin(get_calc()->evaluate());

}

ArcCosineCalculation::ArcCosineCalculation(Calc* calc) : Decorator(calc){};
double ArcCosineCalculation::evaluate(){
	return acos(get_calc()->evaluate());

}

ArcTangentCalculation::ArcTangentCalculation(Calc* calc) : Decorator(calc){};
double ArcTangentCalculation::evaluate(){
	return atan(get_calc()->evaluate());

}



