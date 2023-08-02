#define _USE_MATH_DEFINES
#include "shape.h"
#include <cmath>

Shape::Shape(Type type, int x1, int y1, int z1, int x2, int y2, int z2, int x3, int y3, int z3, int x4, int y4, int z4, int x5, int y5, int z5, int x6, int y6, int z6, int x7, int y7, int z7, int x8, int y8, int z8)
{
    this->type = type;

    for (int i = 0; i < 8; i++) {
        x[i] = 0;
        y[i] = 0;
        z[i] = 0;
    }

    switch (type)
    {
    case LINE:
        x[0] = x1; y[0] = y1;
        x[1] = x2; y[1] = y2;
        break;
    case SQUARE:
        x[0] = x1; y[0] = y1;
        x[1] = x2; y[1] = y2;
        x[2] = x3; y[2] = y3;
        x[3] = x4; y[3] = y4;
        break;
    case CUBE:
        x[0] = x1; y[0] = y1; z[0] = z1;
        x[1] = x2; y[1] = y2; z[1] = z2;
        x[2] = x3; y[2] = y3; z[2] = z3;
        x[3] = x4; y[3] = y4; z[3] = z4;
        x[4] = x5; y[4] = y5; z[4] = z5;
        x[5] = x6; y[5] = y6; z[5] = z6;
        x[6] = x7; y[6] = y7; z[6] = z7;
        x[7] = x8; y[7] = y8; z[7] = z8;
        break;
    default:
        break;
    }

    // Вычисляем площадь и объем фигуры
    switch (type)
    {
    case LINE:
        square = 0.0;
        volume = 0.0;
        break;
    case SQUARE:
    {
        int a = abs(x[0] - x[1]);
        int b = abs(y[0] - y[1]);
        square = a * b;
        volume = 0.0;
    }
    break;
    case CUBE:
    {
        int a = abs(x[0] - x[1]);
        int b = abs(y[0] - y[1]);
        int c = abs(z[0] - z[1]);
        square = 2 * a * b + 2 * a * c + 2 * b * c;
        volume = a * b * c;
    }
    break;
    default:
        break;
    }
}

Shape::Shape(Type type, int x1, int y1, double R, double H)
{
    this->type = type;
    x[0] = x1; y[0] = y1;

    switch (type)
    {
    case CIRCLE:
        radius = R;
        square = M_PI * R * R;
        volume = 0.0;
        break;
    case CYLINDER:
        radius = R;
        height = H;
        square = M_PI * R * R + 2 * M_PI * R * H;
        volume = M_PI * R * R * H;
        break;
    default:
        break;
    }
}
