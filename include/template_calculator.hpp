#pragma once

#include <sstream>
#include "logger.hpp"

template <typename T>
class TemplateCalculator
{
public:
    explicit TemplateCalculator(Logger *logger) : logger(logger)
    {
    }

    // Implement this:
    T sum(T a, T b)
    {

        //log the result
        std::stringstream ss;

        ss << "taking the sum of: " << a << " and " << b << " which is " << a+b << std::endl;
        std::string msg = ss.str();

        this->logger->log(msg);

        return a + b;
    }

    // Implement this:
    T multiply(T a, T b)
    {
        //log the result using a stringstream
        std::stringstream ss;
        
        ss << "taking the product of: " << a << " and " << b << " which is " << a*b << std::endl;
        std::string msg = ss.str();

        this->logger->log(msg);
        return a *b;
    }

private:
    Logger *logger;
};