#pragma once
#include"Triangle.h"
class RightAngled : public Triangle		//protectd
{
public:
	RightAngled(const double a = 0.0,		//Конструктор класса RightAngled	(стороны:	а
		const double b = 0.0,				//												в
		const double c = 0.0);				//												с)
	virtual ~RightAngled();					//
	const double getSquare();				//Получение площади
private:
	double square{ 0.0 };					//Поле площади
};