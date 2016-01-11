template<int a, int b>
struct GCD {
    enum {
        value = GCD<b, a % b>::value
    };
};

template<int a>
struct GCD<a, 0> {
    enum {
        value = a
    };
};
