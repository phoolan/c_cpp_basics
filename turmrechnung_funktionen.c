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

// Deklarationen der Funktionen welche benutzt werden
int multiplikation(int);
int division(int);


//Haupt-Funktion - hier startet das Programm
int main() {

    int zahl = 10;
    int ergebnis = zahl * 2;
     
    printf("%9d * 2\n", zahl);	// Ausgabe der ersten Zeile
    printf("%9d * 3\n", ergebnis); // Ausgabe der zweiten Zeile
    
    ergebnis = multiplikation(ergebnis); // Aufruf der Funktion Multiplikation und übergabe des Wertes "ergebnis" an die Funktion, sowie rückgabe des berechneten Wertes an die Hauptfunktion.
    ergebnis = division(ergebnis); // Aufruf der Funktion Division und übergabe des Wertes "ergebnis" an die Funktion, sowie rückgabe des berechneten Wertes an die Hauptfunktion.
    
    printf("%9d\n", ergebnis); // Ausgabe der letzten Zeile

    // Programmende
    return 0;
}

// Funktion welche die Multiplikation durchführt ab *3 bis *9 und den entsprechenden Ausgaben
int multiplikation(int ergebnis) {
      
    for(int i=3; i<=9; i++) {
        ergebnis = ergebnis * i;    
        if (i==9){
            printf("%9d : 2\n", ergebnis);
        }
        else {
            printf("%9d * %d\n", ergebnis, i+1);
        }
    }
    
    return ergebnis;
}

// Funktion welche die Division durchführt von :2 bis :8 via schleife, :9 als letzte zeile vor der rückgabe des wertes an die hauptfunktion
int division(int ergebnis){

    int i;
    
    for(i=2; i<=8; i++){
        ergebnis = ergebnis / i;
        printf("%9d : %d\n", ergebnis, i+1);       
    }
    
    ergebnis = ergebnis / i++;
    
    return ergebnis;
}