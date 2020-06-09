#ifndef DECORATOR_HPP
#define DECORATOR_HPP

#include <iostream>
using namespace std;
#include "calc.hpp"

class Decorator : public Calc{

	private:
		Calc* calc;
	public:
		Decorator(){};
		~Decorator(){};
		Decorator(Calc* calc);
		virtual double evaluate(){return calc->evaluate();}
		virtual Calc* get_calc();
		virtual void set_calc(Calc* calc);
		virtual void trigPrint() = 0;

};


class ConvertToDegrees : public Decorator {
	public:
		ConvertToDegrees(Calc* calc);
		virtual double evaluate();
		virtual void trigPrint();

};

class ConvertToRadians : public Decorator {
	public:
		ConvertToRadians(Calc* calc);
		virtual double evaluate();
		virtual void trigPrint();

};

class SineCalculation : public Decorator {
	public:
		SineCalculation(Calc* calc);
		virtual double evaluate();
		virtual void trigPrint();
};

class CosineCalculation : public Decorator {
	public:
		CosineCalculation(Calc* calc);
		virtual double evaluate();
		virtual void trigPrint();
};

class TangentCalculation : public Decorator {
	public:
		TangentCalculation(Calc* calc);
		virtual double evaluate();
		virtual void trigPrint();

};

class ArcSineCalculation : public Decorator {
	public:
		ArcSineCalculation(Calc* calc);
		virtual double evaluate();
		virtual void trigPrint();

};

class ArcCosineCalculation : public Decorator {
	public:
		ArcCosineCalculation(Calc* calc);
		virtual double evaluate();
		virtual void trigPrint();
	

};

class ArcTangentCalculation : public Decorator {
	public:
		ArcTangentCalculation(Calc* calc);
		virtual double evaluate();
		virtual void trigPrint();


};


#endif //DECORATOR_HPP
