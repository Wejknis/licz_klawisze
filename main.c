#include <stdio.h>

void main() {
    int ile_a = 0, ile_b = 0, ile_xy = 0, nieznany = 0;
    char zn;
    printf("podaj znak z kalwiatury: ");
    zn = getchar();
    switch (zn) {
        case 'a' :
            ++ile_a;
            break;

        case 'b' :
            ++ile_b;
            break;

        case 'x' :

        case 'y' :
            ++ile_xy;
            break;

        default :
            ++nieznany;
    }
    printf("było a: %i\n", ile_a);
    printf("było b: %i\n", ile_b);
    printf("było xy: %i\n", ile_xy);
    printf("było nieznanych: %i\n", nieznany);
}