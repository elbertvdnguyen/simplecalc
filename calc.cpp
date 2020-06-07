#include "calc.hpp"
#include <iostream>
#include <cmath>
#include <string>
#include <math.h>

class Calc{
        private:
	double valOne = 0;
	double valTwo = 0;
        double saveAns = 0;
	string op = "";
	string promptCalc = "Enter an equation (Use an operator to use a previous answer.) (q to quit): ";
	string invalidInput = "Input is not a number or operator.";
        public:
	Calc(){
		cout << "Initializing Calculator" << endl;
		valOne = 0;
		valTwo = 0;
		saveAns = 0;
		cout << "Initlization Complete. Welcome to Simple Calc." << endl;
	}
        void add(double numOne, double numTwo){
		valOne = numOne;
		valTwo = numTwo;
		op = "+";
		saveAns = valOne + valTwo;
		print();
		return;	
	}
        void add(double numTwo){
		valOne = saveAns;
		valTwo = numTwo;
		op = "+";
		saveAns = valOne+valTwo;
		print();
		return;
	}
        void sub(double numOne, double numTwo){
		valOne = numOne;
                valTwo = numTwo;
                op = "-";
                saveAns = valOne - valTwo;
                print();
                return;
	}
        void sub(double numTwo){
		valOne = saveAns;
		valTwo = numTwo;
		op = "-";
		saveAns = valOne - valTwo;
		print();
		return;
	}
        void mult(double numOne, double numTwo){
		valOne = numOne;
                valTwo = numTwo;
                op = "*";
                saveAns = valOne * valTwo;
                print();
                return;
	}
        void mult(double numTwo){
		valOne = saveAns;
                valTwo = numTwo;
                op = "*";
                saveAns = valOne * valTwo;
                print();
                return;
	}
        void div(double numOne, double numTwo){
		valOne = numOne;
                valTwo = numTwo;
                op = "/";
                saveAns = valOne / valTwo;
                print();
                return;
	}
        void div(double numTwo){
		valOne = saveAns;
                valTwo = numTwo;
                op = "/";
                saveAns = valOne / valTwo;
                print();
                return;
	}
        void pow(double numOne, double numTwo){
		valOne = numOne;
                valTwo = numTwo;
                op = "**";
                saveAns = pow(valOne, valTwo);
                print();
                return;

	}
        void pow(double numTwo){
		valOne = saveAns;
                valTwo = numTwo;
                op = "**";
                saveAns = pow(valOne, valTwo);
                print();
                return;

	}
        void mod(double, double){
		valOne = numOne;
                valTwo = numTwo;
                op = '%';
                saveAns = valOne % valTwo;
                print();
                return;
	}
        void mod(double){
		valOne = saveAns;
                valTwo = numTwo;
                op = '%';
                saveAns = valOne % valTwo;
                print();
                return;
	}
        void evaluate();
        void getOp();
	void display();
        void print(){
		cout << valOne << op << valTwo << saveAns << endl;
	}
}
