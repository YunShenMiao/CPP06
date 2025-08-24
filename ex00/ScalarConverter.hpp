#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>


class ScalarConverter
{
    private:
    ScalarConverter();
    ScalarConverter(const ScalarConverter &other);
    ScalarConverter& operator=(const ScalarConverter &other);
    ~ScalarConverter();

    enum type {CHAR, INT, FLOAT, DOUBLE, ELSE};
    type getType(std::string s);
 
    public:

    static void convert(std::string input);
};

#endif
