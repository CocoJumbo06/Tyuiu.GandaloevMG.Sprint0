// Tyuiu.GandaloevMG.Sprint0.Task4.V2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.GandaloevMG.Sprint0.Task4.V2.Lib/Tyuiu.GandaloevMG.Sprint0.Task4.V2.Lib.cpp"
using namespace std;
int main()
{
    ISprint0Task4* date = new Service1();
    cout << "GandaloevMA\n";
    cout << "Primer-: " << "3*(4+1)+2\n";
    int a = 3;
    int b = 4;
    int c = 1;
    int d = 2;
    int answer;
    answer = date->Calculate(a, b, c, d);

    cout <<"Rezultat =:  " << answer;
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
