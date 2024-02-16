#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int, int);
extern "C" int getArea(int, int);
extern "C" int setLength(int, int);
extern "C" int setWidth(int, int);

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
			
			int Result = 0;
			Result = getPerimeter(2, 3);
			Assert::AreEqual(10, Result);
		}

		// testing area function
		// length = 4 and width = 5
		TEST_METHOD(AreaFunctionality)
		{
			int Result = 0;
			Result = getArea(4, 5);
			Assert::AreEqual(20, Result);
		}

		// testing setLength function
		// positive value: length = 7
		TEST_METHOD(SetLengthFunctionality)
		{
			int Expected = 7;
			int Result = 0;
			setLength(Expected, Result);
			Assert::AreEqual(Expected, Result);
		}

		// value 0: length = 0
		TEST_METHOD(SetLengthLowerBoundFunctionality)
		{
			int Expected = 1;
			int Result = 0;
			Result = setLength(0, Result);
			Assert::AreEqual(Expected, Result);
		}

		// value 100: length = 100
		TEST_METHOD(SetLengthUpperBoundFunctionality)
		{
			int Expected = 1;
			int Result = 0;
			Result = setLength(100, Result);
			Assert::AreEqual(Expected, Result);
		}

		// testing setWidth function
		// positive value: width = 7
		TEST_METHOD(SetWidthFunctionality)
		{
			int Expected = 7;
			int Result = 0;
			setWidth(Expected, Result);
			Assert::AreEqual(Expected, Result);
		}

		// value 0: width = 0
		TEST_METHOD(SetWidthLowerBoundFunctionality)
		{
			int Expected = 1;
			int Result = 0;
			Result = setWidth(0, Result);
			Assert::AreEqual(Expected, Result);
		}

		// value 100: width = 100
		TEST_METHOD(SetWidthUpperBoundFunctionality)
		{
			int Expected = 1;
			int Result = 0;
			Result = setWidth(100, Result);
			Assert::AreEqual(Expected, Result);
		}
	};
}
