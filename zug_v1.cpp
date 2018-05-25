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



// Übung von Schleifen - Double (Gleitkomma Zahlen)

// Zug A fährt dem Zug B entgegen.
// Zug B fährt doppelt so schnell wie Zug A
// Beide fahren am selben Gleis.
// Das Gleis ist 50km lang.
// Wo treffen Sie sich?

// Datentyp Double bez, genauerem Ergebnis mit Kommastellen.

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{

	double A, B;

	for (A = 0.0, B = 50.0; A < B; A=A+0.01, B=B-0.02)
	{
	}

	cout << "Crash erfolgt an A: " << A << "km und B: " << B << "km. \n";
	
	system("Pause");

    return 0;
}

