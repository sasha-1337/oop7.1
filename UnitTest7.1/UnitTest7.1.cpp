#include "pch.h"
#include "CppUnitTest.h"
#include "../oop7.1/oop7_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest71
{
	TEST_CLASS(UnitTest71)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			array<int, 100> arr = { 0, 1, 2, 3, 4 };
			Assert::AreEqual(Max_Index(arr, 5), 4);
			Assert::AreEqual(Min_Index(arr, 5), 0);
		}
	};
}
