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

#include <stdio.h>
#include <iostream>

using namespace std;

#define SUCCESS 0;
#define PI 3.14159265358979323846  /* pi */

//-----------------------------------------------------------------------------------------------
///
///Function prototypes
//

void f_input_array(int*);
void f_show_array(int*);
int f_average_array(int*);
int f_provision(int*, int*);
void f_discount(int*, int*);
void f_area_circle();

//-----------------------------------------------------------------------------------------------
///
///Main Programm
//

int main() {

	int tatjana[10] = {0};
	int* ptatjana = tatjana;
	int select;
	int result;
	int umsatz = 0;
	int provision = 0;
	int* pprovision = &provision;
	int* pumsatz = &umsatz;
	int proveuro = 0;
	int preis = 0;
	int menge = 0;
	int* ppreis = &preis;
	int* pmenge = &menge;


	while (1) {

		printf("------------------------------------\n");
		printf("Eingabe des Arrays ............... 1\n");
		printf("Anzeige des Arrays ............... 2\n");
		printf("Anzeige des Arraydurchschnitts ... 3\n");
		printf("Provisions Berechnung ............ 4\n");
		printf("Rabatt Berechnung ................ 5\n");
		printf("Fl%cchen Berechnung ............... 6\n", 132);
		printf("Beenden .......................... 9\n");
		printf("\n");
		printf("W%chlen Sie jetzt: ", 132);

		cin >> select;

		switch (select)
		{

		case 1:
			f_input_array(ptatjana);
			printf("\n");
			break;

		case 2:
			f_show_array(ptatjana);
			printf("\n");
			break;

		case 3:
			result = f_average_array(ptatjana);
			printf("Der Arraydurchschnitt betr%cgt: %d\n\n", 132, result);
			printf("\n");
			break;

		case 4:
			cout << "Geben Sie zwei Zahlen ein, den Umsatz inkl. 20 %% USt und die Provision in %\n";
			cin >> umsatz >> provision;
			proveuro = f_provision(pprovision, pumsatz);
			printf("Die Provision betr%cgt: %d EURO\n", 132, proveuro);
			printf("\n");
			break;

		case 5:
			cout << "Geben Sie zwei Zahlen ein, Menge und Preis.\n";
			cin >> *pmenge >> *ppreis;
			f_discount(pmenge, ppreis);
			printf("Der Gesamtpreis betr%cgt: %d EUR\n", 132, preis);
			printf("\n");
			break;

		case 6:
			f_area_circle();
			printf("\n");
			break;

		case 9:
			printf("\n");
			printf("Programm wird beendet\n");
			//exit(0);
			return SUCCESS;

		default:
			printf("Bitte geben Sie eine Zahl ein.\n");
			printf("\n");
		}
	}



	system("pause");

	return SUCCESS;
}

//------------------------------------------------------------------------------------------------
///
///Insert a value into the array first position and calculates the others.
///@param ptatjana Pointer to int array
//

void f_input_array(int* ptatjana) {

	int wert;

	printf("Geben Sie den Startwert f%cr das Array ein zwischen 0 und 100: ", 129);

	cin >> wert;
	if ((wert <= 100) && (wert >= 0)) {
		ptatjana[0] = wert;
	}
	else {
		printf("Der Wert war nicht zwischen 0 und 100.\n");
		exit;
	}

	for (int i = 1; i <= 9; i++) {
		ptatjana[i] = wert * (i + 1);
	}
}

//------------------------------------------------------------------------------------------------
///
///Display int array content
///@param ptatjana Pointer to int array
//

void f_show_array(int* ptatjana) {

	for (int i = 0; i <= 9; i++) {
		printf("Zelle %d, Wert: %d\n", i + 1, ptatjana[i]);
	}

}


//------------------------------------------------------------------------------------------------
///
///Calculate the Average of the int array
///@param ptatjana Pointer to int array
///@return result Returns the result of the average
//

int f_average_array(int* ptatjana) {

	int result = 0;
	for (int i = 0; i <= 9; i++) {
		result = ptatjana[i] + result;
	}
	result = result / sizeof(&ptatjana) / sizeof(int);

	return result;
}

//------------------------------------------------------------------------------------------------
///
///Calculate provision
///@param pprovision Pointer to int provision
///@param pumsatz Pointer to int umsatz
///@return proveuro Returns the Provision in EUR
//

int f_provision(int* pprovision, int* pumsatz) {

	int netto = 0;
	int proveuro = 0;

	if ((pumsatz < 0) && (pprovision < 0)) {
		printf("Geben Sie einen gr%cßeren Wert als 0 ein. \n", 148);
	}
	else {

		netto = *pumsatz / 1.2;
		proveuro = netto / 100 * *pprovision;
	}

	return proveuro;

}

//------------------------------------------------------------------------------------------------
///
///Calculate the discount
///@param pmenge Pointer to int menge
///@param ppreis Pointer to int preis
//

void f_discount(int* pmenge, int* ppreis) {
	int rabatt = 0;
	
	if (*pmenge >= 10000) {
		rabatt = *ppreis / 100 * 10;
		*ppreis = *ppreis - rabatt;
		*pmenge = 0;
	}
	else if (*pmenge >= 5000) {
			rabatt = *ppreis / 100 * 5;
			*ppreis = *ppreis - rabatt;
			*pmenge = 0;
	}
	else if (*pmenge > 500) {
		rabatt = *ppreis / 100 * 2;
		*ppreis = *ppreis - rabatt;
		*pmenge = 0;
	}
	else {
		printf("Es gab keinen Rabatt da die Menge kleiner 500 St%cck war.\n", 129);
	}
}

//------------------------------------------------------------------------------------------------
///
///Gets the 1st line of the text file (= TM's Band)
///@param file_name_buffer Pointer to text file
//

void f_area_circle() {

	double radius = 0.0;
	double flaeche = 0.0;

	cout << "Geben Sie den Radius des Kreises in cm ein: Bsp: 14.3\n";
	cin >> radius;

	flaeche = (2 * radius)*(2 * radius) * PI / 4; // A = (d^2*pi)/4

	printf("Die Fl%cche des Kreises betr%cgt: %f cm\n", 132, 132, flaeche);

}


