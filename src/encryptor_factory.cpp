#include "encryptor_factory.h"
#include "xor_encryptor.h"

using namespace std;

shared_ptr<Encryptor> EncryptorFactory::createEncryptor(EncryptionType type, string key)
{
    std::shared_ptr<Encryptor> encryptor;

    switch(type)
    {
        case EncryptionType::XOR:
            encryptor = make_shared<XorEncryptor>(key);
            break;
        default:
            encryptor = nullptr; // client code must be careful
            break;
    }

    return encryptor;
}
