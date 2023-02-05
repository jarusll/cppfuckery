#include <gtest/gtest.h>
#include <gmock/gmock.h>
// #include "Soundex.hpp"

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

class Soundex
{
  public:
  std::string encode(std::string word){
    return "";
  }
};

TEST(Soundex, RetainsSoleLetterOfOneLetterWord)
{
  Soundex soundex;
  auto encoded = soundex.encode("A");
}
