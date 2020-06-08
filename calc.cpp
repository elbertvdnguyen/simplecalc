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
		return op;
	}
	void Calc::display() {
		cout << welcomeUser << "Which operation would you like to perform?\n" << endl;
		cout << "1. Basic Arithmetic\n2. Advanced Arithmetic\n3. Trigonometric Functions\n4. Conversions\n5. Quit" << endl;
		cin >> userInput;
		if (!isdigit(userInput)) { cout << invalidInput; }
		else if(userInput == '5') {
			cout << quitInput << "\n" << hundredPercent << "\n" << seventyFivePercent << "\n" << fiftyPercent << "\n" << twentyFivePercent << endl;
			cout << quitComplete << "\n" << quitMessage << "\n" << borderQuit << endl;
		} else if (userInput == '1') {
			cout << "You have chosen basic arithmetic. Which operation would you like to perform?\n" << endl;
			cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
			cin >> userInput;
			if (!isdigit(userInput)) { cout << invalidInput; }
			else if (userInput == '1') {
				cout << "Addition. One or two inputs?\n";
				cout << "1. One input\n2. Two inputs\n";
				 
	}
	void Calc::print(){
                cout << valOne << " " << op << " " << valTwo << " = " << saveAns << endl;
                return;
        }
