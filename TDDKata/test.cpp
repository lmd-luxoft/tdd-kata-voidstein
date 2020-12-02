#include "pch.h"
#include "Calculator.h"
#include "TestFixture.h"
//#include "TestFixtureWithParam.h"

	TEST_F(TestFixture, AddTestEmpty) {
		char* expression = "";
		int expected = 0;

		Calculator myCalc;
		int actual = myCalc.Add(expression);

		ASSERT_EQ(expected, actual);
	}

	TEST_F(TestFixture, AddTestOne) {
		char* expression = "1";
		int expected = 1;

		Calculator myCalc;
		int actual = myCalc.Add(expression);

		ASSERT_EQ(expected, actual);
	}

	TEST_F(TestFixture, AddTestTwo) {
		char* expression = "1,2";
		int expected = 3;

		Calculator myCalc;
		int actual = myCalc.Add(expression);

		ASSERT_EQ(expected, actual);
	}

	TEST_F(TestFixture, AddTestComa) {
		char* expression = "1,2.4";
		int expected = -1;

		Calculator myCalc;
		int actual = myCalc.Add(expression);

		ASSERT_EQ(expected, actual);
	}

	TEST_F(TestFixture, AddTestParametersUnknow) {
		char* expression = "1,2,3,1,2,3";
		int expected = 12;

		Calculator myCalc;
		int actual = myCalc.Add(expression);

		ASSERT_EQ(expected, actual);
	}

	TEST_F(TestFixture, AddTestParametersUnknowComa) {
		char* expression = "1,2,3,1,2.3";
		int expected = -1;

		Calculator myCalc;
		int actual = myCalc.Add(expression);

		ASSERT_EQ(expected, actual);
	}

	TEST_F(TestFixture, AddTestNewLine) {
		char* expression = "1\n2,3";
		int expected = 6;

		Calculator myCalc;
		int actual = myCalc.Add(expression);

		ASSERT_EQ(expected, actual);
	}

	TEST_F(TestFixture, AddTestWrongFormat) {
		char* expression = "1,\n";
		int expected = -2;

		Calculator myCalc;
		int actual = myCalc.Add(expression);

		ASSERT_EQ(expected, actual);
	}

	TEST_F(TestFixture, AddTestDefaultDellimiter) {
		char* expression = "//;\n1;2;3\n";
		int expected = 6;

		Calculator myCalc;
		int actual = myCalc.Add(expression);

		ASSERT_EQ(expected, actual);
	}