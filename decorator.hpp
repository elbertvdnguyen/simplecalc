#ifndef DECORATOR_HPP
#define DECORATOR_HPP


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
	





};


class ConvertToDegrees : public Decorator {
	public:
		ConvertToDegrees(Calc* calc);
		virtual double evaluate();


};

class ConvertToRadians : public Decorator {
	public:
		ConvertToRadians(Calc* calc);
		virtual double evaluate();


};

class SineCalculation : public Decorator {
	public:
		SineCalculation(Calc* calc);
		virtual double evaluate();

};

class CosineCalculation : public Decorator {
	public:
		CosineCalculation(Calc* calc);
		virtual double evaluate();

};

class TangentCalculation : public Decorator {
	public:
		TangentCalculation(Calc* calc);
		virtual double evaluate();


};

class ArcSineCalculation : public Decorator {
	public:
		ArcSineCalculation(Calc* calc);
		virtual double evaluate();


};

class ArcCosineCalculation : public Decorator {
	public:
		ArcCosineCalculation(Calc* calc);
		virtual double evaluate();



};

class ArcTangentCalculation : public Decorator {
	public:
		ArcTangentCalculation(Calc* calc);
		virtual double evaluate();



};


#endif //DECORATOR_HPP
