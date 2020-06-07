#include <iostream>
#include <cmath>
#include <string>
#include <math.h>

#include "calc.hpp"

using namespace std;

	Calc::Calc(){
		cout << "Initializing Calculator" << endl;
		valOne = 0;
		valTwo = 0;
		saveAns = 0;
		valModOne = 0;
		valModTwo = 0;
		cout << "Initlization Complete. Welcome to Simple Calc." << endl;
	}
        void Calc::add(double numOne, double numTwo){
		valOne = numOne;
		valTwo = numTwo;
		op = "+";
		saveAns = valOne + valTwo;
		print();
		return;	
	}
        void Calc::add(double numTwo){
		valOne = saveAns;
		valTwo = numTwo;
		op = "+";
		saveAns = valOne+valTwo;
		print();
		return;
	}
        void Calc::sub(double numOne, double numTwo){
		valOne = numOne;
                valTwo = numTwo;
                op = "-";
                saveAns = valOne - valTwo;
                print();
                return;
	}
        void Calc::sub(double numTwo){
		valOne = saveAns;
		valTwo = numTwo;
		op = "-";
		saveAns = valOne - valTwo;
		print();
		return;
	}
        void Calc::mult(double numOne, double numTwo){
		valOne = numOne;
                valTwo = numTwo;
                op = "*";
                saveAns = valOne * valTwo;
                print();
                return;
	}
        void Calc::mult(double numTwo){
		valOne = saveAns;
                valTwo = numTwo;
                op = "*";
                saveAns = valOne * valTwo;
                print();
                return;
	}
        void Calc::div(double numOne, double numTwo){
		valOne = numOne;
                valTwo = numTwo;
                op = "/";
                saveAns = valOne / valTwo;
                print();
                return;
	}
        void Calc::div(double numTwo){
		valOne = saveAns;
                valTwo = numTwo;
                op = "/";
                saveAns = valOne / valTwo;
                print();
                return;
	}
        void Calc::power(double numOne, double numTwo){
		valOne = numOne;
                valTwo = numTwo;
                op = "**";
                saveAns = pow(valOne, valTwo);
                print();
                return;

	}
        void Calc::power(double numTwo){
		valOne = saveAns;
                valTwo = numTwo;
                op = "**";
                saveAns = pow(valOne, valTwo);
                print();
                return;

	}
        void Calc::mod(int numOne, int numTwo){
		valModOne = numOne;
                valModTwo = numTwo;
                op = '%';
                saveAns = valModOne % valModTwo;
                print();
                return;
	}
        void Calc::mod(int numTwo){
		valModOne = saveAns;
                valModTwo = numTwo;
                op = '%';
                saveAns = valModOne % valModTwo;
                print();
                return;
	}
        double Calc::evaluate(){
		return saveAns;
	}
        void Calc::getOp(){
		return;
	}
	void Calc::display(){
		return;
	}
	void Calc::print(){
                cout << valOne << " " << op << " " << valTwo << " = " << saveAns << endl;
                return;
        }

