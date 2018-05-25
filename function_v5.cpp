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


// 
//
// Mehrdimensionale Arrays:
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int j = 0;
	int i = 0;
	int k = 0;

	

	char name2[2][12] = { { 'H', 'a', 'l', 'l', 'o', '\n' },
						  { 'W', 'o', 'r', 'l', 'd', '\n' } };
	char zeichen;

	for (i = 0, j=0; j < 12; j++) {

		if (k == 1) {
			j = 0;
			k = 0;
		}
		
		zeichen = name2[i][j];
		if ((zeichen == '\n') && (i<1)) {
			i++;
			k = 1;
			printf(" ");
		}
		else {
			printf("%c", name2[i][j]);
		}

	}
		printf("\n");
		

	system("Pause");
	return EXIT_SUCCESS;
}



