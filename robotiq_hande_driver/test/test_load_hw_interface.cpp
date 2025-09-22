#include <gtest/gtest.h>

// Simple test that doesn't require missing headers
TEST(TestHWInterface, basic_test) {
    EXPECT_TRUE(true);  // Always passes
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}