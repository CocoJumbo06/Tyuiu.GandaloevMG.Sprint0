// Tyuiu.GandaloevMG.Sprint0.Task5.V2.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.GandaloevMG.Sprint0/Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"
class Service :public ISprint0Task5
{
	virtual float Zadacha(float a, float b, float c) override
	{
		return (a + b) * c;
	};
};

