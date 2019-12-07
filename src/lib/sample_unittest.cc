#include "sample.h"

#include <gtest/gtest.h>

using template_repository::pathfinder;
using template_repository::words_checker;


TEST(SampleTest, pathfinder) {
  EXPECT_EQ( pathfinder("rutext.txt"), true);
  EXPECT_EQ( pathfinder("0"), false);
  EXPECT_EQ( pathfinder("rutext.tx"), false);
}

TEST(SampleTest, words_checker) {
  
  std::map<std::string, size_t> k;
  ++k["слово"];

  EXPECT_EQ(words_checker(k), true);
  
  k.clear();
  
  EXPECT_EQ(words_checker(k), false);
}
