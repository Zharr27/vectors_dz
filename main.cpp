#include <iostream>
#include "Vector2.h"

int main (){
    Vector2 a(1.0, 2.0);
//Декартовы координаты
    std::cout << "X = " << a.getX() << std::endl;
    std::cout << "Y = " << a.getY() << std::endl;
//Полярные координаты
    std::cout << "Len = " << a.getLen() << std::endl;
    std::cout << "Phi = " << a.getPhi() << std::endl;
    std::cout << "              " << std::endl;

    Vector2 b(2.0, 3.0);
//Декартовы координаты
    std::cout << "X = " << b.getX() << std::endl;
    std::cout << "Y = " << b.getY() << std::endl;
//Полярные координаты
    std::cout << "Len = " << b.getLen() << std::endl;
    std::cout << "Phi = " << b.getPhi() << std::endl;
    std::cout << "              " << std::endl;
//Векторы в ПСК
    std::cout << "Vector a v PSK = " << std::endl;
    std::cout << "r and Phi " << a.to_PSK() << std::endl;
    std::cout << "              " << std::endl;
//Оператор сложения
    std::cout << "Slozhenie vectorov: " << std::endl;
    //Декартовы координаты
    std::cout << "X = " << (a+b).getX() << std::endl;
    std::cout << "y = " << (a+b).getY() << std::endl;
    //Полярные координаты
    std::cout << "Len = " << (a+b).getLen() << std::endl;
    std::cout << "Phi = " << (a+b).getPhi() << std::endl;
    std::cout << "              " << std::endl;

//Оператор умножения векторов
    std::cout <<  "Umnozhenie vectorov =  " << a*b << std::endl;
    std::cout << "              " << std::endl;

//Оператор деления
    std::cout << "Delenie vectora na 3 = " << std::endl;
    //Декартовы координаты
    std::cout << "X = " << (a/3).getX() << std::endl;
    std::cout << "y = " << (a/3).getY() << std::endl;
    //Полярные координаты
    std::cout << "Len = " << (a/3).getLen() << std::endl;
    std::cout << "Phi = " << (a/3).getPhi() << std::endl;
    std::cout << "              " << std::endl;

//Умножение
    //Декартовы координаты
    std::cout << "X = " << (a*3).x << std::endl;
    std::cout << "y = " << (a*3).y << std::endl;
    //Полярные координаты
    std::cout << "Umnozhenie vectora na 3 " << std::endl;
    std::cout << "Len = " << (a*3).getLen() << std::endl;
    std::cout << "Phi = " << (a*3).getPhi() << std::endl;
    std::cout << "              " << std::endl;

//Сравнение
    std::cout << "Vectora ravni? = " << (a==b) << std::endl;
    std::cout << "Vectora ne ravni? = " << (a!=b) << std::endl;
    std::cout << "              " << std::endl;

//Косое скалярное произведение
    std::cout << "Skew dot product =  " << a.skew_dot_product(b) << std::endl;
    std::cout << "              " << std::endl;

//Нормализация вектора
    std::cout << "Norma dlya vectora a (x)" << a.Norm().x << std::endl;
    std::cout << "Norma dlya vectora a (y)" << a.Norm().y << std::endl;
    std::cout << "              " << std::endl;

//Изменение длины
    std::cout << "Ismenenie dlini vectora a na 5 = " << std::endl;
    //Декартовы координаты
    std::cout << "X = " << (a.change_Len(5)).x << std::endl;
    std::cout << "y = " << (a.change_Len(5)).y << std::endl;
    //Полярные координаты
    std::cout << "Len = " << (a.change_Len(5)).getLen() << std::endl;
    std::cout << "Phi = " << (a.change_Len(5)).getPhi() << std::endl;
    std::cout << "              " << std::endl;

//Изменение угла
    std::cout << "Ismenenie ugla vectora a na 45 = " << std::endl;
    //Декартовы координаты
    std::cout << "X = " << (a.change_Phi(45)).x << std::endl;
    std::cout << "y = " << (a.change_Phi(45)).y << std::endl;
    //Полярные координаты
    std::cout << "Len = " << (a.change_Phi(45)).getLen() << std::endl;
    std::cout << "Phi = " << (a.change_Phi(45)).getPhi() << std::endl;
    std::cout << "              " << std::endl;

//Косинусное расстояние
    std::cout << "Cos distance = " << a.cos_distance(b) << std::endl;
    std::cout << "              " << std::endl;

    return 0;
}

















