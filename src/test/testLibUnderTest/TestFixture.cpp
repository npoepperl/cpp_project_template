#include "TestFixture.h"
#include "ClassUnderTest.h"

TestFixture::TestFixture(){

}

TestFixture::~TestFixture(){

}

TEST_F(TestFixture, CallFunctionFromLib){
    ClassUnderTest objectUnderTest;
    objectUnderTest.TestFunction();

    ASSERT_TRUE(true);
}