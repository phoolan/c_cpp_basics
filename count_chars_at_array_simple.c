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

// Übung Char Array
// Eingabe eines Satzes,
// Zählen der Zeichen und Ausgabe der Unterschiedlichen Zeichen und deren Anzahl in diesem Array.

#include "stdio.h"
#include "stdlib.h"

#define MAX 20


//-----------------------------------------------------------------------------------------------
///
///Main Programm
//

void main() {

	char str[MAX] = { "Hello World" };
	printf("Array Inhalt: %s\n", str);

	// Zählvariablen:
	int i = 0;
	int j = 0;
	int k = 0;



	//For Schleife zum Allgemeinen Durchlauf durch das gesamte Char Array
	for (i = 0; i < MAX; i++) {

			// überprüfe von 0 weg bis zum ende des Arrays wie oft dieses Zeichen vorkommen.
			for (j = 0; j < MAX; j++) {
				if (str[i] == str[j]) {
					k++;
				}
			}
			printf("Zeichen: %c ist sooft vorhanden: %d\n", str[i], k);
			// Rücksetzten des Counters für die Anzahl der Zeichen.
			k = 0;

			
		}

	system("Pause");
}




