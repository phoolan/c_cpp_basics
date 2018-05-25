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


// Übung von Schleifen - INT (Ganz-Zahlen)

// Zug A fährt dem Zug B entgegen.
// Zug B fährt doppelt so schnell wie Zug A
// Beide fahren am selben Gleis.
// Das Gleis ist 50km lang.
// Wo treffen Sie sich?

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{

	// deklaration zweier Variablen A und B
	int A, B;

	// Schleife zum Zählen bis A >= B ist, das ist der Zeitpunkt des Crashes, bzw. wann die Schleife endet.
	for (A = 0, B = 50; A < B; A++, B-=2)
	{
	}

	// Ausgabe des Wertes:
	cout << "Crash erfolgt an A: " << A << "km und B: " << B << "km. \n";

	//Pause um die Anzeige zu sehen.
	system("Pause");

	return 0;
}