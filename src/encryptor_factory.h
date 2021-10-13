#ifndef ENCRYPTOR_FACTORY_H
#define ENCRYPTOR_FACTORY_H

#include <memory>

#include "encryptor.h"

enum class EncryptionType
{
    XOR
};

class EncryptorFactory
{
public:
    static EncryptorFactory& getInstance(){
        static EncryptorFactory instance;
        return instance;
    }

    /**
     * Returns an encryptor for supported EncryptionTypes
     * Rerturns nullptr for unsupported encryption type!
     */ 
    std::shared_ptr<Encryptor> createEncryptor(EncryptionType type, std::string key);
   
private:
    EncryptorFactory(){}
    
};

#endif