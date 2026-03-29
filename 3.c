#include <stdio.h>
int main() {
    int n;
    double x, total_sum = 0.0;
    printf("Обчислення подвійної суми для варіанту 19\n");
    printf("Введіть натуральне число n: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Помилка: n має бути натуральним числом (n >= 1).\n");
        return 1;
    }
    printf("Введіть дійсне число x: ");
    scanf("%lf", &x);
    for (int i = 1; i <= n; i++) {
        double inner_sum = 0.0;
        for (int j = i; j <= n - 1; j++) {
            // Перевірка на всяк випадок (хоча при n >= 1 і j = i, j >= 1)
            if (j != 0) {
                inner_sum += x / j;
            }
        }
        
        total_sum += inner_sum;
    }
    printf("-------------------------------------------\n");
    printf("Результат подвійної суми: %.6f\n", total_sum);
    printf("-------------------------------------------\n");
    return 0;
}