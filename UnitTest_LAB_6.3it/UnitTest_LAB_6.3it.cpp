#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_6.3/lab_6.3it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLAB63it
{
	TEST_CLASS(UnitTestLAB63it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int b[] = { 1, 2, 3, 4, 5 };
			int result = Sum(b, 5);
			Assert::AreEqual(9, result);

		}
	};
}
