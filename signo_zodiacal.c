#incluide <studio.h>

int main []
[
    int signo;

    printf ( " \ n Listado de signos de zodiaco \ n \ n " );
    printf ( " 1. Aries " )
    printf ( " \ n 2. Tauro " )
    printf ( " \ n 3. Gemenis " )
    printf ( " \ n 4. Cáncer " )
    printf ( " \ n 5. Leo " )
    printf ( " \ n 6. Virgo " )
    printf ( " \ n 7. Libra " )
    printf ( " \ n 8. Escorpión " )
    printf ( " \ n 9. Capricornio " )
    printf ( " \ n 10. Sagitario " )
    printf ( " \ n 11. Acuario " )
    printf ( " \ n 12. Piscis " )
    printf ( " \ n Escribe tu número de signo de zodiaco " )
    scanf ( " % c , & signo " );

    interruptor (signo)
    [
        caso  1 ;
        caso  5 ;
        caso  9 ;
                printf ( " \ n tu elemento es FUEGO " )
                rotura;
        caso  2 ;        
        caso  6 ;
        caso  10 ;
                printf ( " \ n tu elemento es TIERRA " )
                rotura;
        caso  3 ;
        caso  7 ;
        caso  11 ;
                printf ( " \ n tu elemento es AIRE " )
                rotura;
        caso  4 ;
        caso  8 ;
        caso  12 ;
                 printf ( " \ n tu elemento es AGUA " )
                 rotura;
        predeterminado ;
                printf ( " El numero no corresponde al numero de signo de zodiaco " )
                 rotura;
    ]

     return  0 ;
]