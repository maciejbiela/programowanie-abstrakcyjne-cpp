#include "gtest/gtest.h"

#include "Fibonacci.h"

const int n{6};
const int actualNthFibonacciNumber{8};

TEST(FibonacciTests, TestZerothFibonacciNumber) {
    int zerothFibonacciNumber = Fibonacci<0>::value;
    ASSERT_EQ(zerothFibonacciNumber, 0);
}

TEST(FibonacciTests, TestFirstFibonacciNumber) {
    int firstFibonacciNumber = Fibonacci<1>::value;
    ASSERT_EQ(firstFibonacciNumber, 1);
}

TEST(FibonacciTests, TestNthFibonacciNumber) {
    int nthFibonacciNumber = Fibonacci<n>::value;
    ASSERT_EQ(nthFibonacciNumber, actualNthFibonacciNumber);
}