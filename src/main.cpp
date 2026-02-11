// File for sandboxing and trying out code
#include "../include/int_calculator.hpp"
#include "../include/file_logger.hpp"

int main(int argc, char **argv)
{
    FileLogger * logger = new FileLogger("log.txt");
    IntCalculator calc = IntCalculator(logger);
    calc.multiply(10, 20);
    calc.sum(10, 20);
    return 0;
}