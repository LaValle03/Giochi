// SEGUIRE LE INDICAZIONI DEL VIDEO PRIMA DI AVVIARE IL GIOCO: https://drive.google.com/file/d/19OQ4VREbWgy7LF4iWbexlBwkG08VCWnV/view?usp=sharing
// SEGUIRE LE INDICAZIONI DEL VIDEO PRIMA DI AVVIARE IL GIOCO: https://drive.google.com/file/d/19OQ4VREbWgy7LF4iWbexlBwkG08VCWnV/view?usp=sharing
#include "Funzioni.h"


int main () {
    //dichiarazione variabili
    srand(time(NULL)) ;     //funzione per il random
    int risposta ;          //risposta alla domanda "RIPROVARE?"   1=SI   2=NO

    do {        //while per far ripetere il gioco dall'inizio in base alla risposta
        bool esciRiquadro = false ;     //variabile booleana per uscire dal while del lampeggio del riquadro grande
        bool esciRiquadroPiccolo = false ;      //variabile booleana per uscire dal while per lampeggio del riquadro piccolo
        int a ;     //variabile per inserimento tasto
        int b ;     //variabile per inserimento tasto
        int selezionato = 1 ;       //variabile per salvare figura scelta     1=carta   2=sasso   3=forbice
        risposta = 1 ;          //variabile per salvare risposta finale    1=si   2=no
        cursor_hide();          //funzione che nasconde il cursore

        //disegno del campo da gioco
        faiscelta (50, 10) ;        //creazione della scritta iniziale e delle tre figure
        carta (27, 30) ;
        sasso (57, 30) ;
        forbice (90, 28) ;

        while (!esciRiquadro) {     //while per far lampeggiare il riquadro e per far scegliere all'utente la figura selezionata
            switch (selezionato) {
                case 1:
                riquadro (25, 26) ;
                delay (200) ;
                cancellaRiquadro (25, 26) ;
                break ;

                case 2:
                riquadro (55, 26) ;
                delay (200) ;
                cancellaRiquadro (55, 26) ;
                break ;

                case 3:
                riquadro (85, 26) ;
                delay (200) ;
                cancellaRiquadro (85, 26) ;
                break ;
            }

            if (kbhit() == true) {      //entra nell'if quando premo un tasto sulla tastiera
                a = getch () ;      //salvo il tasto premuto all'interno della variabile A
                if (a == SINISTRA && selezionato != 1) {        //incremento o decremento la variabile selezionato in base al tasto premuto per far spostare il riquadro attorno alle figure
                    selezionato-- ;
                }
                if (a == DESTRA && selezionato != 3) {
                    selezionato++ ;
                }
                if (a == ENTER) {           //se il tasto premuto � l'invio esco dal ciclo e continuo con il gioco
                    esciRiquadro = true ;
                }
            } else {
                delay (200) ;       //se non premo nessun tasto aspetto 200 millisecondi e dopo inizio di nuovo il ciclo
            }
        }

        int random = rand() % 3 + 1 ;       //variabile random da 1 a 3 che sceglia la figura del secondo giocatore
        clrscr();       //cancello tutto lo schermo

        switch (selezionato) {      //switch per fare il rolling delle varie figure e poi far apparire quella random
            case 1:
            carta (27, 30) ;
            rolling (57, 30) ;

            switch (random) {       //switch per mostrare la figura random
                case 1:
                carta (57, 30) ;
                break ;

                case 2:
                sasso (57, 30) ;
                break ;

                case 3:
                forbice (57, 30) ;
                break ;
            }
            break ;

            case 2:
            sasso (27, 30) ;
            delay (50) ;
            rolling (57, 30) ;

            switch (random) {
                case 1:
                carta (57, 30) ;
                break ;

                case 2:
                sasso (57, 30) ;
                break ;

                case 3:
                forbice (57, 30) ;
                break ;
            }
            break ;

            case 3:
            forbice (27, 30) ;
            delay (50) ;
            rolling (57, 30) ;

            switch (random) {
                case 1:
                carta (57, 30) ;
                break ;

                case 2:
                sasso (57, 30) ;
                break ;

                case 3:
                forbice (57, 30) ;
                break ;
            }
            break ;
        }

        if (selezionato == random) {        //if per mostrare le varie frasi PARITA', HAI VINTO oppure HAI PERSO
            parita (32, 20) ;
        } else {
            if (selezionato == 1 && random == 2 || selezionato == 2 && random == 3 || selezionato == 3 && random == 1) {
                vinto (32 ,20) ;
            } else {
                perso (32, 20) ;
            }
        }

        riprovare (29, 55) ;        //creazione della scritta RIPROVARE? con rispettive risposte SI e NO

        while (!esciRiquadroPiccolo) {      //while per far lampeggiare il riquadro piccolo e far scegliere all'utente la risposta tramite tastiera
            switch (risposta) {
                case 1:
                riquadroPiccolo (37, 63) ;
                delay (200) ;
                cancellaRiquadroPiccolo (37, 63) ;
                break ;

                case 2:
                riquadroPiccolo (53, 63) ;
                delay (200) ;
                cancellaRiquadroPiccolo (53, 63) ;
                break ;
            }

            if (kbhit() == true) {      //entra se si preme un tasto da tastiera
                b = getch () ;      //variabile che salva il tasto premuto
                if (b == SINISTRA && risposta != 1) {       //if per incrementare o decrementare la variabile risposta 1=SI  2=NO
                    risposta-- ;
                }
                if (b == DESTRA && risposta != 2) {
                    risposta++ ;
                }
                if (b == ENTER) {
                    esciRiquadroPiccolo = true ;
                }
            } else {
                delay (200) ;
            }
        }

    clrscr() ;      //pulisco lo schermo
    }while (risposta == 1) ;     //se la risposta � SI ricomincia il gioco


    gotoxy (0, 100) ;
}

