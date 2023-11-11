#include "pch.h"
#include "CppUnitTest.h"
#include "../53/53.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = f(1);
			Assert::AreEqual(t, 0.513785, 0.000001);
		}
	};
}
