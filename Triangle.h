#pragma once
#include <string>

using namespace std;

namespace Triangulo
{
	class Triangle 
	{
	public:
		float Base;
		float Height;
		//const destructores
		Triangle(float base = 0, float altura = 0);
		~Triangle();
		
		//gets and sets

		void setBase(float base);
		float getBase();

		void setHeight(float altura);
		float getHeight();

		float getArea();

		float getHypotenuse();

		float getPerimeter();
	};
}