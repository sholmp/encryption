project(encryption)
cmake_minimum_required(VERSION 3.0)

set(CMAKE_EXPORT_COMPILE_COMMANDS y)
set(CMAKE_CXX_STANDARD 20)


add_library(encryptor src/encryptor_factory.cpp
                        src/xor_encryptor.cpp)

add_executable(encryption_test src/runner.cpp) 

target_link_libraries(encryption_test encryptor)
