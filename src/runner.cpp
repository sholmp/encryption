#include <iostream>
#include <fstream>

#include "encryptor_factory.h"

using namespace std;


namespace
{
  const string nameOfFileToEncrypt = "message_to_encrypt.txt";
}

int main()
{
  auto encryptor = EncryptorFactory::getInstance().createEncryptor(EncryptionType::XOR, "abc");
    
  ofstream dummyFile(nameOfFileToEncrypt);
  dummyFile << "Hello my friend, what is going on?"\
                    " Are you feeling well?";
  dummyFile.close();

  ifstream fileToEncrypt(nameOfFileToEncrypt);
          
  if(fileToEncrypt)
  {
    try
    {
      encryptor->encrypt(fileToEncrypt, "hello_world_encrypted.txt");
    }
    catch(const std::runtime_error& e)
    {
      cout << e.what() << endl;
      exit(EXIT_FAILURE);
    }

  }
  
  return 0;
}
