#include "pch.h"
#include "Calculator.h"
	TEST(TDDKata, TestName) {
		ASSERT_EQ(1, 1);
		ASSERT_TRUE(true);
	}

	TEST(CalcTest, AddTestEmpty) {
		char* expression = "";
		int expected = 0;

		Calculator myCalc;
		int actual = myCalc.Add(expression);

		ASSERT_EQ(expected, actual);
	}

	TEST(CalcTest, AddTestOne) {
		char* expression = "1";
		int expected = 1;

		Calculator myCalc;
		int actual = myCalc.Add(expression);

		ASSERT_EQ(expected, actual);
	}

	TEST(CalcTest, AddTestTwo) {
		char* expression = "1,2";
		int expected = 3;

		Calculator myCalc;
		int actual = myCalc.Add(expression);

		ASSERT_EQ(expected, actual);
	}

	TEST(CalcTest, AddTestComa) {
		char* expression = "1,2.4";
		int expected = -1;

		Calculator myCalc;
		int actual = myCalc.Add(expression);

		ASSERT_EQ(expected, actual);
	}

	TEST(CalcTest, AddTestMax) {
		char* expression = "1,2,3,4";
		int expected = -2;

		Calculator myCalc;
		int actual = myCalc.Add(expression);

		ASSERT_EQ(expected, actual);
	}
