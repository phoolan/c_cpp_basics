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


/* 
 * Turmrechnung
 * Multiplikation: mal 2 bis mal 9
 * Division: dividiert durch 2 bis durch 9
 * Alle Zwischenschritte sollen ausgegeben werden
 * in der Ausgabe sollen auch die Werte mal und durch dargestellt werden, Bsp: 1234 * 2
 */

// Includierte Bibliotheken (welche Befehle benutzt werden können hängt von den Bibliotheken ab)
#include <stdio.h>
#include <stdlib.h>

//Haupt-Funktion - hier startet das Programm
int main() {

    int zahl = 10;
    int ergebnis = zahl * 2;
     
    printf("%9d * 2\n", zahl);
    printf("%9d * 3\n", ergebnis);
	
	ergebnis = ergebnis * 3;
	printf("%9d * 4\n", ergebnis);
	
	ergebnis = ergebnis * 4;
	printf("%9d * 5\n", ergebnis);
	
	ergebnis = ergebnis * 5;
	printf("%9d * 6\n", ergebnis);
	
	ergebnis = ergebnis * 6;
	printf("%9d * 7\n", ergebnis);
	
	ergebnis = ergebnis * 7;
	printf("%9d * 8\n", ergebnis);
	
	ergebnis = ergebnis * 8;
	printf("%9d * 9\n", ergebnis);
	
	ergebnis = ergebnis * 9;
	printf("%9d : 2\n", ergebnis);
	
    // division
	
	ergebnis = ergebnis / 2;
	printf("%9d : 3\n", ergebnis);
	
	ergebnis = ergebnis / 3;
	printf("%9d : 4\n", ergebnis);
	
	ergebnis = ergebnis / 4;
	printf("%9d : 5\n", ergebnis);
	
	ergebnis = ergebnis / 5;
	printf("%9d : 6\n", ergebnis);
	
	ergebnis = ergebnis / 6;
	printf("%9d : 7\n", ergebnis);
	
	ergebnis = ergebnis / 7;
	printf("%9d : 8\n", ergebnis);
	
	ergebnis = ergebnis / 8;
	printf("%9d : 9\n", ergebnis);
	
	ergebnis = ergebnis / 9;
	printf("%9d\n", ergebnis);
	
	
    
    // Programmende
    return 0;
}