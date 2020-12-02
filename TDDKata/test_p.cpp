#include "pch.h"
#include "Calculator.h"
#include "TestFixtureWithParam.h"

TEST_P(TestFixtureWithParam, AddTest)
{
	//Arrange
	std::string op = GetParam().op;
	int expected = GetParam().expected;
	//Act
	int actual = calc->Add(op);
	//Assert
	ASSERT_EQ(expected, actual);
}