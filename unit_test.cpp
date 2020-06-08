#include "gtest/gtest.h"


#include "calc_test.cpp"
#include "decorator_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
