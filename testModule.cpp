module;  // 全局模块片段声明

#include <iostream>

module testModule;  // 模块实现单元声明

void PrintMessage()
{
    hiddenFunction();
}

void TestClass::test()
{
    std::cout << "test" << std::endl;
}