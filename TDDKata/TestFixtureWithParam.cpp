#include "pch.h"
#include "TestFixtureWithParam.h"
#include <vector>

//INSTANTIATE_TEST_CASE_P(ParametrizedTest, TestFixtureWithParam,
//	::testing::Values(Param("2,3", 5), Param("4", 4)));

std::vector<Param> CreateParametersSet()
{
	std::vector<Param> p;
	p.push_back(Param("2,3", 5));
	p.push_back(Param("4", 4));
	p.push_back(Param("1,2.4", -1));
	p.push_back(Param("1,2,3,1,2,3", 12));
	p.push_back(Param("1,2,3,1,2.3", -1));
	
	return p;
}

INSTANTIATE_TEST_CASE_P(ParametrizedTest, TestFixtureWithParam,
	::testing::ValuesIn(CreateParametersSet()));