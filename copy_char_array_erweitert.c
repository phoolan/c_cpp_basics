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
// Kopieren der Werte aus Array eins in Array zwei in umgekehrter Reihenfolge ohne Leerzeichen
// Ausgabe der Array Werte anhand der Position.


#include "stdio.h"

//-----------------------------------------------------------------------------------------------
///
///Main Programm
//


void main() {
	
	char str[20] = { "Hello World" };
	char str2[20] = { "\0" };
	int count = 0;
	int k = 0;
	
	// Kopieren der Werte, beginnend mit dem letzten.
	for (count = 0, k = 19; k >= 0; k--) {
		
		// Überprüfung - nur wenn die Position befüllt ist soll kopiert werden
		if (str[k] != '\0') {
			str2[count] = str[k];
			count++;
		}
		
	}

	// Ausgabe beider Strings
	printf("Strin Original: %s\n", str);
	printf("Strin Rueckwerts: %s\n", str2);
	
	system("Pause");
}

