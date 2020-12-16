#include <gtest/gtest.h>
#include "sum.h"

TEST(tdd_exercise, sum)
{
    EXPECT_EQ(sum(5, 2), 7);
    EXPECT_NE(sum(1, 1), 1);
}

