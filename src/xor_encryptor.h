#ifndef XOR_ENCRYPTOR_H
#define XOR_ENCRYPTOR_H

#include <string>
#include <fstream>

#include "encryptor.h"


class XorEncryptor : public Encryptor
{
public:
  XorEncryptor(std::string key): key_(key) {}
  std::ofstream encrypt(std::ifstream& inputFile, const std::string& outputFileName);

private:
  std::string key_;
};




#endif