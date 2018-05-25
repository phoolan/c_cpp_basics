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

#define WARNING 2
#define ERROR 1
#define OK 0

int function(int);

int main()
{
	int A = 5;
	int rueckgabe;
	rueckgabe = function(A);
	
	if (rueckgabe == ERROR) {
		printf("Rechnung wurde falsch ausgeführt\n");
	}
	else {
		printf("alles ok\n");
	}
	
	system("Pause");
	return OK;
}

int function(int C) {
	int D = 2;
	int result;
	int result2;

	result = D + C; // 7 Ergebnis
	result2 = D + 1 + C; // 8 Ergebnis
	
	if ((result == 7) && (result2 == 8)) {
		printf("Beide Rechnungen sind ok\n");
		return OK;
	}
	else if ((result == 7) || (result2 == 8)) {
		printf("Eine von beiden ist ok\n");
		return WARNING;
	}
	else
	{
		printf("is falsch\n");
		return ERROR;
	}
}


