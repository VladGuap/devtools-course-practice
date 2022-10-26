// Copyright 2022 Chuplygin Vladislav
#ifndef MODULES_CHUPLYGIN_V_SHAPE_VOLUME_INCLUDE_SHAPE_VOLUME_H_
#define MODULES_CHUPLYGIN_V_SHAPE_VOLUME_INCLUDE_SHAPE_VOLUME_H_
#include <math.h>
#include <stdlib.h>
const double PI = 3.14;

class ShapeVolume {
 private:
  double a;
  double b;

 public:
  int n = 100;
  ShapeVolume();
  ShapeVolume(double _a, double _b);
  double BallArea(double x);
  double BallVolume(double a, double b, int n);
  double CubeVolume(double a, double b);
};
#endif  // MODULES_CHUPLYGIN_V_SHAPE_VOLUME_INCLUDE_SHAPE_VOLUME_H_
