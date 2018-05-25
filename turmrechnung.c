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

    int zahl = 10; 
    int ergebnis;
    int mk; 
    int div; 
   
    
    // Teil 1: 
    // Multiplikation
    for(mk = 2; mk <= 9; mk++){ 
        
		if(mk==2){ 
          printf("%9d * %d\n", zahl, mk); 
          ergebnis = zahl * mk; 
          printf("%9d * %d\n", ergebnis, mk+1);
        }
        else if(mk==9){ 
            ergebnis = ergebnis * mk; 
            printf("%9d : 2 \n", ergebnis); 
        }
        else { 
            ergebnis = ergebnis * mk; 
            printf("%9d * %d\n", ergebnis, mk+1); 
        }
    }
	
    // Teil 2:
    // Divison:
    for(div=2; div <= 9; div++){ 
        if(div==9){ 
            ergebnis = ergebnis / div; 
            printf("%9d\n", ergebnis); 
        }
        else {
            ergebnis = ergebnis / div;
            printf("%9d : %d\n", ergebnis, div + 1);
        }
    }
    
    // Programmende
    return 0;
}