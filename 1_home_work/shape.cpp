#define _USE_MATH_DEFINES
#include "shape.h"
#include <cmath>

// Конструктор для базового класса Shape
Shape::Shape(Type type) : type(type), square(0.0), volume(0.0), height(0.0), radius(0.0)
{
    // Инициализируем все параметры значением по умолчанию
    for (int i = 0; i < 8; i++) {
        x[i] = 0;
        y[i] = 0;
        z[i] = 0;
    }
}

// Реализация методов для трансформаций вынесена в производные классы.

// Конструктор для линии
Line::Line(int x1, int y1, int x2, int y2) : Shape(LINE)
{
    x[0] = x1; y[0] = y1;
    x[1] = x2; y[1] = y2;
}

void Line::shift(int m, int n, int k) {  }
void Line::scaleX(int a) {  }
void Line::scaleY(int d) {  }
void Line::scaleZ(int e) { }
void Line::scale(int s) {  }

// Конструктор для квадрата
Square::Square(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) : Shape(SQUARE)
{
    x[0] = x1; y[0] = y1;
    x[1] = x2; y[1] = y2;
    x[2] = x3; y[2] = y3;
    x[3] = x4; y[3] = y4;
}

void Square::shift(int m, int n, int k) { }
void Square::scaleX(int a) {  }
void Square::scaleY(int d) {  }
void Square::scaleZ(int e) {}
void Square::scale(int s) {}

// Конструктор для куба
Cube::Cube(int x1, int y1, int z1, int x2, int y2, int z2, int x3, int y3, int z3, int x4, int y4, int z4, int x5, int y5, int z5, int x6, int y6, int z6, int x7, int y7, int z7, int x8, int y8, int z8) : Shape(CUBE)
{
    x[0] = x1; y[0] = y1; z[0] = z1;
    x[1] = x2; y[1] = y2; z[1] = z2;
    x[2] = x3; y[2] = y3; z[2] = z3;
    x[3] = x4; y[3] = y4; z[3] = z4;
    x[4] = x5; y[4] = y5; z[4] = z5;
    x[5] = x6; y[5] = y6; z[5] = z6;
    x[6] = x7; y[6] = y7; z[6] = z7;
    x[7] = x8; y[7] = y8; z[7] = z8;
}

void Cube::shift(int m, int n, int k) {  }
void Cube::scaleX(int a) { }
void Cube::scaleY(int d) {  }
void Cube::scaleZ(int e) {  }
void Cube::scale(int s) {  }
