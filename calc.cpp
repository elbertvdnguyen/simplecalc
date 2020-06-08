#include "calc.hpp"

#include <iostream>
#include <cmath>
#include <string>
#include <math.h>
#include <unistd.h>
#include <ctime>
#include <cstdlib>

// #include <stdio.h>      /* printf, NULL */
// #include <stdlib.h>     /* srand, rand */
// #include <time.h>
using namespace std;

	Calc::Calc(){
		srand(time(0));
		
		cout << initialStart << endl;
		sleep(1);
		cout << zeroPercent << endl;
		valOne = 0;
		sleep((rand() % 3) + 1);
		cout << twentyFivePercent << endl;
		valTwo = 0;
		sleep((rand() % 3) + 1);
		cout << fiftyPercent << endl;
		saveAns = 0;
		sleep((rand() % 3) + 1);
		cout << seventyFivePercent << endl;
		sleep((rand() % 3) + 1);
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
        /* void Calc::getOp(){
		return op;
	} */
	void Calc::display() {
		char userInput;
		double value1 = 0.0;
		double value2 = 0.0;
		double value = 0.0;
		
		cout << "Which operation would you like to perform?\n" << endl;
		cout << "1. Basic Arithmetic\n2. Advanced Arithmetic\n3. Trigonometric Functions\n4. Conversions\n5. Quit" << endl;
		cin >> userInput;
		if (!isdigit(userInput)) { cout << invalidInput; }
		else if(userInput == '5') {
			cout << quitInput << "\n" << hundredPercent << "\n" << seventyFivePercent << "\n" << fiftyPercent << "\n" << twentyFivePercent << endl;
			cout << quitComplete << "\n" << borderQuit << "\n" << quitMessage << "\n" << borderQuit << endl;
			exit(1);
		} else if (userInput == '1') {
			cout << "You have chosen basic arithmetic. Which operation would you like to perform?\n" << endl;
			cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
			cin >> userInput;
			if (!isdigit(userInput)) { cout << invalidInput; }
			else if (userInput == '1') {
				cout << "Addition. One or two inputs?\n";
				cout << "1. One input\n2. Two inputs\n";
				cin >> userInput;
				if (!isdigit(userInput)) { cout << invalidInput; }
				else if (userInput == '1') {
					cin >> value;
					add(value);
				} else if (userInput == '2') {
					cin >> value1 >> value2;
					add(value1, value2);
				}
			} else if (userInput == '2') {
				cout << "Subtraction. One or two inputs?\n";
                                cout << "1. One input\n2. Two inputs\n";
                                cin >> userInput;
                                if (!isdigit(userInput)) { cout << invalidInput; }
                                else if (userInput == '1') {
					cin >> value;
                                        sub(value);
                                } else if (userInput == '2') {
					cin >> value1 >> value2;
                                        sub(value1, value2);
				}
			} else if (userInput == '3') {
				cout << "Multiplication. One or two inputs?\n";
                                cout << "1. One input\n2. Two inputs\n";
                                cin >> userInput;
                                if (!isdigit(userInput)) { cout << invalidInput; }
                                else if (userInput == '1') {
                                        cin >> value;
                                        mult(value);
                                } else if (userInput == '2') {
                                        cin >> value1 >> value2;
					mult(value1, value2);
				}
			} else if (userInput == '4') {
				cout << "Division. One or two inputs?\n";
                                cout << "1. One input\n2. Two inputs\n";
                                cin >> userInput;
                                if (!isdigit(userInput)) { cout << invalidInput; }
                                else if (userInput == '1') {
                                        cin >> value;
                                        div(value);
                                } else if (userInput == '2') {
                                        cin >> value1 >> value2;
                                        div(value1, value2);
				}
			}
		} else if (userInput == '2') {
		cout << "You have chosen advanced arithmetic. Which operation would you like to perform?\n";
		cout << "1. Pow\n2. Modulo\n";
		cin >> userInput;
		if (!isdigit(userInput)) { cout << invalidInput; }
                        else if (userInput == '1') {
                                cout << "Pow. One or two inputs?\n";
                                cout << "1. One input\n2. Two inputs\n";
                                cin >> userInput;
                                if (!isdigit(userInput)) { cout << invalidInput; }
                                else if (userInput == '1') {
                                        cin >> value;
                                        power(value);
                                } else if (userInput == '2') {
                                        cin >> value1 >> value2;
                                        power(value1, value2);
                                }
                        } else if (userInput == '2') {
                                cout << "Modulo. One or two inputs?\n";
                                cout << "1. One input\n2. Two inputs\n";
                                cin >> userInput;
                                if (!isdigit(userInput)) { cout << invalidInput; }
                                else if (userInput == '1') {
                                        cin >> value;
                                        mod(value);
                                } else if (userInput == '2') {
                                        cin >> value1 >> value2;
                                        mod(value1, value2);
                                }
			}
		}
	}
	void Calc::print(){
                cout << valOne << " " << op << " " << valTwo << " = " << saveAns << endl;
                return;
        }
