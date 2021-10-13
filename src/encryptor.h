#ifndef ENCRYPTOR_H
#define ENCRYPTOR_H

#include <iostream>
#include <fstream>

class Encryptor
{
public:

  virtual std::ofstream encrypt(std::ifstream& inputFile, const std::string& outputFilename) = 0;
};

#endif