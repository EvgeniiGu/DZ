#include"GeometricFigures.h"

void GeometricFigure::setRadius(const double rad) { if (rad >= 0.0) radius_ = rad; }
void GeometricFigure::setHeight(const double hei) { if (hei >= 0.0) height_ = hei; }
GeometricFigure::~GeometricFigure() {}