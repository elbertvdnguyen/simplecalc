#ifndef CALC_HPP
#define CALC_HPP

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Calc{
	private:
    		double valOne = 0;
		double valTwo = 0;
		double saveAns = 0;
		string op = "";
	  	string promptCalc = "Enter an equation (Use an operator to use a previous answer.) (q to quit): ";
	  	string invalidInput = "Input is not a number or operator.";
		string initialStart = "Initializing SimpleCalc. Please wait.";
	  	string zeroPercent = "[                ]";
		string twentyFivePercent = "[||||            ]";
	  	string fiftyPercent = "[||||||||        ]";
	 	string seventyFivePercent = "[||||||||||||    ]";
    		string hundredPercent = "[||||||||||||||||]";
    		string initialComplete =  "Initlization Complete.";
    		string switchUser = "Switching to User Interface.";
    		string welcomeUser = "Welcome to SimpleCalc.";
    		string borderWelcome = "=======================";
		string quitInput = "Quit command detected. Preparing to shut down.";
		string quitComplete = "Shut down complete.";
		string quitMessage = "Thank you for using SimpleCalc! Goodbye!";
		string borderQuit = "========================================";
	public:
		Calc();
		void add(double, double);
		void add(double);
		void sub(double, double);
		void sub(double);
		void mult(double, double);
		void mult(double);
		void div(double, double);
		void div(double);
		void power(double, double);
		void power(double);
		void mod(double, double);
		void mod(double);
		double evaluate();
		// void getOp();
		void display();
		void print();
};
#endif
