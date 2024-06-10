#include <stdio.h>


float calcularMax(float x, float y);
float calcularNota(float p1, float p2, float e);

int main(void) {
    char c;

    do {
        float parcial1, parcial2, examen, final;

        
        printf("Introduzca nota parcial 1 [0, 10]: ");
        scanf("%f", &parcial1);
        
        printf("Introduzca nota parcial 2 [0, 10]: ");
        scanf("%f", &parcial2);
        
        printf("Introduzca nota examen final [0, 10]: ");
        scanf("%f", &examen);

      
        final = calcularNota(parcial1, parcial2, examen);

        
        printf("Nota final: %.2f\n", final);
        printf("La calificación más alta fue: %.2f\n", calcularMax(final, examen));

        
        printf("\nSalir? (s/n): ");
        
        
        do {
            scanf(" %c", &c);
        } while (c == '\n');
        
        printf("\n");
    } while (c != 's' && c != 'S');

    return 0;
}


float calcularNota(float p1, float p2, float notaExamen) {
    return p1 * 0.2 + p2 * 0.2 + notaExamen * 0.6;
}

float calcularMax(float x, float y) {
    return (x >= y) ? x : y;
}