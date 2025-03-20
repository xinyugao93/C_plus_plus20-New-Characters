#ifdef TEST_MODULE
    import testModule;

#endif

#ifdef TEST_CONCEPTS
    #include "testConcepts.h"
#endif

int main()
{
#ifdef TEST_MODULE
    PrintMessage();
    TestClass test;
    test.test();
#endif

    return 0;
}