// Copyright 2022 Chuplygin Vladislav

#ifndef MODULES_VITULIN_IVAN_BASE64_INCLUDE_B64_APP_H_
#define MODULES_VITULIN_IVAN_BASE64_INCLUDE_B64_APP_H_

#include <string>

class CLPApplication {
 public:
  CLPApplication();
  std::string operator()(int argc, const char** argv);

 private:
  std::string help();
  std::string argument_error();
};

#endif  //  MODULES_VITULIN_IVAN_BASE64_INCLUDE_B64_APP_H_
