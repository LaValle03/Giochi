// SEGUIRE LE INDICAZIONI DEL VIDEO PRIMA DI AVVIARE IL GIOCO: https://drive.google.com/file/d/19OQ4VREbWgy7LF4iWbexlBwkG08VCWnV/view?usp=sharing
// SEGUIRE LE INDICAZIONI DEL VIDEO PRIMA DI AVVIARE IL GIOCO: https://drive.google.com/file/d/19OQ4VREbWgy7LF4iWbexlBwkG08VCWnV/view?usp=sharing


#include <conio.h>      //kbhit getch
#include "Funzioni_grafica.h"
#define BLOCCO 219
#define DESTRA 77
#define SINISTRA 75
#define SPAZIO 32
#define ENTER 13

void letteraA (int x, int y) {                  //costruzione della lettera A
    colonna (x + 0, y + 1, 4, BLOCCO) ;
    colonna (x + 2, y + 0, 5, BLOCCO) ;
    riga (x + 1, y + 0, 2, BLOCCO) ;
    riga (x + 0, y + 3, 3, BLOCCO) ;
}

void letteraC (int x, int y) {                  //costruzione della lettera C
    riga (x + 1, y + 0, 2, BLOCCO) ;
    colonna (x + 0, y + 1, 3, BLOCCO) ;
    riga (x + 1, y + 4, 2, BLOCCO) ;
    riga (x + 3, y + 1, 1, BLOCCO) ;
    riga (x + 3, y + 3, 1, BLOCCO) ;
}

void letteraE (int x, int y) {                  //costruzione della lettera E
    colonna (x + 0, y + 0, 5, BLOCCO) ;
    riga (x + 0, y + 0, 3, BLOCCO) ;
    riga (x + 0, y + 2, 3, BLOCCO) ;
    riga (x + 0, y + 4, 3, BLOCCO) ;
}

void letteraF (int x, int y) {                  //costruzione della lettera F
    colonna (x + 0, y + 0, 5, BLOCCO) ;
    riga (x + 0, y + 0, 3, BLOCCO) ;
    riga (x + 0, y + 2, 2, BLOCCO) ;
}

void letteraH (int x, int y) {                  //costruzione della lettera H
    riga (x + 0, y + 2, 4, BLOCCO) ;
    colonna (x + 0, y + 0, 5, BLOCCO) ;
    colonna (x + 3, y + 0, 5, BLOCCO) ;

}

void letteraI (int x, int y) {                  //costruzione della lettera I
    colonna (x + 0, y + 0, 5, BLOCCO) ;
}

void letteraL (int x, int y) {                  //costruzione della lettera L
    colonna (x + 0, y + 0, 5, BLOCCO) ;
    riga (x + 0, y + 4, 3, BLOCCO) ;
}

void letteraN (int x, int y) {                  //costruzione della lettera N
    colonna (x + 0, y + 0, 5, BLOCCO) ;
    colonna (x + 3, y + 0, 5, BLOCCO) ;
    riga (x + 1, y + 2, 1, BLOCCO) ;
    riga (x + 2, y + 3, 1, BLOCCO) ;
}

void letteraO (int x, int y) {                  //costruzione della lettera O
    riga (x + 1, y + 0, 2, BLOCCO) ;
    riga (x + 1, y + 4, 2, BLOCCO) ;
    colonna (x + 0, y + 1, 3, BLOCCO) ;
    colonna (x + 3, y + 1, 3, BLOCCO) ;
}

void letteraP (int x, int y) {                  //costruzione della lettera P
    riga (x + 0, y + 0, 3, BLOCCO) ;
    riga (x + 0, y + 2, 4, BLOCCO) ;
    riga (x + 3, y + 1, 1, BLOCCO) ;
    colonna (x + 0, y + 0, 5, BLOCCO) ;
}

