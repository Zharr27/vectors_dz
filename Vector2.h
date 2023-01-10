
#ifndef HELLO_WORLD_VECTOR2_H
#define HELLO_WORLD_VECTOR2_H


class Vector2 {
public:
    double x, y;

    Vector2();
    Vector2(double _x, double _y);

    double getLen();

    void setX(double _x);
    double getX();
    void setY(double _y);
    double getY();

    double getPhi();

    Vector2 operator+(const Vector2& vector) const;
    Vector2 operator+=(const Vector2& vector) const;
    Vector2 operator*(const double & a) const;
    double operator*(const Vector2& vector) const;
    Vector2 operator*=(const double & a) const;
    Vector2 operator/(const double & a) const;
    Vector2 operator/=(const double & a) const;
    bool operator==(const Vector2& vector) const;
    bool operator!=(const Vector2& vector) const;
    double skew_dot_product( Vector2& vector) const;
    Vector2 Norm() const;
    Vector2 change_Len(const double& a) const;
    Vector2 change_Phi(const double& phi) const;
    double cos_distance(const Vector2& vector) const;

    double to_PSK();
};


#endif //HELLO_WORLD_VECTOR2_H
