// Tyuiu.GandaloevMG.Sprint0.Task4.V2.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.GandaloevMG.Sprint0/Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"


class Service1 :public ISprint0Task4
{
	virtual int Calculate(int a, int b, int c, int d) override
	{
		return a*(b+c)+d;
	};
};
