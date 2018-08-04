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

// Übung - INT Array
// Kopieren der Werte aus Array eins in Array zwei in umgekehrter Reihenfolge
// Ausgabe der Array Werte anhand der Position.


#include "stdio.h"

//-----------------------------------------------------------------------------------------------
///
///Main Programm
//


void main() {

	
	int iarray[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int jarray[20] = { "" };
	int count = 0;
	int k = 0;


	// Kopieren der Werte:
	for (count = 0, k=19; count < 20; count++) {
		jarray[k] = iarray[count];
		k--;
	}

	// Ausgabe Arrays:

	for (count = 0; count < 20; count++) {

		printf("Position: %2d, Wert Array1: %2d, Wert Array2: %2d\n", count, iarray[count], jarray[count]);
	}

	system("Pause");
}

