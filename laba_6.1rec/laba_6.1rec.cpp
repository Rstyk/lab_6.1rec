#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 6.1 rekyrs/lab 6.1 rekyrs.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace laba61rec
{
	TEST_CLASS(laba61rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { 1, 2, 3, 4, 5 };
			int result = Number(a, 5, 0, 0);
			Assert::AreEqual(3, result);

		}
	};
}
