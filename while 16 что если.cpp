// while 16 что если.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	/*Спортсмен-лыжник начал тренировки, пробежав в первый день 10 км.
Каждый следующий день он увеличивал длину пробега на P процентов от
пробега предыдущего дня (P — вещественное, 0 < P < 50). По данному P

определить, после какого дня суммарный пробег лыжника за все дни пре-
высит 200 км, и вывести найденное количество дней K (целое) и суммар-
ный пробег S (вещественное число).*/
	int P;// процент от пробега предыдущего дня
	int S1 = 10;//пробег первого дня
	int S = 200;//суммарный пробег
	int k = 1;// количество дней

	cout << "P=";
	cin >> P;
	if ((P > 0) && (P < 50)) {
		int res = S1;
		for (int S1 = 10; res < S; S1 = S1 + ((S1 * P) / 100), k++) {
			if (k == 1)
				res = S1;
			else
				res = res + S1;
			cout << "День " << k << " суммарный пробег-" << res << endl;

		}
	}
	else
		cout << "Error";
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
