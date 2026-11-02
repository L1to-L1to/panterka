
#include <stdio.h>
#include <math.h>

/**
 * @brief Вычисляет путь, пройденный автомобилем
 * @param F сила тяги в кН
 * @param A совершенная работа в МДж
 * @return рассчитанное значение пути в метрах
 */
double S(const double F, const double A);

/**
 * @brief точка входа в программу
 * @return возвращает 0, если программа выполнена корректно
 */
int main()
{
    double F, A;

    printf("Введите силу тяги F (кН): ");
    if (scanf("%lf", &F) != 1)
    {
        printf("Ошибка ввода силы\n");
        return 1;
    }

    printf("Введите работу A (МДж): ");
    if (scanf("%lf", &A) != 1)
    {
        printf("Ошибка ввода работы\n");
        return 1;
    }

    if (F <= 0 || A < 0)
    {
        printf("Ошибка: F > 0, A >= 0\n");
        return 1;
    }

    printf("F = %.3f кН\n", F);
    printf("A = %.3f МДж\n", A);

    printf("S = %.3f м\n", S(F, A));

    return 0;
}

double S(const double F, const double A)
{
    return (A * 1000) / F;
}
