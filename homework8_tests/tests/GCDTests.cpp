#include "gtest/gtest.h"

#include "GCD.h"

const int n{24};
const int k{12};
const int actualNKGCD{12};
const int p{13};

TEST(GCDTests, TestGCDWithOne) {
    int gcd = GCD<n, 1>::value;
    ASSERT_EQ(gcd, 1);
}

TEST(GCDTests, TestGCDWithOneOtherWayAround) {
    int gcd = GCD<1, n>::value;
    ASSERT_EQ(gcd, 1);
}

TEST(GCDTests, TestNonCoprimeNumbers) {
    int gcd = GCD<n, k>::value;
    ASSERT_EQ(gcd, actualNKGCD);
}

TEST(GCDTests, TestNonCoprimeNumbersOtherWayAround) {
    int gcd = GCD<k, n>::value;
    ASSERT_EQ(gcd, actualNKGCD);
}

TEST(GCDTests, TestCoprimeNumbers) {
    int gcd = GCD<n, p>::value;
    ASSERT_EQ(gcd, 1);
}

TEST(GCDTests, TestCoprimeNumbersOtherWayAround) {
    int gcd = GCD<p, n>::value;
    ASSERT_EQ(gcd, 1);
}


