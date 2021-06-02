#pragma once
#include<cmath>
/*Triangle->RightAngled*/
class Triangle
{
public:
	Triangle(const double a = 0.0,													//Конструктор класса Triangle	(стороны:	а
			const double b = 0.0,													//											в
			const double c = 0.0);													//											с)
	virtual ~Triangle();															//
	Triangle(Triangle& other);														//Конструктор копирования		(другой объект класса)
	const double getSideA();														//Получение значения поля: сторна а
	const double getSideB();														//Получение значения поля: сторна в
	const double getSideC();														//Получение значения поля: сторна с
	void setSideA(const double a);													//Изменение значения поля: сторна а		(новое значение стороны а)
	void setSideB(const double b);													//Изменение значения поля: сторна в		(новое значение стороны в)
	void setSideC(const double c);													//Изменение значения поля: сторна с		(новое значение стороны с)
	const double getAngleA();														//Получение значения угла, лежащего против стороны а
	const double getAngleB();														//Получение значения угла, лежащего против стороны в
	const double getAngleC();														//Получение значения угла, лежащего против стороны с
	const double getPerimeter();													//Получение значения периметра треугольника
protected:
	const int calculateAngle(const double a, const double b, const double c);		//Вычисление значения угла		(сторона а, сторона в, сторона с)
	double sideA{0.0},																//Поле:	сторона а
			sideB{0.0},																//Поле:	сторона в
			sideC{0.0};																//Поле:	сторона с
	const bool valueEnteredCorrectly(const double value);							//Проверка на правильность введенного значения
};