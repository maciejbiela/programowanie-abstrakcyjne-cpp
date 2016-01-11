#include "gtest/gtest.h"

#include <cmath>
#include "Pi.h"

const int worst{5};
const int better{30};
const int best{100};

TEST(PiTests, TestValuesAreApproachingPi) {
    double worstPiApproximation = Pi<worst>::value;
    double betterPiApproximation = Pi<better>::value;
    double bestPiApproximation = Pi<best>::value;

    double worstPiApproximationError = std::abs(worstPiApproximation - M_PI);
    double betterPiApproximationError = std::abs(betterPiApproximation - M_PI);
    double bestPiApproximationError = std::abs(bestPiApproximation - M_PI);

    ASSERT_TRUE((worstPiApproximationError > betterPiApproximationError) &&
                        (betterPiApproximationError > bestPiApproximationError));
}