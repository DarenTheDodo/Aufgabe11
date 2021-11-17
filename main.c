#include <stdio.h>
// cgrahl3s, kzande3s
// Dieses Programm soll für eine Zahl x und einer Genauigkeit n die zugehörige Quadratwurzel von x ausgegeben
// Test:
// x = 2, n = 4, w = 1.4142; x = 49, n = 10, w = 7; x = 81, n = 10, w = 9;
// Was passiert bei wachsendem n?
// Je höher die Genauigkeit n, desto präziser ist das Ergebnis (bei hohen x Werten sind die Ergebnisse erst nach einigen Durchläufen annähernd richtig)
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

