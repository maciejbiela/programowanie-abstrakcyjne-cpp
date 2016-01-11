template<int n>
struct Pi {
    static const int sign = (n % 2 == 0) ? 1 : -1;
    static constexpr double value = (sign * 4.0) / ((2 * n) + 1) + Pi<n - 1>::value;
};

template<>
struct Pi<0> {
    static constexpr double value = 4;
};
