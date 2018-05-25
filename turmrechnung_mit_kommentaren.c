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

    // Variablen Deklaration und Definition
    int zahl = 10; // variable für die start zahl
    int ergebnis; // variable für die rechenwerte
    int mk; //variable für multiplikator
    int div; //variable für divisor
   
    
    // Teil 1: 
    // Multiplikation
    for(mk = 2; mk <= 9; mk++){ // Schleife welche so oft durchlaufen wird wie der Multiplikation kleiner oder gleich 9 ist, beginnend bei 2 und nach jedem durchlauf wird er um eines erhöht
        
		if(mk==2){ // Einmaliger Aufruf zu Beginn des Programms wenn der multiplikator 2 ist
          printf("%9d * %d\n", zahl, mk); // gibt die Zahl und den multiplikator aus mit einer erweiterung um 9 Leerzeichen von links nach rechts.
          ergebnis = zahl * mk; // rechnung: 20 = 10*2 
          printf("%9d * %d\n", ergebnis, mk+1); //gibt den wert der errechneten zweiten zahl aus und den nächst höheren multiplikator bez. der anzeige aus.
        }
        else if(mk==9){ // Einmaliger Aufruf am Ende der Multiplikation wenn der multiplikator 9 ist.
            ergebnis = ergebnis * mk; // rechnung: 60 = 20 * 3
            printf("%9d : 2 \n", ergebnis); // ausgabe des wertes mit händisch geschriebem :2 für die optik
        }
        else { // Alles wo der multiplikator nicht 2 oder 9 ist.
            ergebnis = ergebnis * mk; // rechnungsbeispiel: 60 = 20 * 3; (mal 3, 4, 5, 6, 7, 8)
            printf("%9d * %d\n", ergebnis, mk+1); // gibt den wert der errechneten zweiten zahl aus und den nächst höheren multiplikator bez. der anzeige aus.
        }
    }
	
    // Teil 2:
    // Divison:
    for(div=2; div <= 9; div++){ // Schleife welche so oft durchlaufen wird wie der Divisor kleiner gleich 9 ist, beginnend bei 2 und nach jedem durchlauf wird er um eines erhöht
        if(div==9){ // Einmaliger Aufruf wenn der divisor 9 ist
            ergebnis = ergebnis / div; // rechnung
            printf("%9d\n", ergebnis);    // Ausgabe des Ergebnisses ohne einen weiteren Zusatztext
        }
        else { // Alles wo der Divisor nicht 9 ist.
            ergebnis = ergebnis / div; // rechnung: zb. 20 = 60 : 3
            printf("%9d : %d\n", ergebnis, div + 1); // Ausgabe des Ergebnisses und des um 1 erhöhten Divisor wert bez. der korrekten anzeige
        }
    }
    
    // Programmende
    return 0; // Rückgabewert der Hauptfunktion / des Hauptprogrammes
}