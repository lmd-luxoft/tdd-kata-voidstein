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
    bool prev_is_digit = false;

    for (char ch : str) {
        if (isdigit(ch))
        {
            temp += ch;
            prev_is_digit = true;
        }
        else {
            if ((ch != ',') && (ch != '\n'))
                return -1;
            if (prev_is_digit == false)
                return -2;
            sum += atoi(temp.c_str());
            temp = "";
            prev_is_digit = false;
        }
//        cnt++;
        
//       if (cnt > 5)
//           return -2;
    }

    return sum + atoi(temp.c_str());
}
