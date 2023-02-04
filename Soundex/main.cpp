#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Soundex.hpp"

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(Soundex, isPresent)
{
  Soundex soundex;
}
