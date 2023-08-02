#pragma once
#pragma once
#include <string>

class Shape
{
public:
    enum Type {
        LINE,
        SQUARE,
        CUBE,
        CIRCLE,
        CYLINDER
    };

    Shape() = default;
    Shape(Type type, int x1, int y1, int z1, int x2, int y2, int z2, int x3, int y3, int z3, int x4, int y4, int z4, int x5, int y5, int z5, int x6, int y6, int z6, int x7, int y7, int z7, int x8, int y8, int z8);
    Shape(Type type, int x1, int y1, double R, double H);

    Type getType() const { return type; }
    double getVolume() const { return volume; }
    double getSquare() const { return square; }

private:
    Type type;
    int x[8] = { 0 };
    int y[8] = { 0 };
    int z[8] = { 0 };
    double volume = 0.0;
    double square = 0.0;
    double height = 0.0;
    double radius = 0.0;

    friend class Transform;
};