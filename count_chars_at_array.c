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
// Jedes Zeichen soll nur einmal ausgegeben werden.

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

	//damit ein gezähltes zeichen nicht x-fach ausgegeben wird, werden die bereits gezählten Zeichen hier gespeichert
	char strbekannt[MAX];
	memset(strbekannt, '\0', MAX);

	// Zählvariablen:
	int h = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int bekannt = 0;


	//For Schleife zum Allgemeinen Durchlauf durch das gesamte Char Array
	for (i = 0; i < MAX; i++) {

		// Wird benötigt zur überprüfung ob das Zeichen bereits bekannt ist
		// Zum Durchlauf des Arrays in welchem Bekannte Werte gespeichert werden.
		for (h = 0; (h < MAX); h++) {

			// Wenn an dieser stelle im Array nichts enthalten ist höhre auf mit der Schleife
			// es folgen keine weiteren Zeichen nach einem \0 - \0 markiert das Ende.
			if (strbekannt[h] == '\0') {
				break;
			}

			// Wenn das Zeichen bereits bekannt ist, dann erhöhe den counter.
			if (str[i] == strbekannt[h]) {
				bekannt++;
			}

		}

		// Wenn das Zeichen unbekannt ist, und im Haupt Array ein Zeichen enthalten ist, dann ...
		if ((bekannt == 0) && (str[i] != '\0')) {

			// dann überprüfe von 0 weg bis zum ende des Arrays wie oft dieses Zeichen vorkommen.
			for (j = 0; j < MAX; j++) {
				if (str[i] == str[j]) {
					k++;
				}
			}
			printf("Zeichen: %c ist sooft vorhanden: %d\n", str[i], k);
			// Rücksetzten des Counters für die Anzahl der Zeichen.
			k = 0;
			// Merken des neuen Zeichens im dafür vorgesehenen Array.
			strbekannt[h] = str[i];
		}
		// Rücksetzten des Counters der Information ob das zeichen bekannt ist.
		bekannt = 0;
	}

	system("Pause");
}




