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


#include "stdio.h"
#include <iostream>

using namespace std;

int multip(int);
int div(int);


int main() {

	int zahl;
	printf("Geben Sie eine Zahl zur Turmberechnung ein:\n");
	cin >> zahl;

	zahl = multip(zahl);
	div(zahl);

	system("pause");
	return EXIT_SUCCESS;
}

int multip(int zahl) {

	printf("%10d * 2\n", zahl);

	for (int i = 2; i < 10; i++) {
		zahl = zahl * i;
		if (i == 9) {
			printf("%10d : 2\n", zahl);
		}
		else {
			printf("%10d * %d\n", zahl, i+1);
		}
		
	}

	return zahl;
}

int div(int zahl) {

	for (int i = 2; i < 10; i++) {
		zahl = zahl / i;

		if (i == 9) {
			printf("%10d\n", zahl);
		}
		else {
			printf("%10d : %d\n", zahl, i + 1);
		}
		
	}

	return EXIT_SUCCESS;
}

