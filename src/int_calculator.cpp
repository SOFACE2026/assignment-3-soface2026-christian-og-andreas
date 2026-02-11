#include <sstream> // Hint to how you should build the message.

#include "../include/int_calculator.hpp"

// Constructor Injection
IntCalculator::IntCalculator(Logger *logger) : logger(logger) {}

// Implement this:
int IntCalculator::sum(int a, int b)
{   
    int sum = a + b;

    //log the result
    std::stringstream ss;

    ss << "taking the sum of: " << a << " and " << b << " which is " << sum << std::endl;
    std::string msg = ss.str();

    this->logger->log(msg);

    return sum;
}

// Implement this:
int IntCalculator::multiply(int a, int b)
{
    int prod = a * b;

    //log the result using a stringstream
    std::stringstream ss;
    
    ss << "taking the product of: " << a << " and " << b << " which is " << prod << std::endl;
    std::string msg = ss.str();

    this->logger->log(msg);

    return 0;
}