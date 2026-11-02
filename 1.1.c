#include <stdio.h>
#include <math.h>

/**
 * @brief Вычисляет значение функции A по заданной формуле
 * @param x значение параметра x
 * @param y значение параметра y
 * @param z значение параметра z
 * @return рассчитанное значение
 */
double A(const double x, const double y, const double z);

/**
 * @brief Вычисляет значение функции B по заданной формуле
 * @param x значение параметра x
 * @param y значение параметра y
 * @param z значение параметра z
 * @return рассчитанное значение
 */
double B(const double x, const double y, const double z);

/**
 * @brief точка входа в программму
 * @return возвращает 0, если программа выполнена корректно
 */
int main()
{
    const double x = 0.5;
    const double y = 0.05;
    const double z = 0.7;

    printf("x = %.2f\n", x);
    printf("y = %.2f\n", y);
    printf("z = %.2f\n", z);

    printf("a = %.3f\n", A(x, y, z));
    printf("b = %.3f", B(x, y, z));

    return 0;
}

double A(const double x, const double y, const double z)
{
    return (pow(x, 2.0) * (x + 1)) /
           (y - pow(sin(x + z), 2.0));
}

double B(const double x, const double y, const double z)
{
    return sqrt((x * y) / z) +
           pow(cos(pow(x + y, 2.0)), 2.0);
}