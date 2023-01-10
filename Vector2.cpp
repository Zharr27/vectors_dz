
#include <iostream>
#include <cmath>
#include "Vector2.h"



const double PI = acos(-1.0);
Vector2::Vector2(): x(0.0), y (0.0) {};
Vector2::Vector2(double _x, double _y): x(_x), y (_y) {};

void Vector2::setX(double _x){
    x = _x;
}
void Vector2::setY(double _y){
    y = _y;
}
//векторы
double Vector2::getX(){
    return x;
}
double Vector2::getY(){
    return y;
}
//Полярные координаты
double Vector2::getLen(){
    return std::sqrt(x*x + y*y);
}

double Vector2::getPhi(){
    return std::atan2(y, x)*180/ PI;
}

double Vector2::to_PSK(){
    std::pair<double, double> PSK;
    PSK.first = Vector2(x,y).getLen();
    PSK.second = Vector2(x,y).getPhi();
    return (PSK.first, PSK.second);
}

//Оператор сложения
Vector2 Vector2::operator+(const Vector2& vector) const{
    return Vector2(x + vector.x, y + vector.y);
}

Vector2 Vector2::operator+=(const Vector2& vector) const{
    return operator+(vector);
}

//Оператор умножения
Vector2 Vector2::operator*(const double& a) const{
    return Vector2(x * a, y * a);
}

Vector2 Vector2::operator*=(const double& a) const{
    return Vector2(x,y)*(a);
}
//Оператор скалярного умножения
double Vector2::operator*(const Vector2& vector) const {
    return  Vector2(x,y).x * vector.x  + Vector2(x,y).y * vector.y;
}

//Операторы сравнения
bool Vector2::operator==(const Vector2& vector) const {
    return( (Vector2(x,y).x == vector.x) && (Vector2(x,y).y == vector.y));
}

bool Vector2::operator!=(const Vector2& vector) const {
    return !((Vector2(x, y).x == vector.x) && (Vector2(x, y).y == vector.y));
}
//Оператор деления
Vector2 Vector2::operator/(const double& a) const{
    return Vector2(x / a, y / a);
}

Vector2 Vector2::operator/=(const double& a) const{
    return Vector2(x,y)/(a);
}
//Косое скалярное произведение
double Vector2::skew_dot_product( Vector2& vector) const{
    double phi = acos( ( (Vector2(x,y).x * vector.x) + (Vector2(x,y).y * vector.y) ) /
                       (Vector2(x,y).getLen() * vector.getLen()) );
    return Vector2(x,y).getLen()*vector.getLen()*sin(phi);
}
//Нормализация вектора
Vector2 Vector2::Norm() const{
    return Vector2(x/(Vector2(x,y).getLen()), y/(Vector2(x,y).getLen()));
}

//Изменение длины
Vector2 Vector2::change_Len(const double& a) const {
    return Vector2(Vector2(x,y).getX()*a/Vector2(x,y).getLen(),
                   Vector2(x,y).getY()*a/Vector2(x,y).getLen());
}
//Изменение угла
Vector2 Vector2::change_Phi(const double& phi) const {
    return Vector2(Vector2(x,y).getLen()*cos(phi*PI/180),
                   Vector2(x,y).getLen()*sin(phi*PI/180));
}
//Косинусное расстояние между векторами
double Vector2::cos_distance(const Vector2& vector) const {
    return ( Vector2(x,y).x*(vector.x) + Vector2(x,y).y*(vector.y)   )/
           ( Vector2(x,y).getLen() * Vector2(vector.x,vector.y).getLen() );
}
