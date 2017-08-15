#include <iostream>
#include "include/ClassUnderTest.h"

ClassUnderTest::ClassUnderTest(){

}

ClassUnderTest::~ClassUnderTest(){

}

void ClassUnderTest::TestFunction(){
    std::cout << "Hello, World" << std::endl;
}