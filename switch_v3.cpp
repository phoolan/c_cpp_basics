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
#include "stdio.h"
using namespace std;

void addition(int, int);
void subtraktion(int, int);
void multiplikation(int, int);
void division(int, int);

int main()
{
	
	// Programm mit einer Eingabe von 2 Zahlen + Auswahloption
	// Für: Berechungsoperation 4 Grundrechnungsarten (+, -, :, *)
	// option via switch/case  aufruf der Funktionen zur Berechnung
	// bsp: eingabe von: 10 11 3 --> 10 + 11 = ... weil 3 = addition
	// bsp: eingabe von: 1 5 7 --> 5 * 7 = ... weil 1 = multiplikation
	// bsp: eingabe von: 2 3 5 --> 2 + 5 = .... weil 3 = addition
	// ausgabe des ergebnisses

	int wert1;
	char btyp;
	int wert2;
	printf("Geben Sie eine Rechnung ein\n");
	printf("Bsp: 10 + 3\n");
		//scanf_s("%d", &wert1);
		//scanf_s("%c", &btyp);
		//scanf_s("%d", &wert2);
			////scanf_s("%c", &btyp);
			////scanf_s("%d %d", &wert1, &wert2);
	cin >> wert1 >> btyp >> wert2;

	switch (btyp) {
		case '+':
			addition(wert1, wert2);
			break;
		case '-':
			subtraktion(wert1, wert2);
			break;
		case '*':
			multiplikation(wert1, wert2);
			break;
		case '/':
			division(wert1, wert2);
			break;
		default:
			printf("Ihre Eingabe war fehlerhaft!\n");
			break;
	}

	system("Pause");
	return EXIT_SUCCESS;
}


void addition(int a, int b){
	printf("Plus: %d + %d = %d\n", a, b, a + b);
}

void subtraktion(int a, int b) {
	printf("Minus: %d - %d = %d\n", a, b, a - b);
}

void multiplikation(int a, int b) {
	printf("Mal: %d * %d = %d\n", a, b, a * b);
}

void division(int a, int b) {
	printf("Dividiert: %d : %d = %d\n", a, b, a / b);
}
