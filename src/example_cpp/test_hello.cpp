#include "gtest/gtest.h"
#include "hello_lib.h"

TEST(HelloTest, GreetSomeone) {
  EXPECT_EQ(greet("Jesus"), "Hello Jesus");
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
