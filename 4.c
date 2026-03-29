#include <stdio.h>
#include <math.h>
int main() {
    double a = 0.0, b = 3.0, dx = 0.025;
    double x, y;
    printf("==================================\n");
    printf("|      x       |      y=f(x)     |\n");
    printf("----------------------------------\n");
    for (x = a; x <= b + dx/2; x += dx) {
        if (x <= 0) {
            printf("| %12.3f |   не визначено  |\n", x);
        } else {
            y = log10(x) / (4 * x + 13);
            printf("| %12.3f | %15.6f |\n", x, y);
        }
    }
    printf("==================================\n");
    return 0;
}