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


#include <iostream>
#include "stdio.h"
using namespace std;

// Funktion1: 2 Ganzzahlen eingeben u ERgebnis speichern + ausgeben.
// Funktion2: 2 Ganzzahllisten erstellen u spaltenweise ergebnis in liste 3 speichern + ausgeben.


void einfachrechnen();
void listenrechnen();

int main() {

	einfachrechnen();
	listenrechnen();

	system("pause");
	return 0;
}

// Funktion1: 2 Ganzzahlen eingeben u ERgebnis speichern + ausgeben.
void einfachrechnen() {
	int i = 0, j = 0, ergebnis = 0;

	printf("-------------------\n");
	printf("Funktion 1: \n\n");

	cout << "Geben sie zwei Zahlen ein: (Bsp:10 11)\n";
	cin >> i >> j;

	ergebnis = i + j;

	cout << "Ergebnis ist: " << ergebnis << "\n";

	printf("-------------------\n");
}

// Funktion2: 2 Ganzzahllisten erstellen u spaltenweise ergebnis in liste 3 speichern + ausgeben.
void listenrechnen() {

	int i[10] = {1,2,3,4,5,6,7,8,9,10};
	int j[10] = {11,12,13,14,15,16,17,18,19,20};
	int ergebnis[10] = {};

	printf("-------------------\n");
	printf("Funktion 2: \n\n");

	for(int k=0; k<sizeof(i)/sizeof(int); k++){
		ergebnis[k] = i[k] + j[k];
		printf("%d + %d = %d\n", i[k], j[k], ergebnis[k]);
	}

	printf("-------------------\n");
}