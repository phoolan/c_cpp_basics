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

void rechnen(int*, int*, int*);

int main() {

	int i = 11;
	int j = 12;
	int ergebnis;

	rechnen(&i, &j, &ergebnis);
	printf("%d\n", ergebnis);

	system("pause");
	return 0;
}

void rechnen(int* iptr, int* jptr, int* ergebnis) {
	*ergebnis = *iptr + *jptr;
}