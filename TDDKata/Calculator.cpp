#include "pch.h"
#include "Calculator.h"


int Calculator::Add(std::string expression)
{
    return 0;
}

int Calculator::Add(char* expression)
{
    std::string temp = "";
    std::string str(expression);

    int sum = 0;
    int cnt = 0;

    for (char ch : str) {
        if (isdigit(ch))
            temp += ch;
        else {
            if (ch != ',')
                return -1;
            sum += atoi(temp.c_str());
            temp = "";
        }
//        cnt++;
        
//       if (cnt > 5)
//           return -2;
    }

    return sum + atoi(temp.c_str());
}
