#include <iostream>
#include <cmath>
#include <string>
#include <math.h>

#include "calc.hpp"

using namespace std;

	Calc::Calc(){
		cout << initialStart << endl;
		valOne = 0;
		cout << twentyFivePercent << endl;
		valTwo = 0;
		cout << fiftyPercent << endl;
		saveAns = 0;
		cout << seventyFivePercent << endl;
		cout << hundredPercent << endl;
		cout << initialComplete << endl << switchUser << endl;
		cout << borderWelcome << endl << welcomeUser << endl; 
		cout << borderWelcome << endl;
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
        void Calc::mod(double numOne, double numTwo){
		valOne = numOne;
                valTwo = numTwo;
		op = '%';
                saveAns = fmod(valOne, valTwo);
                print();
                return;
	}
        void Calc::mod(double numTwo){
		valOne = saveAns;
                valTwo = numTwo;
                op = '%';
                saveAns = fmod(valOne, valTwo);
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
