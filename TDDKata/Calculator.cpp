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
    bool prev_is_digit = false;
    std::string delimeter;
    size_t found = 0;
    size_t end = 0;
    std::string default_delimeter = "//";
    int i = 0;

    found = str.find(default_delimeter);
    if ((found != std::string::npos) && (found == 0))
    {
        end = str.find("\n");
        delimeter = str.substr(found + default_delimeter.length(), end - 1);
        str.erase(found, end);
    }

    for (char ch : str) {
        if (isdigit(ch))
        {
            temp += ch;
            prev_is_digit = true;
        }
        else
        {
                if ((ch != ',') && (ch != '\n'))
                    return -1;
                if (prev_is_digit == false)
                    return -2;

                sum += atoi(temp.c_str());
                temp = "";
                prev_is_digit = false;
        }
    }
 //   if ((last_is_digit == false) && (!str.empty()))
 //       return -2;

    return sum + atoi(temp.c_str());
}
