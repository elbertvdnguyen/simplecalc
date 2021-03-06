#ifndef DECORATOR_TEST_HPP
#define DECORATOR_TEST_HPP

#include <iostream>
using namespace std;

#include "gtest/gtest.h"
#include "decorator.hpp"
#include "calc.hpp"


TEST(DegreesTestSet, ConvertingToDegrees){
	double rad = (3 * M_PI)/4;
	Calc* answer = new Calc;
	answer->add(rad);
	
	ConvertToDegrees* conversion = new ConvertToDegrees(answer);
	EXPECT_DOUBLE_EQ(conversion->evaluate(), 135);


}

TEST(DegreesTestSet, OperationThenConvertToDeg){
	double rad1 = (M_PI/2);
	double rad2 = (M_PI/2);

	Calc* answer = new Calc;
	answer->add(rad1, rad2);

	ConvertToDegrees* conversion = new ConvertToDegrees(answer);
	EXPECT_DOUBLE_EQ(conversion->evaluate(), 180);


}


TEST(RadiansTestSet, ConvertingToRadians){
	double deg = 45;
	Calc* answer = new Calc;
	answer->add(deg);
	
	ConvertToRadians* conversion = new ConvertToRadians(answer);
	EXPECT_DOUBLE_EQ(conversion->evaluate(), (45 * M_PI)/180);

}

TEST(RadiansTestSet, OperationThenConvertToRad){
	double deg1 = 35;
	double deg2 = 100;
	Calc* answer = new Calc;
	answer->add(deg1, deg2);	

	ConvertToRadians* conversion = new ConvertToRadians(answer);
	EXPECT_DOUBLE_EQ(conversion->evaluate(), (135 * M_PI)/180);	


}

TEST(TrigTestSet, OperationThenSine){
	double rad1 = (M_PI/2);
	Calc* answer = new Calc;
	answer->add(rad1);

	SineCalculation* sine = new SineCalculation(answer);
	EXPECT_DOUBLE_EQ(sine->evaluate(), 1);

}

TEST(TrigTestSet, OperationThenCos){
	double deg = 0;
        Calc* answer = new Calc;
        answer->add(deg);

        CosineCalculation* cosine = new CosineCalculation(answer);
        EXPECT_DOUBLE_EQ(cosine->evaluate(), 1);


}

TEST(TrigTestSet, OperationThenTan){
	double rad1 = (3 * M_PI)/4;
	double rad2 = (M_PI)/2;
	Calc* answer = new Calc;
	answer->sub(rad1, rad2);
	
	TangentCalculation* tangent = new TangentCalculation(answer);
	EXPECT_DOUBLE_EQ(tangent->evaluate(), 1);	


}

TEST(TrigTestSet, OperationThenArcSine){
	double rad1 = 1;
	double rad2 = 1;
	Calc* answer = new Calc;
	answer->mult(rad1, rad2);

	ArcSineCalculation* arcsine = new ArcSineCalculation(answer);	
	EXPECT_DOUBLE_EQ(arcsine->evaluate(), 1.5707963267948966);


}

TEST(TrigTestSet, OperationThenArcCosine){
	double rad1 = 1;
	double rad2 = 1;
	Calc* answer = new Calc;
	answer->div(rad1, rad2);

	ArcCosineCalculation* arccosine = new ArcCosineCalculation(answer);
	EXPECT_DOUBLE_EQ(arccosine->evaluate(), 0);


}

TEST(TrigTestSet, OperationThenArcTangent){
	double rad1 = 1;
	double rad2 = 1;
	Calc* answer = new Calc;
	answer->add(rad1, rad1);

	ArcTangentCalculation* arctangent = new ArcTangentCalculation(answer);
	EXPECT_DOUBLE_EQ(arctangent->evaluate(), 1.1071487177940904);

}

TEST(PrintTestSet, sinetest){
	double rad1 = 0;
	Calc* answer = new Calc;
	answer->add(rad1);
	SineCalculation* sine = new SineCalculation(answer);
	sine->trigPrint();	

}

TEST(PrintTestSet, arccostest){
	double rad1 = 0;
	Calc* answer = new Calc;
	answer->add(rad1);
	ArcCosineCalculation* arccosine = new ArcCosineCalculation(answer);
	arccosine->trigPrint();


}




#endif //DECORATOR_TEST_HPP
