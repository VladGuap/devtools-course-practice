// Copyright 2022 Chuplygin Vladislav

#include "include/B64_app.h"

#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

#include "include/B64.h"

CLPApplication::CLPApplication() {}

std::string CLPApplication::operator()(int argc, const char** argv) {
  std::ostringstream os;

  if (argc == 1) {
    return this->argument_error();
  }
  if (std::string(argv[1]) == "--help" || std::string(argv[1]) == "-h") {
    return this->help();
  }
  int i = 1;

  if (std::string(argv[i]) == "--test1" || std::string(argv[i]) == "-t1") {
    std::string test_string = argv[2];
    std::string exp_result = "UVdFUlRZ";

    std::string encoded_string = encode(&test_string[0], test_string.size());

    // ASSERT_EQ(encoded_string, exp_result);
    os << encoded_string;
    std::cout << os.str() << std::endl;
    return "success";
  }
  if (std::string(argv[i]) == "--test2" || std::string(argv[i]) == "-t2") {
    std::string test_string = argv[2];
    std::string exp_result = "UVdFUlRZ";

    std::string encoded_string = encode(&test_string[0], test_string.size());

    // ASSERT_EQ(encoded_string, exp_result);
    os << encoded_string;
    std::cout << os.str() << std::endl;
    return "success";
  }
  if (std::string(argv[i]) == "--test3" || std::string(argv[i]) == "-t3") {
    std::string test_string = argv[2];
    std::string exp_result = "UVdFUlRZ";

    std::string encoded_string = encode(&test_string[0], test_string.size());

    // ASSERT_EQ(encoded_string, exp_result);
    os << encoded_string;
    std::cout << os.str() << std::endl;
    return "success";
  }
  return "success";
}

std::string CLPApplication::help() {
  std::string help = "This program considers the integral";
  return help;
}

std::string CLPApplication::argument_error() {
  std::string error = "Invalid argument amount, try --help or -h commands";
  return error;
}
