#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ".UTF8");
    int N;
    double S = 0.0; // Инициализация вещественной суммы ряда

    printf("Введите целое число N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        S += 1.0 / i;
    }

    printf("Вещественное значение суммы ряда: %.6f\n", S);
    return 0;
}
