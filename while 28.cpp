// while 28.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
    /*Дано вещественное число ε (> 0). Последовательность вещественных
чисел AK определяется следующим образом:

A1 = 2, AK = 2 + 1/AK–1, K = 2, 3, ... .
Найти первый из номеров K, для которых выполняется условие

|AK – AK–1| < ε,
и вывести этот номер, а также числа AK–1 и AK.*/
	int E;
		cout << "E=";
		cin >> E;
		int ak1 = 0, ak = 2;
		int k = 1;
		if (E > 0) {
			while (abs(ak - ak1) >= E) {
				++k;
				ak1 = ak;
				ak = 2 + (1 / ak1);
			}
			cout << "k=" << k << " Ak-1=" << ak1 << " Ak=" << ak;


			}





		


		else
			"error";
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
