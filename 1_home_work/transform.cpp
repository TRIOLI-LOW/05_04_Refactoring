#include "transform.h"

Transform::Transform(const Shape& sh)
{
    shape = sh;
}

Shape Transform::shift(int m, int n, int k)
{
    switch (shape.getType())
    {
    case Shape::LINE:
    case Shape::SQUARE:
    case Shape::CUBE:
        for (int i = 0; i < 8; i++) {
            shape.x[i] += m;
            shape.y[i] += n;
            shape.z[i] += k;
        }
        break;
    default:
        break;
    }

    return shape;
}

Shape Transform::scaleX(int a)
{
    switch (shape.getType())
    {
    case Shape::LINE:
    case Shape::SQUARE:
    case Shape::CUBE:
        for (int i = 0; i < 8; i++) {
            shape.x[i] *= a;
        }
        break;
    default:
        break;
    }

    return shape;
}

Shape Transform::scaleY(int d)
{
    switch (shape.getType())
    {
    case Shape::LINE:
    case Shape::SQUARE:
    case Shape::CUBE:
        for (int i = 0; i < 8; i++) {
            shape.y[i] *= d;
        }
        break;
    default:
        break;
    }

    return shape;
}

Shape Transform::scaleZ(int e)
{
    switch (shape.getType())
    {
    case Shape::LINE:
    case Shape::SQUARE:
    case Shape::CUBE:
        for (int i = 0; i < 8; i++) {
            shape.z[i] *= e;
        }
        break;
    default:
        break;
    }

    return shape;
}

Shape Transform::scale(int s)
{
    switch (shape.getType())
    {
    case Shape::LINE:
    case Shape::SQUARE:
    case Shape::CUBE:
        for (int i = 0; i < 8; i++) {
            shape.x[i] /= s;
            shape.y[i] /= s;
            shape.z[i] /= s;
        }
        break;
    default:
        break;
    }

    return shape;
}