void letteraR (int x, int y) {                  //costruzione della lettera R
    riga (x + 0, y + 0, 3, BLOCCO) ;
    riga (x + 0, y + 2, 3, BLOCCO) ;
    riga (x + 3, y + 1, 1, BLOCCO) ;
    colonna (x + 0, y + 0, 5, BLOCCO) ;
    colonna (x + 3, y + 3, 2, BLOCCO) ;
}

void letteraS (int x, int y) {                  //costruzione della lettera S
    riga (x + 0, y + 4, 4, BLOCCO) ;
    riga (x + 1, y + 0, 3, BLOCCO) ;
    riga (x + 0, y + 1, 1, BLOCCO) ;
    riga (x + 1, y + 2, 2, BLOCCO) ;
    riga (x + 3, y + 3, 1, BLOCCO) ;
}

void letteraT (int x, int y) {                  //costruzione della lettera T
    riga (x + 0, y + 0, 3, BLOCCO) ;
    colonna (x + 1, y + 0, 5, BLOCCO) ;
}

void letteraU (int x, int y) {                  //costruzione della lettera U
    colonna (x + 0, y + 0, 4, BLOCCO) ;
    colonna (x + 3, y + 0, 5, BLOCCO) ;
    riga (x + 1, y + 4, 3, BLOCCO) ;
}

void letteraV (int x, int y) {                  //costruzione della lettera V
    colonna (x + 0, y + 0, 4, BLOCCO) ;
    riga (x + 1, y + 4, 1, BLOCCO) ;
    riga (x + 2, y + 3, 1, BLOCCO) ;
    colonna (x + 3, y + 0, 3, BLOCCO) ;
}

void carta (int x, int y) {                  //costruzione della figura carta
    textcolor (15) ;
    riga (x + 8, y, 2, BLOCCO) ;
    riga (x + 7, y + 1, 4, BLOCCO) ;
    riga (x + 5, y + 2, 7, BLOCCO) ;
    riga (x + 4, y + 3, 9, BLOCCO) ;
    riga (x + 2, y + 4, 12, BLOCCO) ;
    riga (x + 1, y + 5, 14, BLOCCO) ;
    riga (x + 0, y + 6, 14, BLOCCO) ;
    riga (x + 1, y + 7, 12, BLOCCO) ;
    riga (x + 2, y + 8, 10, BLOCCO) ;
    riga (x + 3, y + 9, 7, BLOCCO) ;
    riga (x + 4, y + 10, 5, BLOCCO) ;
    riga (x + 5, y + 11, 2, BLOCCO) ;

}


void sasso (int x, int y) {                  //costruzione della figura sasso
    textcolor (8) ;
    riga (x + 5, y + 0, 3, BLOCCO) ;
    riga (x + 3, y + 1, 8, BLOCCO) ;
    riga (x + 1, y + 2, 14, BLOCCO) ;
    riga (x + 0, y + 3, 16, BLOCCO) ;
    riga (x + 0, y + 4, 16, BLOCCO) ;
    riga (x + 0, y + 5, 16, BLOCCO) ;
    riga (x + 0, y + 6, 16, BLOCCO) ;
    riga (x + 0, y + 7, 14, BLOCCO) ;
    riga (x + 0, y + 8, 14, BLOCCO) ;
    riga (x + 0, y + 9, 12, BLOCCO) ;
    riga (x + 0, y + 10, 12, BLOCCO) ;
    textcolor (0) ;
    riga (x + 3, y + 10, 2, BLOCCO) ;
}


