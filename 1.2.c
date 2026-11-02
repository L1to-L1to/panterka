#include <stdio.h>
#include <math.h>

/**
 * @brief Вычисляет объем конуса по заданной формуле
 * @param R радиус шара
 * @param a угол при вершине конуса в градусах
 * @return рассчитанное значение объема
 */
double A(const double R, const double a);

/**
 * @brief Вычисляет полную площадь поверхности конуса
 * @param R радиус шара
 * @param a угол при вершине конуса в градусах
 * @return рассчитанное значение площади
 */
double B(const double R, const double a);

/**
 * @brief точка входа в программу
 * @return возвращает 0, если программа выполнена корректно
 */
int main()
{
    double R, a;

    printf("Введите радиус шара R: ");
    if (scanf("%lf", &R) != 1)
    {
        printf("Ошибка ввода радиуса\n");
        return 1;
    }

    printf("Введите угол a в градусах: ");
    if (scanf("%lf", &a) != 1)
    {
        printf("Ошибка ввода угла\n");
        return 1;
    }

    if (R <= 0 || a <= 0 || a >= 180)
    {
        printf("Ошибка: R > 0, 0 < a < 180\n");
        return 1;
    }

    printf("R = %.3f\n", R);
    printf("a = %.3f\n", a);

    printf("V = %.3f\n", A(R, a));
    printf("S = %.3f\n", B(R, a));

    return 0;
}

double A(const double R, const double a)
{
    const double PI = acos(-1.0);
    double angle = a * PI / 180.0;

    double r = R * sin(angle);
    double h = R * (1 + cos(angle));

    return PI * pow(r, 2.0) * h / 3.0;
}

double B(const double R, const double a)
{
    const double PI = acos(-1.0);
    double angle = a * PI / 180.0;

    double r = R * sin(angle);
    double h = R * (1 + cos(angle));
    double l = sqrt(pow(r, 2.0) + pow(h, 2.0));

    return PI * r * (r + l);
}