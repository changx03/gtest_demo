#include <gtest/gtest.h>

#include <vector>

const std::vector<int> my_vect{1, 2, 3};

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

// Intentionally to create a failed test.
TEST(Test2, NotEqual) {
  // Expect equality.
  EXPECT_NE(42, 42);
}

TEST(Test3, CheckVector) {
  EXPECT_EQ(my_vect.size(), 3);
}
