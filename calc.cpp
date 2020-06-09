#include "calc.hpp"
#include "decorator.hpp"

#include <iostream>
#include <cmath>
#include <string>
#include <math.h>
#include <unistd.h>
#include <ctime>
#include <cstdlib>

using namespace std;

	Calc::Calc(){
		valOne = 0;
		valTwo = 0;
		saveAns = 0;
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
		
		srand(time(0));

                cout << initialStart << endl;
                sleep(1);
                cout << zeroPercent << endl;
                sleep((rand() % 3) + 1);
                cout << twentyFivePercent << endl;
                sleep((rand() % 3) + 1);
                cout << fiftyPercent << endl;
                sleep((rand() % 3) + 1);
                cout << seventyFivePercent << endl;
                sleep((rand() % 3) + 1);
                cout << hundredPercent << endl;
                sleep(1);
                cout << initialComplete << endl << switchUser << endl;
                cout << borderWelcome << endl << welcomeUser << endl;
                cout << borderWelcome << endl;
		sleep(2);
		
		while(userInput != '5') {
		cout << "Which operation would you like to perform?\n" << endl;
		cout << "1. Basic Arithmetic\n2. Advanced Arithmetic\n3. Trigonometric Functions\n4. Conversions\n5. Quit" << endl;
		cin >> userInput;
		if (!isdigit(userInput)) { cout << invalidInput; }
		else if(userInput == '5') {
			cout << quitInput << "\n";
			sleep(1);
			cout << hundredPercent << "\n";
			sleep((rand() % 3) + 1);
			cout << seventyFivePercent << "\n";
			sleep((rand() % 3) + 1);
			cout << fiftyPercent << "\n";
			sleep((rand() % 3) + 1);
			cout << twentyFivePercent << endl;
			sleep((rand() % 3) + 1);
			cout << zeroPercent << endl;
			sleep(1);
			cout << quitComplete << "\n" << borderQuit << "\n" << quitMessage << "\n" << borderQuit << endl;
			exit(0);
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
		} else if (userInput == '3') {
		cout << "You have chosen trigonometric. Which operation would you like to perform?\n";
		cout << "1. Sine\n2. Cosine\n3. Tangent\n4. Arcsine\n5. Arccosine\n6. Arctangent\n";
		cin >> userInput;
		if (!isdigit(userInput)) { cout << invalidInput; }
		else if (userInput == '1') {
			cout << "You have chosen the sine function. Please input a value: \n";
			cin >> value;
			Calc* tempCalc = new Calc();
			tempCalc->saveAns = value;
			SineCalculation* sine = new SineCalculation(tempCalc);
			sine->trigPrint();
		} else if (userInput == '2') {
			cout << "You have chosen the cosine function. Please input a value: \n";
			cin >> value;
			Calc* tempCalc = new Calc();
                        tempCalc->saveAns = value;
                        CosineCalculation* cosine = new CosineCalculation(tempCalc);
                        cosine->trigPrint();
		} else if (userInput == '3') {
			cout << "You have chosen the tangent function. Please input a value: \n";
			cin >> value;
			Calc* tempCalc = new Calc();
                        tempCalc->saveAns = value;
			TangentCalculation* tangent = new TangentCalculation(tempCalc);
			tangent->trigPrint();
		} else if (userInput == '4') {
			cout << "You have chosen the arcsine function. Please input a value: \n";
			cin >> value;
			Calc* tempCalc = new Calc();
                        tempCalc->saveAns = value;
			ArcSineCalculation* arcSine = new ArcSineCalculation(tempCalc);
			arcSine->trigPrint();
		} else if (userInput == '5') {
			cout << "You have chosen the arccosine function. Please input a value: \n";
			cin >> value;
			Calc* tempCalc = new Calc();
                        tempCalc->saveAns = value;
			ArcCosineCalculation* arcCosine = new ArcCosineCalculation(tempCalc);
			arcCosine->trigPrint();
		} else if (userInput == '6') {
			cout << "You have chosen the arctangent function. Please input a value: \n";
			cin >> value;
			Calc* tempCalc = new Calc();
                        tempCalc->saveAns = value;
			ArcTangentCalculation* arcTan = new ArcTangentCalculation(tempCalc);
			arcTan->trigPrint();
		}
	    } else if (userInput == '4') {
		cout << "You have chosen to convert your answer. Convert to: \n";
		cout << "1. Radians\n2. Degrees\n";
		cin >> userInput;
		if (!isdigit(userInput)) { cout << invalidInput; }
		else if (userInput == '1') {
			cout << "Converting to radians. Please input a value: \n";
			cin >> value;
			Calc* tempCalc = new Calc();
                        tempCalc->saveAns = value;
			ConvertToRadians* rad = new ConvertToRadians(tempCalc);
			rad->trigPrint();
		} else if (userInput == '2') {
			cout << "Converting to degrees. Please input a value: \n";
			cin >> value;
			Calc* tempCalc = new Calc();
                        tempCalc->saveAns = value;
			ConvertToDegrees* deg = new ConvertToDegrees(tempCalc);
			deg->trigPrint();
		}
	     }
	  }
	}
	void Calc::print(){
                cout << valOne << " " << op << " " << valTwo << " = " << saveAns << endl;
                return;
        }
