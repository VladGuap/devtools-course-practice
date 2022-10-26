// Copyright 2022 Chuplygin Vladislav

#include "include/shape_volume.h"

#include <math.h>

#include <cmath>
#include <iostream>

ShapeVolume::ShapeVolume() {
  this->a = {5};
  this->b = {10};
  if (b < a) throw "cannot";
}
ShapeVolume::ShapeVolume(double _a, double _b) {
  this->a = _a;
  this->b = _b;
}

double ShapeVolume::BallArea(double x) { return (PI * x * x); }

double ShapeVolume::BallVolume(double a, double b, int n) {
  double h;
  double sum = 0.0;
  h = (b - a) / n;

  for (int i = 0; i < n; i++) {
    sum += BallArea(a + i * h);
  }
  return (sum * h);
}

double ShapeVolume::CubeVolume(double a, double b) {
  return pow((b - a), 3);
}
