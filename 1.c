#include <stdio.h>
#include <math.h>
int main() {
    int a, b;
    double x, numerator, denominator;
    int input_status;
    while (1) {
        printf("\nВведіть цілі значення a та b:\n");
        printf("a = ");
        input_status = scanf("%d", &a);
        if (input_status != 1) {
            printf("Помилка: Введено не число. Спробуйте ще раз.\n");
            while (getchar() != '\n'); // Очищення буфера введення
            continue;
        }
        printf("b = ");
        input_status = scanf("%d", &b);
        if (input_status != 1) {
            printf("Помилка: Введено не число. Спробуйте ще раз.\n");
            while (getchar() != '\n'); // Очищення буфера введення
            continue;
        }
        int check_val = a * a - 3 * b;
        if (check_val == 0) {
            printf("Помилка: для заданих значень a=%d та b=%d у виразі виконується ділення на 0.\n", a, b);
            printf("Задайте інші значення.\n");
            continue; // Повернення на початок циклу
        }
        numerator = 2 * cos(a) - pow(b, 2);
        denominator = 3.0 * check_val;
        x = numerator / denominator;
        printf("-----------------------------------\n");
        printf("Результат: x = %.6f\n", x);
        printf("-----------------------------------\n");
        break; // Вихід з циклу після успішного обчислення
    }
    return 0;
}