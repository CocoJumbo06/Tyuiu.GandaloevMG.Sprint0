#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GandaloevMG.Sprint0.Task6.V2.Lib/Tyuiu.GandaloevMG.Sprint0.Task6.V2.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task6* date = new Service();
			float a = 3;
			int b = 14;
			int r;

			r = date->Calculate(a, b);

			Assert::AreEqual(11, r);

		}
	};
}
