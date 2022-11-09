#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_05.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a;
			a = S4(2, 2, 0);
			Assert::AreEqual(a, 1, 13664);
		}
	};
}
