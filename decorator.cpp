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
void ConvertToDegrees::trigPrint(){
	cout << get_calc()->evaluate() << " in Radians is " << (get_calc()->evaluate() * 180)/M_PI << " in Degrees." << endl;
}



ConvertToRadians::ConvertToRadians(Calc* calc) : Decorator(calc){};
double ConvertToRadians::evaluate(){
	return (get_calc()->evaluate() * M_PI)/180;

}
void ConvertToRadians::trigPrint(){
	cout << get_calc()->evaluate() << " in Degrees is " << (get_calc()->evaluate() * M_PI)/180 << " in Radians." << endl;
}

SineCalculation::SineCalculation(Calc* calc) : Decorator(calc){};
double SineCalculation::evaluate(){
	return sin(get_calc()->evaluate());	

}
void SineCalculation::trigPrint(){
	cout << "sin(" << get_calc()->evaluate() << ") = " << sin(get_calc()->evaluate()) << endl;
}

CosineCalculation::CosineCalculation(Calc* calc) : Decorator(calc){};
double CosineCalculation::evaluate(){
	return cos(get_calc()->evaluate());

}
void CosineCalculation::trigPrint(){
	cout << "cos(" << get_calc()->evaluate() << ") = " << cos(get_calc()->evaluate()) << endl;
}

TangentCalculation::TangentCalculation(Calc* calc) : Decorator(calc){};
double TangentCalculation::evaluate(){
	return tan(get_calc()->evaluate());

}
void TangentCalculation::trigPrint(){
	cout << "tan(" << get_calc()->evaluate() << ") = " << tan(get_calc()->evaluate()) << endl;
}

ArcSineCalculation::ArcSineCalculation(Calc* calc) : Decorator(calc){};
double ArcSineCalculation::evaluate(){
	return asin(get_calc()->evaluate());

}
void ArcSineCalculation::trigPrint(){
	cout << "arcsin(" << get_calc()->evaluate() << ") = " << asin(get_calc()->evaluate()) << endl;
}

ArcCosineCalculation::ArcCosineCalculation(Calc* calc) : Decorator(calc){};
double ArcCosineCalculation::evaluate(){
	return acos(get_calc()->evaluate());

}
void ArcCosineCalculation::trigPrint(){
	cout << "arccos(" << get_calc()->evaluate() << ") = " << acos(get_calc()->evaluate()) << endl;
}

ArcTangentCalculation::ArcTangentCalculation(Calc* calc) : Decorator(calc){};
double ArcTangentCalculation::evaluate(){
	return atan(get_calc()->evaluate());

}
void ArcTangentCalculation::trigPrint(){
	cout << "arctan(" << get_calc()->evaluate() << ") = " << atan(get_calc()->evaluate()) << endl;
}


