// SEGUIRE LE INDICAZIONI DEL VIDEO PRIMA DI AVVIARE IL GIOCO: https://drive.google.com/file/d/19OQ4VREbWgy7LF4iWbexlBwkG08VCWnV/view?usp=sharing
// SEGUIRE LE INDICAZIONI DEL VIDEO PRIMA DI AVVIARE IL GIOCO: https://drive.google.com/file/d/19OQ4VREbWgy7LF4iWbexlBwkG08VCWnV/view?usp=sharing


#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "myUtility.h"

void riga (int x, int y, int lato, char carattere) ; //disena una riga di caratteri

void rigacolore (int x, int y, int lato, char carattere, int colore) ; //disegna una riga di caratteri con colore


void colonna (int x, int y, int lato, char carattere) ; //disegna una colonna di carattere

void colonnacolore (int x , int y, int lato, char carattere, int colore) ; //disegna una colonna di carattere con colore


void quadratopieno (int x, int y, int lato, char carattere) ; //disegna un quadrato pieno con dei caratteri

void quadratopienocolore (int x, int y, int lato, char carattere, int colore) ; //disegna un quadrato pieno con colore


void quadratovuoto (int x, int y, int lato, char carattere) ; //disegna un quadrato vuoto con dei caratteri

void quadratovuotocolore (int x, int y, int lato, char carattere, int colore) ; //disegna un quadrato vuoto con colore


void rettangolovuoto (int x, int y, int base, int altezza, char carattere) ; //disegna un rettangolo vuoto

void rettangolovuotocolore (int x, int y, int base, int altezza, char carattere, int colore) ; //disegna un rettangolo vuoto con colore


void rettangolopieno (int x, int y, int base, int altezza, char carattere) ; //disegna un rettangolo pieno

void rettangolopienocolore (int x, int y, int base, int altezza, char carattere, int colore) ; //disegna un rettangolo pieno con colore


void triangolo (int x, int y, int altezza, char carattere) ; //disegna un triangolo

void triangolocolore (int x, int y, int altezza, char carattere, int colore) ; //disegna un triangolo con colore








void riga (int x, int y, int lato, char carattere) {
    int cnt ;
    cnt = 0 ;

    gotoxy (x, y) ;
    while (cnt < lato) {
        delay (1) ;
        printf ("%c", carattere) ;
        cnt = cnt + 1 ;
    }
}


void rigacolore (int x, int y, int lato, char carattere, int colore) {
    int cnt ;
    cnt = 0 ;

    gotoxy (x, y) ;
    while (cnt < lato) {
        textcolor (colore) ;
        delay (1) ;
        printf ("%c", carattere) ;
        cnt = cnt + 1 ;
    }
}

void colonna (int x, int y, int lato, char carattere) {
    int cnt ;
    cnt = 0 ;

    while (cnt < lato) {
        gotoxy (x, y) ;
        delay (1) ;
        printf ("%c", carattere) ;
        cnt = cnt + 1 ;
        y = y + 1 ;
    }
}


void colonnacolore (int x, int y, int lato, char carattere, int colore) {
    int cnt ;
    cnt = 0 ;

    while (cnt < lato) {
        gotoxy (x, y) ;
        textcolor (colore) ;
        delay (1) ;
        printf ("%c", carattere) ;
        cnt = cnt + 1 ;
        y = y + 1 ;
    }
}


void quadratovuoto (int x, int y, int lato, char carattere) {
    lato = lato - 1 ;
    riga (x, y, lato, carattere) ;
    colonna (x + lato, y, lato + 1, carattere) ;
    riga (x, y + lato, lato, carattere) ;
    colonna (x, y , lato, carattere) ;
}


void quadratovuotocolore (int x, int y, int lato, char carattere, int colore) {
    lato = lato - 1 ;
    rigacolore (x, y, lato, carattere, colore) ;
    colonnacolore (x + lato, y, lato + 1, carattere, colore) ;
    rigacolore (x, y + lato, lato, carattere, colore) ;
    colonnacolore (x, y , lato, carattere, colore) ;
}

void quadratopieno (int x, int y, int lato, char carattere) {
    int cnt ;
    cnt = 0 ;

    while (cnt < lato) {
        riga (x, y, lato, carattere) ;
        y = y + 1 ;
        cnt = cnt + 1 ;
    }
}


void quadratopienocolore (int x, int y, int lato, char carattere, int colore) {
    int cnt ;
    cnt = 0 ;

    while (cnt < lato) {
        rigacolore (x, y, lato, carattere, colore) ;
        y = y + 1 ;
        cnt = cnt + 1 ;
    }
}


void rettangolovuoto (int x, int y, int base, int altezza, char carattere) {
    base = base - 1 ;
    altezza = altezza - 1 ;
    riga (x, y, base, carattere) ;
    colonna (x + base, y, altezza + 1, carattere) ;
    riga (x, y + altezza, base, carattere) ;
    colonna (x, y, altezza, carattere) ;
}


void rettangolovuotocolore (int x, int y, int base, int altezza, char carattere, int colore) {
    base = base - 1 ;
    altezza = altezza - 1 ;
    rigacolore (x, y, base, carattere, colore) ;
    colonnacolore (x + base, y, altezza + 1, carattere, colore) ;
    rigacolore (x, y + altezza, base, carattere, colore) ;
    colonnacolore (x, y, altezza, carattere, colore) ;
}

void rettangolopieno (int x, int y, int base, int altezza, char carattere) {
    int cnt ;
    cnt = 0 ;

    while (cnt < altezza) {
        riga (x, y, base, carattere) ;
        y = y + 1 ;
        cnt = cnt + 1 ;
    }
}


void rettangolopienocolore (int x, int y, int base, int altezza, char carattere, int colore) {
    int cnt ;
    cnt = 0 ;

    while (cnt < altezza) {
        rigacolore (x, y, base, carattere, colore) ;
        y = y + 1 ;
        cnt = cnt + 1 ;
    }
}


void triangolo (int x, int y, int altezza, char carattere) {
    int cnt ;
    cnt = 0 ;
    int lato ;
    lato = 1 ;

    while (cnt < altezza) {
        riga (x, y, lato, carattere) ;
        x = x - 1 ;
        y = y + 1 ;
        lato = lato + 2 ;
        cnt = cnt + 1 ;
    }
}


void triangolocolore (int x, int y, int altezza, char carattere, int colore) {
    int cnt ;
    cnt = 0 ;
    int lato ;
    lato = 1 ;

    while (cnt < altezza) {
        rigacolore (x, y, lato, carattere, colore) ;
        x = x - 1 ;
        y = y + 1 ;
        lato = lato + 2 ;
        cnt = cnt + 1 ;
    }
}

void rigaarcobaleno (int x, int y, int lato, char carattere, int sfondo) {
    int cnt ;
    cnt = 0 ;
    int colore ;

    gotoxy (x, y) ;
    while (cnt < lato) {
        colore = sfondo + rand () % 16 ;
        textcolor (colore) ;
        delay (5) ;
        printf ("%c", carattere) ;
        cnt = cnt + 1 ;
    }

}








