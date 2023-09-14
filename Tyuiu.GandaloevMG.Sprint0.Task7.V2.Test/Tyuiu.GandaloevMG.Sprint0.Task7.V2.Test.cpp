#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GandaloevMG.Sprint0.Task7.V2.Lib/Tyuiu.GandaloevMG.Sprint0.Task7.V2.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task7* date = new Service();
			int a = 394;
			int b = 9;
			bool k = date->Rezalt(a, b);

			Assert::AreEqual(true, k);
		

		}
	};
}
