#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest6
{
	TEST_CLASS(UnitTest6)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            int t;
            t = NextValue(2, 3, 1, 10, 5, 4);
            Assert::AreEqual(t, 3);
        }

        TEST_METHOD(TestMethod2)
        {
            int t;
            t = NextValue(2, 3, 1, 10, 3, 5);
            Assert::AreEqual(t, 2);
        }

        TEST_METHOD(TestMethod3)
        {
            int t;
            t = NextValue(2, 3, 1, 10, 2, 3);
            Assert::AreEqual(t, 4);
        }
    };
}
