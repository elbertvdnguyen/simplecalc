#ifndef CALC_TEST_CPP
#define CALC_TEST_CPP

#include "gtest/gtest.h"

#include "calc.hpp"

TEST(CalcTest, AddTwoInput){
	double valOne = 5.3;
	double valTwo = 6.2;
	Calc* answer = new Calc();
	answer->add(valOne,valTwo);
        EXPECT_DOUBLE_EQ(answer->evaluate(),11.5);
}
TEST(CalcTest, AddOneInput){
	double valOne = 5.3;
	double valTwo = 6.2;
	double valThree = 10;
	Calc* answer = new Calc();
	answer->add(valOne, valTwo);
	answer->add(valThree);
	EXPECT_DOUBLE_EQ(answer->evaluate(),21.5);
}
TEST(CalcTest, SubTwoInputs){
	double valOne = 4.5;
	double valTwo = 10.6;
	Calc* answer = new Calc();
	answer->sub(valOne, valTwo);
	EXPECT_DOUBLE_EQ(answer->evaluate(), -6.1);
}
TEST(CalcTest, SubOneInput){
	double valOne = 15.6;
	double valTwo = 4.4;
	double valThree = 5;
	Calc* answer = new Calc();
	answer->sub(valOne, valTwo);
	answer->sub(valThree);
	EXPECT_DOUBLE_EQ(answer->evaluate(), 6.2);	
}
TEST(CalcTest, MultTwoInput){
        double valOne = 4.5;
        double valTwo = 10.6;
        Calc* answer = new Calc();
        answer->mult(valOne, valTwo);
        EXPECT_DOUBLE_EQ(answer->evaluate(), 47.7);
}
TEST(CalcTest, MultOneInput){
        double valOne = 5.3;
        double valTwo = 6.2;
        double valThree = 10.4;
        Calc* answer = new Calc();
        answer->mult(valOne, valTwo);
        answer->mult(valThree);
        EXPECT_DOUBLE_EQ(answer->evaluate(), 341.74400000000003);
}
TEST(CalcTest, DivTwoInput){
        double valOne = 23.6;
        double valTwo = 4.3;
        Calc* answer = new Calc();
        answer->div(valOne, valTwo);
        EXPECT_DOUBLE_EQ(answer->evaluate(), 5.4883720930232567);
}
TEST(CalcTest, DivOneInput){
        double valOne = 50.82;
        double valTwo = 3.78;
        double valThree = 2.85;
        Calc* answer = new Calc();
        answer->div(valOne, valTwo);
        answer->div(valThree);
        EXPECT_DOUBLE_EQ(answer->evaluate(), 4.7173489278752436);

}
TEST(CalcTest, PowerTwoInput){
        double valOne = 4.3;
        double valTwo = 2.1;
        Calc* answer = new Calc();
        answer->power(valOne, valTwo);
        EXPECT_DOUBLE_EQ(answer->evaluate(),  21.393594347613121);
}
TEST(CalcTest, PowerOneInput){
        double valOne = 1.5;
        double valTwo = 2.67;
        double valThree = 2.4;
        Calc* answer = new Calc();
        answer->power(valOne, valTwo);
        answer->power(valThree);
        EXPECT_DOUBLE_EQ(answer->evaluate(), 13.439799445275185);
}
TEST(CalcTest, ModTwoInput){
        double valOne = 40.5;
        double valTwo = 23.4;
        Calc* answer = new Calc();
        answer->mod(valOne, valTwo);
        EXPECT_DOUBLE_EQ(answer->evaluate(), 17.100000000000001);
}
TEST(CalcTest, ModOneInput){
        double valOne = 40.5;
        double valTwo = 23.4;
        double valThree = 17.1;
        Calc* answer = new Calc();
        answer->mod(valOne, valTwo);
        answer->mod(valThree);
        EXPECT_EQ(answer->evaluate(), 0);
}
TEST(ComboTest, AddSubInput){
	double valOne = 34.5;
	double valTwo = 45.6;
	double valThree = 23.4;
	Calc* answer = new Calc();
	answer->add(valOne, valTwo);
	answer->sub(valThree);
	EXPECT_DOUBLE_EQ(answer->evaluate(), 56.7);
}
TEST(ComboTest, MultDivInput){
	double valOne = 26.47;
	double valTwo = 2.87;
	double valThree = 54.3;
	Calc* answer = new Calc();
	answer->mult(valOne, valTwo);
	answer->div(valThree);
	EXPECT_DOUBLE_EQ(answer->evaluate(), 1.399058931860037);
}
TEST(ComboTest, PowModInput){
	double valOne = 14.7;
	double valTwo = 7.5;
	double valThree = 12.47;
	Calc* answer = new Calc();
	answer->power(valOne, valTwo);
	answer->mod(valThree);
	EXPECT_DOUBLE_EQ(answer->evaluate(), 2.5288140005296587);	
}
#endif //CALC_TEST_CPP
