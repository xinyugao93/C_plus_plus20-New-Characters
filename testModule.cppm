module;  // 全局模块片段声明
#include <iostream>

export module testModule;  // 模块声明

void hiddenFunction()
{
    std::cout << "hiddenFunction" << std::endl;
}

// 导出的函数和类声明
export void PrintMessage();

export class TestClass {
public:
    void test();
};