void forbice (int x, int y) {                  //costruzione della figura fobice
    textcolor (3) ;
    colonna (x + 0, y + 0, 5, BLOCCO) ;
    colonna (x + 3, y + 0, 7, BLOCCO) ;
    colonna (x + 5, y + 0, 7, BLOCCO) ;
    colonna (x + 8, y + 0, 4, BLOCCO) ;
    riga (x + 0, y + 0, 4, BLOCCO) ;
    riga (x + 5, y + 0, 4, BLOCCO) ;
    riga (x + 0, y + 4, 4, BLOCCO) ;
    riga (x + 5, y + 3, 4, BLOCCO) ;
    textcolor (15) ;
    colonna (x + 4, y + 5, 5, BLOCCO) ;
    colonna (x + 3, y + 9, 2, BLOCCO) ;
    colonna (x + 5, y + 9, 2, BLOCCO) ;
    colonna (x + 2, y + 11, 3, BLOCCO) ;
    colonna (x + 6, y + 11, 3, BLOCCO) ;
    colonna (x + 1, y + 14, 2, BLOCCO) ;
    colonna (x + 7, y + 14, 2, BLOCCO) ;
}

void faiscelta (int x, int y) {                  //costruzione della frase "Fai la tua scelta"
    textcolor (15) ;

    letteraF (x + 0, y + 0) ;
    letteraA (x + 4, y + 0) ;
    letteraI (x + 8, y + 0) ;

    letteraL (x + 12, y + 0) ;
    letteraA (x + 16, y + 0) ;

    letteraT (x + 22, y + 0) ;
    letteraU (x + 26, y + 0) ;
    letteraA (x + 31, y + 0) ;

    letteraS (x + 4, y + 8) ;
    letteraC (x + 9, y + 8) ;
    letteraE (x + 14, y + 8) ;
    letteraL (x + 18, y + 8) ;
    letteraT (x + 22, y + 8) ;
    letteraA (x + 26, y + 8) ;
}

void riquadro (int x, int y) {                  //costruzione del riquadro attorno alle figure carta, sasso e forbice
    textcolor (15) ;
    //lati
    riga (x + 1, y + 0, 18, 205) ;
    colonna (x + 0, y + 1, 18, 186) ;
    riga (x + 1, y + 19, 18, 205) ;
    colonna (x + 19, y + 1, 18, 186) ;
    //angoli
    riga (x + 0, y + 0, 1, 201) ;
    riga (x + 19, y + 0, 1, 187) ;
    colonna (x + 0, y + 19, 1, 200) ;
    riga (x + 19, y + 19, 1, 188) ;
}

void cancellaRiquadro (int x, int y) {                  //funzione che cancella il riquadro per farlo lampeggiare
    //lati
    riga (x + 1, y + 0, 18, SPAZIO) ;
    colonna (x + 0, y + 1, 18, SPAZIO) ;
    riga (x + 1, y + 19, 18, SPAZIO) ;
    colonna (x + 19, y + 1, 18, SPAZIO) ;
    //angoli
    riga (x + 0, y + 0, 1, SPAZIO) ;
    riga (x + 19, y + 0, 1, SPAZIO) ;
    colonna (x + 0, y + 19, 1, SPAZIO) ;
    riga (x + 19, y + 19, 1, SPAZIO) ;
}

void cancella (int x1, int y1, int x2, int y2) {                  //funzione che cancella parte dello schermo
    for (int cnty = y1; cnty < y2; cnty++) {
        for (int cntx = x1; cntx < x2; cntx++) {
            gotoxy (cntx, cnty) ;
            printf ("%c", 32) ;
        }
    }
}

void riquadroPiccolo (int x, int y) {                  //costruzione del riquadro attorno alle risposte SI e NO
    textcolor (15) ;

    //lati
    riga (x + 1, y + 0, 11, 205) ;
    colonna (x + 0, y + 1, 7, 186) ;
    riga (x + 1, y + 8, 11, 205) ;
    colonna (x + 12, y + 1, 7, 186) ;

    //angoli
    riga (x + 0, y + 0, 1, 201) ;
    riga (x + 12, y + 0, 1, 187) ;
    colonna (x + 0, y + 8, 1, 200) ;
    riga (x + 12, y + 8, 1, 188) ;
}

