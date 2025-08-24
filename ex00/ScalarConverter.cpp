
#include "ScalarConverter.hpp"

template <typename T>

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &other) {(void) other;}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other) {(void)other; return *this;}

ScalarConverter::~ScalarConverter() {}

type ScalarConverter::getType(std::string s)
{

}

void    printOutput(T output)
{
    if (std::isprint(static_cast<char>(output)))
        std::cout << "char: " << static_cast<char>(output) << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(output) << std::endl;
    std::cout << "float: " << static_cast<float>(output) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(output) << std::endl;
}

void ScalarConverter::convert(std::string input)
{
    if (input.length() == 1 && !input.isdigit())
    {
        char output = std::stoc(input);
        printOutput(output);
    }
    else if (input.isdigit())
    {
        int output = std::stoi(input);
        printOutput(output);
    }
    else if (input.back() == 'f' && input.find('.') != std::string::npos)
    {
        float output = std::stof(input);
        printOutput(output);
    }
    else if (input.find('.') != std::string::npos)
    {
        double output = std::stod(input);
        printOutput(output);
    }
}
