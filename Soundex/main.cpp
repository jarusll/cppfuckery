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
  std::string encode(std::string word)
  {
    std::string result = "";
    for (int i = 0; i < word.size(); ++i)
    {
      if ((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z'))
      {
        result = result + word[i];
      }
    }
    return result;
  };
};

TEST(Soundex, IgnoresAllCharactersExceptAlphabets)
{
  Soundex soundex;
  auto encoded = soundex.encode("A.#*");
  ASSERT_THAT(encoded, ::testing::Eq("A"));
}

TEST(Soundex, RetainsSoleLetterOfOneLetterWord)
{
  Soundex soundex;
  auto encoded = soundex.encode("A");
  ASSERT_THAT(encoded, ::testing::Eq("A"));
}
