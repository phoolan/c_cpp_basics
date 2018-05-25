//----------------------------------------------------------------------------------------------
//	Exercise for basic C, C++
//	Copyright(C) 2018 Tatjana Baier
//
//	This program is free software : you can redistribute it and/or modify
//	it under the terms of the GNU General Public License as published by
//	the Free Software Foundation, either version 3 of the License, or
//	(at your option) any later version.
//
//	This program is distributed in the hope that it will be useful,
//	but WITHOUT ANY WARRANTY; without even the implied warranty of
//	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
//	GNU General Public License for more details.
//
//	You should have received a copy of the GNU General Public License
//	along with this program.If not, see <http://www.gnu.org/licenses/>.
//-----------------------------------------------------------------------------------------------


// ConsoleApplication1.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// Programm 1:
// Programm mit 2 Funktionen
// Funktion 1: erhällt 2 Übergebene INT werte und Addiert sie
// Funktion 2: erhält 2 übergebene INT werte und dividiert sie
// in beiden Fällen soll eine Ausgabe erfolgen des jeweiligen Wertes.

void addition(int, int);
void division(int, int);

int main()
{
	int wert1 = 3;
	int wert2 = 1;
	addition(wert1, wert2);
	division(wert1, wert2);

	system("Pause");
	return EXIT_SUCCESS;
}

void addition(int W1, int Wert2) {
	printf("Addition: %d + %d = %d\n", W1, Wert2, W1 + Wert2);
	//cout << "Addition: " << W1 << " + " << Wert2 << " = " << W1 + Wert2 << "\n";
}

void division(int w1, int Wert2) {
	int ergebnis;
	ergebnis = w1 / Wert2;
	printf("Division: %d / %d = %d\n", w1, Wert2, ergebnis);
	//cout << "Division: " << w1 << " / " << Wert2 << " = " << ergebnis << "\n";
}



