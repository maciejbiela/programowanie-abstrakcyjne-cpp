template<int n, int k>
struct BinomialCoefficient {
    enum {
        value = BinomialCoefficient<n - 1, k - 1>::value + BinomialCoefficient<n - 1, k>::value
    };
};

template<int n>
struct BinomialCoefficient<n, n> {
    enum {
        value = 1
    };
};

template<int n>
struct BinomialCoefficient<n, 0> {
    enum {
        value = 1
    };
};