// Tyuiu.GandaloevMG.Sprint0.Task3.V0.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.GandaloevMG.Sprint0/Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"


class Service1 :public ISprint0Task3
{
	virtual int SummV3(int a, int b, int c) override
	{
		return a + b + c;
	};
};
