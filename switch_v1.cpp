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

int main()
{
	int color;
	printf("Waehle eine Farbe: (rot: 1, grün: 2, gelb: 3, blau:4)\n");
	scanf_s("%d", &color);
	
	switch (color) {
		case 1:
				printf("Rot gewählt\n");
				break;
		case 2:
				printf("Grün gewählt\n");
				break;
		case 3:
				printf("Gelb gewählt\n");
				break;
		case 4:
				printf("Blau gewählt\n");
				break;
	}
	
	system("Pause");
	return EXIT_SUCCESS;
}



