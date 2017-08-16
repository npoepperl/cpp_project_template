# Project template for C/C++ projects

This is a simple template for C/C++ projectes based on CMake. It can be used to setup a project with 
[googletest and googlemock](https://github.com/google/googletest). It includes a folder for a sample
library (libUnderTest) and a test folder. The testfolder then contains a separate folder for the
testcode related to the Library under Test. If more libraries are added to the project they become
siblings of *libUnderTest* and their testcode becomes sibling of *testLibUnderTest*.


```
.
└── src
    ├── CMakeLists.txt
    ├── libUnderTest
    │   ├── ClassUnderTest.cpp
    │   ├── CMakeLists.txt
    │   └── include
    │       └── ClassUnderTest.h
    └── test
        ├── CMakeLists.txt
        └── testLibUnderTest
            ├── CMakeLists.txt
            ├── RunAllTests.cpp
            ├── TestFixture.cpp
            └── TestFixture.h
```
