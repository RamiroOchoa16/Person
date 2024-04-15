#include "Triangle.h"
#include <string>
#include <iostream>

using namespace std;
using namespace Triangulo;

//Constructores y Destructores

Triangle::Triangle(float base, float altura) : Base{ base }, Height{ altura }
{
	cout << "Datos creados" << endl;
}

Triangle::~Triangle()
{
	cout << "Datos destruidos" << endl;
}

//gets and sets

void Triangle::setBase(float base)
{
	Base = base;
}

float Triangle::getBase()
{
	return Base;
}

void Triangle::setHeight(float altura)
{
	Height = altura;
}

float Triangle::getHeight()
{
	return Height;
}

float Triangle::getArea()
{
	return (Base * Height) / 2;
}

float Triangle::getHypotenuse()
{
	return sqrt(Base * Base + Height * Height);
}

float Triangle::getPerimeter()
{
	return getHypotenuse() + Base + Height;
}