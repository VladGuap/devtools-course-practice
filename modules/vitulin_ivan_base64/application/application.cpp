// Copyright 2022 Chuplygin Vladislav

#include <iostream>
#include <string>

#include "include/B64_app.h"

int main(int argc, const char** argv) {
  CLPApplication app;
  std::string output = app(argc, argv);
  std::cout << output << std::endl;
  return 0;
}