void cancellaRiquadroPiccolo (int x, int y) {                  //funzione che cancella il riquadro piccolo per farlo lampeggiare
    textcolor (15) ;

    //lati
    riga (x + 1, y + 0, 11, SPAZIO) ;
    colonna (x + 0, y + 1, 7, SPAZIO) ;
    riga (x + 1, y + 8, 11, SPAZIO) ;
    colonna (x + 12, y + 1, 7, SPAZIO) ;

    //angoli
    riga (x + 0, y + 0, 1, SPAZIO) ;
    riga (x + 12, y + 0, 1, SPAZIO) ;
    colonna (x + 0, y + 8, 1, SPAZIO) ;
    riga (x + 12, y + 8, 1, SPAZIO) ;
}

void rolling (int x, int y) {                  //funzione che stampa nella stessa posizione la carta, il sasso e la forbice una dopo l'altra
    for (int cnt = 10; cnt < 200; cnt = cnt+20) {
        carta(x, y) ;
        delay (cnt) ;
        cancella (x, y, x+20, y+20) ;
        sasso (x, y) ;
        delay (cnt) ;
        cancella (x, y, x+20, y+20) ;
        forbice (x, y) ;
        delay (cnt) ;
        cancella (x, y, x+20, y+20) ;
    }
}

void parita (int x, int y) {                  //costruzione della scritta "PARITA'"
    textcolor (15) ;

    letteraP (x + 0, y + 0) ;
    letteraA (x + 5, y + 0) ;
    letteraR (x + 9, y + 0) ;
    letteraI (x + 14, y + 0) ;
    letteraT (x + 16, y + 0) ;
    letteraA (x + 20, y + 0) ;
    //accento
    colonna (x + 24, y + 0, 2, BLOCCO) ;

}

void vinto (int x, int y) {                  //costruzione della frase "HAI VINTO"
    textcolor (15) ;

    letteraH (x + 0, y + 0) ;
    letteraA (x + 5, y + 0) ;
    letteraI (x + 9, y + 0) ;

    letteraV (x + 13, y + 0) ;
    letteraI (x + 18, y + 0) ;
    letteraN (x + 20, y + 0) ;
    letteraT (x + 25, y + 0) ;
    letteraO (x + 29, y + 0) ;
}

void perso (int x, int y) {                  //costruzione della frase "HAI PERSO"
    textcolor (15) ;

    letteraH (x + 0, y + 0) ;
    letteraA (x + 5, y + 0) ;
    letteraI (x + 9, y + 0) ;

    letteraP (x + 13, y + 0) ;
    letteraE (x + 18, y + 0) ;
    letteraR (x + 22, y + 0) ;
    letteraS (x + 27, y + 0) ;
    letteraO (x + 32, y + 0) ;
}

void riprovare (int x, int y) {                  //costruzione della scritta "RIPROVARE?" con relative risposte SI oppure NO
    textcolor (15) ;

    letteraR (x + 0, y + 0) ;
    letteraI (x + 5, y + 0) ;
    letteraP (x + 7, y + 0) ;
    letteraR (x + 12, y + 0) ;
    letteraO (x + 17, y + 0) ;
    letteraV (x + 22, y + 0) ;
    letteraA (x + 27, y + 0) ;
    letteraR (x + 31, y + 0) ;
    letteraE (x + 36, y + 0) ;

    //Punto interrogativo
    riga (x + 42, y + 0, 3, BLOCCO) ;
    riga (x + 41, y + 1, 1, BLOCCO) ;
    riga (x + 45, y + 1, 1, BLOCCO) ;
    riga (x + 44, y + 2, 1, BLOCCO) ;
    colonna (x + 43, y + 3, 2, BLOCCO) ;
    riga (x + 43, y + 6, 1, BLOCCO) ;

    //RISPOSTE
    letteraS (x + 10, y + 10) ;
    letteraI (x + 15, y + 10) ;

    letteraN (x + 26, y + 10) ;
    letteraO (x + 31, y + 10) ;

}
