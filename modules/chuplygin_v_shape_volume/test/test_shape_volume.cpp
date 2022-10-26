// Copyright 2022 Chuplygin Vladislav

#include <gtest/gtest.h>

#include "include/shape_volume.h"

TEST(ShapeVolumeTest, Default) { ASSERT_NO_THROW(ShapeVolume()); }
TEST(ShapeVolumeTest, Param) { ASSERT_NO_THROW(ShapeVolume(1.5, 2.3)); }
TEST(ShapeVolumeTest, SectionBall1) {
  ShapeVolume v;
  double x = 5;
  double S = v.BallArea(x);
  ASSERT_EQ(S, PI * x * x);
}
TEST(ShapeVolumeTest, SectionBall2) {
  ShapeVolume v;
  double x = -4;
  double S = v.BallArea(x);
  ASSERT_EQ(S, PI * x * x);
}
TEST(ShapeVolumeTest, VolumeBall1) {
  ShapeVolume v;
  double a = 0;
  double b = 0;
  double V = v.BallVolume(a, b, 1000);
  ASSERT_EQ(V, 0);
}
TEST(ShapeVolumeTest, VolumeBall2) {
  ShapeVolume v;
  double a = 0;
  double b = 1;
  double V = v.BallVolume(a, b, 1000);
  ASSERT_NEAR(V, 1.045, 0.005);
}
TEST(ShapeVolumeTest, VolumeBall3) {
  ShapeVolume v;
  double a = -1;
  double b = 5;
  double V = v.BallVolume(a, b, 1000);
  ASSERT_NEAR(V, 131.65, 0.005);
}
TEST(ShapeVolumeTest, VolumeCube1) {
  ShapeVolume v;
  double a = 0;
  double b = 1;
  double V = v.CubeVolume(a, b);
  ASSERT_NEAR(V, 1, 0.00005);
}
TEST(ShapeVolumeTest, VolumeCube2) {
  ShapeVolume v;
  double a = -5;
  double b = 10;
  double V = v.CubeVolume(a, b);
  ASSERT_NEAR(V, 3375, 0.00005);
}
