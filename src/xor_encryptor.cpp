
#include "xor_encryptor.h"

using namespace std;


ofstream XorEncryptor::encrypt(std::ifstream& inputFile, const string& outputFileName) {
  ofstream outputFile(outputFileName);
  if(outputFile)
  {
    char inputCharacter;
    int i = 0;
    while(inputFile.get(inputCharacter)){
      outputFile.put(inputCharacter ^ key_[(i++) % key_.size()] );
    }
  }
  else
  {
    throw std::runtime_error(string("could not open") + outputFileName);
  }
  
  return outputFile;    
}