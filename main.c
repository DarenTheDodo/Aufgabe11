#include <stdio.h>
// cgrahl3s, kzande3s
// Dieses Programm soll fuer eine Zahl x und einer Genauigkeit n die zugehoerige Quadratwurzel von x ausgegeben
// Test:
// x = 2, n = 4, w = 1.4142; x = 49, n = 10, w = 7; x = 81, n = 10, w = 9;
// Was passiert bei wachsendem n?
// Je hoeher die Genauigkeit n, desto praeziser ist das Ergebnis (bei hohen x Werten sind die Ergebnisse erst nach einigen Durchlaeufen annaehernd richtig)
int main() {
    double w, x;
    int n;
    w = 1;

    printf("x=");
    scanf("%lf", &x);
    printf("n=");
    scanf("%i", &n);

    for (int i = 0; i <= n; i++) {
        w = 0.5 * (w + x / w);
    }
    printf("%lf\n", w);
    return 0;
}

