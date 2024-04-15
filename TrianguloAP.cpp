#include <iostream>
#include "Triangle.h"
#include <vector>
#include <string>
#include <math.h>
using namespace std;
using namespace Triangulo;

int main()
{
    float ValorBase;
    float ValorAltura;
    Triangle triangle;
    vector<Triangle> listaTriangle;

    cout << "Bienvenidos, por favor ingrese el valor de la base" << endl;
    cin >> ValorBase;
    triangle.setBase(ValorBase);

    cout << "Ahora el valor de la altura" << endl;
    cin >> ValorAltura;
    triangle.setHeight(ValorAltura);

    cout << "Valor del area: " << triangle.getArea() << endl;
    cout << "Valor de la hipotenusa:" << triangle.getHypotenuse() << endl;
    cout << "Valor del perimetro" << triangle.getPerimeter() << endl;
}
