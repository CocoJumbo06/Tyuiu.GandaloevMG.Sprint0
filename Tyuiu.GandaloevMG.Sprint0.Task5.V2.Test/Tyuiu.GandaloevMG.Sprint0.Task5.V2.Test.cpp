#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GandaloevMG.Sprint0.Task5.V2.Lib/Tyuiu.GandaloevMG.Sprint0.Task5.V2.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task5* date = new Service();
			float a = 2.75;
			float b = 0.5;
			float c = 7;
			int d;

			d = date->Zadacha(a, b, c);
			Assert::AreEqual(22, d);
		}
	};
}

