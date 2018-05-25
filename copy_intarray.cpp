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


#include "stdio.h"
#include <iostream>
using namespace std;

// Hauptfunktion
int main() {

	int intarray[10] = {}; // position 0 bis 9;
	int hubert[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };


	//int i = sizeof(int);
	//int j = sizeof(hubert);
	int len = sizeof(hubert)/sizeof(int);
	
	// liefert den Speicherbereich für das Array Hubert zurück.
	//cout << hubert;

	for (int count = 0, count2 = len-1; count < len; count++, count2--) {
		intarray[count2] = hubert[count];

		printf("hubert: %d, pos: %d\n", hubert[count], count);
		printf("intarray: %d, pos: %d\n", intarray[count2], count2);
		printf("\n");
	}


	system("pause");
	return 0;
}


