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
	char color;
	printf("Waehle eine Farbe: (rot: R, gruen: G, blau: B, gelb: Y)\n");
	scanf_s("%c", &color);

	switch (color) {
	case 'R':
		printf("Rot gewaehlt\n");
		break;
	case 'r':
		printf("Rot gewaehlt\n");
		break;
	case 'G':
		printf("Gruen gewaehlt\n");
		break;
	case 'Y':
		printf("Gelb gewaehlt\n");
		break;
	case 'B':
		printf("Blau gewaehlt\n");
		break;
	}

	system("Pause");
	return EXIT_SUCCESS;
}



