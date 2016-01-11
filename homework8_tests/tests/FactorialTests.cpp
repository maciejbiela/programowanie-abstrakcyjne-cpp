#include "gtest/gtest.h"

#include "Factorial.h"

const int n{5};
const int actualNFactorial{120};

TEST(FactorialTests, TestZeroFactorial) {
    int zeroFactorial = Factorial<0>::value;
    ASSERT_EQ(zeroFactorial, 1);
}

TEST(FactorialTests, TestNFactorial) {
    int nFactorial = Factorial<n>::value;
    ASSERT_EQ(nFactorial, actualNFactorial);
}


