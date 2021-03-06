// for 20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
#include <cmath>;

int main()
{
	/*Дано целое число N (> 0). Используя один цикл, найти сумму

	  1!+ 2!+ 3!+ ... + N!

		  (выражение N!— N–факториал — обозначает произведение всех целых

			  чисел от 1 до N : N!= 1·2·...·N).Чтобы избежать целочисленного пере -
		  полнения, проводить вычисления с помощью вещественных переменных и
		  вывести результат как вещественное число.*/
	setlocale(LC_ALL, "rus");
	int N, res = 0;
	cout << "N=";
	cin >> N;
	int i, n = 1;
	for (i = 1; i <= N; i++) {
	n *= i;
	res += n;
}
	cout << "сумма=" << res;
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
