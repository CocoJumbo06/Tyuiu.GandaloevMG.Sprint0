// Tyuiu.GandaloevMG.Sprint0.Task5.V2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.GandaloevMG.Sprint0.Task5.V2.Lib/Tyuiu.GandaloevMG.Sprint0.Task5.V2.Lib.cpp"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	ISprint0Task5* date = new Service();
	cout << "Gandalow " <<"Muhammad "<<"Ahmetovich\n";
	
	float a = 2.75;
	float b = 0.5;
	float c = 7;
	cout << "���� ��������:";
	cin >> a;
	cout << "���� �������:";
	cin >> b;
	cout << "���������� ����������:";
	cin >> c;
	 int d;
	d = (a + b) * c;
	cout << d;
	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
