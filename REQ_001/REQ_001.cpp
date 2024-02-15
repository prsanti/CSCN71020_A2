#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int, int);
extern "C" int getArea(int, int);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ001
{
	TEST_CLASS(REQ001)
	{
	public:
		
		TEST_METHOD(PerimeterFunctionality)
		{
			// testing perimeter function using length = 2 and width = 3
			int Result = 0;
			Result = getPerimeter(2, 3);
			Assert::AreEqual(10, Result);
		}

		TEST_METHOD(AreaFunctionality)
		{
			// testing area function using length = 4 and width = 5
			int Result = 0;
			Result = getArea(4, 5);
			Assert::AreEqual(20, Result);
		}
	};
}
