#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GandaloevMG.Sprint0.Task4.V2.Lib/Tyuiu.GandaloevMG.Sprint0.Task4.V2.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task4* date = new Service1();
			int a = 3;
			int b = 4;
			int c = 1;
			int d = 2;
			int answer;
			answer = date->Calculate(a, b, c, d);

			Assert::AreEqual(17, answer);
		}
	};
}
