#include "pch.h"
#include "CppUnitTest.h"
#include "../lab3.6/B.h"
#include "../lab3.6/B.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			B o;
			Assert::AreEqual(0, o.getB());
		}
	};
}
