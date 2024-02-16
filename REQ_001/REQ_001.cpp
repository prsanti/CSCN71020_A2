#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);
extern "C" void setLength(int, int*);
extern "C" void setWidth(int, int*);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ001
{
	TEST_CLASS(REQ001)
	{
	public:
		
		// testing perimeter function
		// length = 2 and width = 3
		TEST_METHOD(PerimeterFunctionality)
		{
			int length = 2;
			int width = 3;
			int Result = 0;
			Result = getPerimeter(&length, &width);
			Assert::AreEqual(10, Result);
		}

		// testing area function
		// length = 4 and width = 5
		TEST_METHOD(AreaFunctionality)
		{
			int length = 4;
			int width = 5;
			int Result = 0;
			Result = getArea(&length, &width);
			Assert::AreEqual(20, Result);
		}

		// testing setLength function
		// positive value: length = 7
		TEST_METHOD(SetLengthFunctionality)
		{
			int input = 7;
			int Expected = 7;
			int Result = 1;							// prgoram's default value is 1
			setLength(Expected, &Result);
			Assert::AreEqual(Expected, Result);
		}

		// value 0: length = 0
		TEST_METHOD(SetLengthLowerBoundFunctionality)
		{
			int input = 0;
			int Expected = 1;
			int Result = 1;
			setLength(input, &Result);
			Assert::AreEqual(Expected, Result);
		}

		// value 100: length = 100
		TEST_METHOD(SetLengthUpperBoundFunctionality)
		{
			int input = 100;
			int Expected = 1;
			int Result = 1;
			setLength(input, &Result);
			Assert::AreEqual(Expected, Result);
		}

		// testing setWidth function
		// positive value: width = 7
		TEST_METHOD(SetWidthFunctionality)
		{
			int input = 7;
			int Expected = 7;
			int Result = 1;
			setWidth(input, &Result);
			Assert::AreEqual(Expected, Result);
		}

		// value 0: width = 0
		TEST_METHOD(SetWidthLowerBoundFunctionality)
		{
			int input = 0;
			int Expected = 1;
			int Result = 1;
			setWidth(input, &Result);
			Assert::AreEqual(Expected, Result);
		}

		// value 100: width = 100
		TEST_METHOD(SetWidthUpperBoundFunctionality)
		{
			int input = 100;
			int Expected = 1;
			int Result = 1;
			setWidth(input, &Result);
			Assert::AreEqual(Expected, Result);
		}
	};
}
