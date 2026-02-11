#include "../include/file_logger.hpp"
#include <fstream>
#include <iostream>

// Implement this:
FileLogger::FileLogger(std::string filename){
    this->logfile.open(filename);
}

// Implement this:
void FileLogger::log(std::string msg)
{
    this->logfile << msg;
}

// Implement this:
FileLogger::~FileLogger()
{
    this->logfile.close();
}