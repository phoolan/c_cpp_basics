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

// Programm 2:
// Programm mit mind. 1 Funktion
// Schleife welche von 0 bis 9 zählt und mit 9 bis 0 addiert (0+9, 1+8, usw)
// Ergebnisse sollen ausgegeben werden
// Nach erfolgter Berechnung soll "alles done" ausgegeben werden.

#define FINISH 0;

int zaehlfunktion();

int main()
{
	int result;
	result = zaehlfunktion();

	if (result == 0 ) {
		printf("Alles done\n");
	}

	system("Pause");
	return EXIT_SUCCESS;
}

int zaehlfunktion() {
	int count1;
	int count2;
	
	for (count1 = 0, count2 = 9; count1 <= 9; count1++, count2--) {
		printf("%d + %d = %d\n", count1, count2, count1 + count2);
	}

	return FINISH;
}


