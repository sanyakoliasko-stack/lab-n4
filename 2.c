#include <stdio.h>
#include <math.h>
int main() {
    int choice;
    int start = 10, end = 20;
    long long sum, result;
    printf("Оберіть тип циклу для обчислення куба суми парних чисел у (10; 20]:\n");
    printf("1 - Цикл з параметром (for)\n");
    printf("2 - Цикл з передумовою (while)\n");
    printf("3 - Цикл з післяумовою (do-while)\n");
    printf("Ваш вибір: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            sum = 0;
            for (int i = start + 1; i <= end; i++) {
                if (i % 2 == 0) {
                    sum += i;
                }
            }
            result = pow(sum, 3);
            printf("\n[FOR] Сума парних: %lld. Куб суми: %lld\n", sum, result);
            break;

        case 2:
        
            sum = 0;
            int j = start + 1;
            while (j <= end) {
                if (j % 2 == 0) {
                    sum += j;
                }
                j++;
            }
            result = pow(sum, 3);
            printf("\n[WHILE] Сума парних: %lld. Куб суми: %lld\n", sum, result);
            break;
        case 3:
            sum = 0;
            int k = start + 1;
            if (k <= end) {
                do {
                    if (k % 2 == 0) {
                        sum += k;
                    }
                    k++;
                } while (k <= end);
            }
            result = pow(sum, 3);
            printf("\n[DO-WHILE] Сума парних: %lld. Куб суми: %lld\n", sum, result);
            break;

        default:
            printf("\nПомилка: Неправильний вибір варіанту (введіть 1, 2 або 3).\n");
            break;
    }

    return 0;
}