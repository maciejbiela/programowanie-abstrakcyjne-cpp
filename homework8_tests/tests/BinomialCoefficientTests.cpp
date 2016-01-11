#include "gtest/gtest.h"

#include "BinomialCoefficient.h"

const int n{16};
const int k{7};
const int actualNChooseK{11440};

TEST(BinomialCoefficientTests, TestNChooseZero) {
    int nChooseZero = BinomialCoefficient<n, 0>::value;
    ASSERT_EQ(nChooseZero, 1);
}

TEST(BinomialCoefficientTests, TestNChooseN) {
    int nChooseN = BinomialCoefficient<n, n>::value;
    ASSERT_EQ(nChooseN, 1);
}

TEST(BinomialCoefficientTests, TestNChooseK) {
    int nChooseK = BinomialCoefficient<n, k>::value;
    ASSERT_EQ(nChooseK, actualNChooseK);
}
