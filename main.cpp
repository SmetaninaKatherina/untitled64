#include <gtest/gtest.h>
#include "Calculator.h"

TEST(BasicTests, SumCheck) {
    ASSERT_EQ(parseSign('+'), SUM);
    EXPECT_EQ(sum(1, 2), 3);
    EXPECT_EQ(sum(657, 111), 768);
}

TEST(BasicTests, SubCheck) {
    ASSERT_EQ(parseSign('-'), SUB);
    EXPECT_EQ(sub(1, 2), -1);
    EXPECT_EQ(sub(657, 111), 546);
}

TEST(BasicTests, MultCheck) {
    ASSERT_EQ(parseSign('*'), MULT);
    EXPECT_EQ(mult(1, 2), 3);
    EXPECT_EQ(mult(657, 111), 72927);
}

TEST(BasicTests, DivCheck) {
    ASSERT_EQ(parseSign('/'), DIV);
    EXPECT_EQ(divis(1, 2), 0);
    EXPECT_EQ(divis(657, 111), 5);
}
