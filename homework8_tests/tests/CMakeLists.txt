include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runBinomialCoefficientTests
        BinomialCoefficientTests.cpp)

add_executable(runFactorialTests
        FactorialTests.cpp)

add_executable(runFibonacciTests
        FibonacciTests.cpp)

add_executable(runGCDTests
        GCDTests.cpp)

add_executable(runPiTests
        PiTests.cpp)

add_executable(runAllTests
        BinomialCoefficientTests.cpp
        FactorialTests.cpp
        FibonacciTests.cpp
        GCDTests.cpp
        PiTests.cpp)

target_link_libraries(runBinomialCoefficientTests gtest gtest_main)
target_link_libraries(runFactorialTests gtest gtest_main)
target_link_libraries(runFibonacciTests gtest gtest_main)
target_link_libraries(runGCDTests gtest gtest_main)
target_link_libraries(runPiTests gtest gtest_main)
target_link_libraries(runAllTests gtest gtest_main)