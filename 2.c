#include <stdio.h>
#include <math.h> // Потрібно для функції pow()

int main() {
    // Оголошуємо змінні для сум та результатів
    int sum_a = 0, sum_b = 0, sum_v = 0;
    long result_a, result_b, result_v;

    // --- А) ЦИКЛ З ПАРАМЕТРОМ (FOR) ---
    // for(початок; умова; крок)
    for (int i = 11; i <= 20; i++) {
        if (i % 2 == 0) {    // Якщо число i ділиться на 2 без залишку
            sum_a += i;      // Додаємо його до суми
        }
    }
    result_a = (long)sum_a * sum_a * sum_a; // Обчислюємо куб (сума * сума * сума)
    printf("A) Cycle for: %ld\n", result_a);


    // --- Б) ЦИКЛ З ПЕРЕДУМОВОЮ (WHILE) ---
    int j = 11;              // Початкове значення
    while (j <= 20) {        // Поки j менше або дорівнює 20
        if (j % 2 == 0) {
            sum_b += j;
        }
        j++;                 // Збільшуємо лічильник (крок циклу)
    }
    result_b = (long)sum_b * sum_b * sum_b;
    printf("B) Cycle while: %ld\n", result_b);


    // --- В) ЦИКЛ З ПІСЛЯУМОВОЮ (DO-WHILE) ---
    int k = 11;              // Початкове значення
    do {
        if (k % 2 == 0) {
            sum_v += k;
        }
        k++;                 // Збільшуємо лічильник
    } while (k <= 20);       // Перевірка умови в кінці (виконається хоча б 1 раз)

    result_v = (long)sum_v * sum_v * sum_v;
    printf("V) Cycle do-while: %ld\n", result_v);

    return 0;
}