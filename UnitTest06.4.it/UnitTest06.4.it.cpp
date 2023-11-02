#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6.4.it/PR6.4.it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest064it
{
	TEST_CLASS(UnitTest064it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 4;
			double a[n] = { 3.0, 1.0, 5.0, -2.0 };
			int positivecount=CountPositiveElements(a, n);
			Assert::AreEqual(positivecount,3);
		}
		TEST_METHOD(TestMethod2)
		{
			const int n= 5;
			double a[n] = { 3.0 ,6.0 ,0 ,4.0 ,2.0 };
			int sum = SumAfterLast0(a, n);
			Assert::AreEqual(sum,6);
		}
	};
}
