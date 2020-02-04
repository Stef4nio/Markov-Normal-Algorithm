cmake_minimum_required(VERSION 3.15)
project(MarkovNormalAlgorythm)

set(CMAKE_CXX_STANDARD 14)

add_executable(MarkovNormalAlgorythm main.cpp StringList.cpp StringList.h Substitution.cpp Substitution.h SubstitutionManager.cpp SubstitutionManager.h)