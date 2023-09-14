// Tyuiu.GandaloevMG.Sprint0.Task6.V2.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.GandaloevMG.Sprint0/Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"
class Service :public ISprint0Task6
{
	virtual int Calculate(float a, int b) override
	{
		return  a * b /(5+a) + 6;
	};
};
