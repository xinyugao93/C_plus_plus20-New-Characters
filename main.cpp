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
#ifdef TEST_CONCEPTS
    runConceptTests();
#endif

    return 0;
}