#include <cmath>
#include <numeric>


#include <gtest/gtest.h>
#include "mfg.hpp"



#define PYTHON_LIKE_FUNCTIONS


#ifdef PYTHON_LIKE_FUNCTIONS

// ========================================
// math::ksa (Kahan summation algorithm)
// ========================================
TEST(KsaTest, KsaTest_1) {
    double arr[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    ASSERT_NEAR(math::ksa(arr, 5), 15.0, 1e-9);
}

TEST(KsaTest, KsaTest_2) {
    double arr[] = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0};
    ASSERT_NEAR(math::ksa(arr, 10), 5.5, 1e-9);
}

TEST(KsaTest, KsaTest_3) {
    double arr[] = {-1.0, 2.5, -3.2, 4.8, -5.1};
    ASSERT_NEAR(math::ksa(arr, 5), -2.0, 1e-9);
}

// ========================================
// math::factorial
// ========================================
TEST(FactorialTest, FactorialTest_1) {
    ASSERT_EQ(math::factorial(5), 120);
}

TEST(FactorialTest, FactorialTest_2) {
    ASSERT_EQ(math::factorial(10), 3628800);
}

TEST(FactorialTest, FactorialTest_3) {
    ASSERT_EQ(math::factorial(1), 1);
}

// ========================================
// math::pythonlike::numbertheoretic::factorial
// ========================================
TEST(NumberTheoreticFactorialTest, NumberTheoreticFactorialTest_1) {
    ASSERT_EQ(math::pythonlike::numbertheoretic::factorial<int>(5), 120);
}

TEST(NumberTheoreticFactorialTest, NumberTheoreticFactorialTest_2) {
    ASSERT_EQ(math::pythonlike::numbertheoretic::factorial<long long>(10), 3628800);
}

TEST(NumberTheoreticFactorialTest, NumberTheoreticFactorialTest_3) {
    ASSERT_EQ(math::pythonlike::numbertheoretic::factorial<std::size_t>(7), 5040);
}

// ========================================
// math::pythonlike::numbertheoretic::comb
// ========================================
TEST(CombTest, CombTest_1) {
    ASSERT_EQ(math::pythonlike::numbertheoretic::comb<int>(5, 2), 10);
}

TEST(CombTest, CombTest_2) {
    ASSERT_EQ(math::pythonlike::numbertheoretic::comb<int>(10, 3), 120);
}

TEST(CombTest, CombTest_3) {
    ASSERT_EQ(math::pythonlike::numbertheoretic::comb<int>(6, 6), 1);
}

// ========================================
// math::pythonlike::numbertheoretic::gcd
// ========================================
TEST(GcdTest, GcdTest_1) {
    std::int64_t arr[] = {48, 18, 24};
    ASSERT_EQ(math::pythonlike::numbertheoretic::gcd(arr, 3), 6);
}

TEST(GcdTest, GcdTest_2) {
    std::int64_t arr[] = {100, 25, 75};
    ASSERT_EQ(math::pythonlike::numbertheoretic::gcd(arr, 3), 25);
}

TEST(GcdTest, GcdTest_3) {
    std::int64_t arr[] = {17, 19, 23};
    ASSERT_EQ(math::pythonlike::numbertheoretic::gcd(arr, 3), 1);
}

// ========================================
// math::pythonlike::numbertheoretic::isqrt
// ========================================
TEST(IsqrtTest, IsqrtTest_1) {
    ASSERT_EQ(math::pythonlike::numbertheoretic::isqrt(25), 5);
}

TEST(IsqrtTest, IsqrtTest_2) {
    ASSERT_EQ(math::pythonlike::numbertheoretic::isqrt(100), 10);
}

TEST(IsqrtTest, IsqrtTest_3) {
    ASSERT_EQ(math::pythonlike::numbertheoretic::isqrt(2), 1);
}

// ========================================
// math::pythonlike::numbertheoretic::lcm
// ========================================
TEST(LcmTest, LcmTest_1) {
    std::int64_t arr[] = {4, 6, 8};
    ASSERT_EQ(math::pythonlike::numbertheoretic::lcm(arr, 3), 24);
}

TEST(LcmTest, LcmTest_2) {
    std::int64_t arr[] = {12, 18, 24};
    ASSERT_EQ(math::pythonlike::numbertheoretic::lcm(arr, 3), 72);
}

TEST(LcmTest, LcmTest_3) {
    std::int64_t arr[] = {5, 7, 11};
    ASSERT_EQ(math::pythonlike::numbertheoretic::lcm(arr, 3), 385);
}

// ========================================
// math::pythonlike::numbertheoretic::perm
// ========================================
TEST(PermTest, PermTest_1) {
    ASSERT_EQ(math::pythonlike::numbertheoretic::perm<int>(5, 2), 20);
}

TEST(PermTest, PermTest_2) {
    ASSERT_EQ(math::pythonlike::numbertheoretic::perm<int>(10, 3), 720);
}

TEST(PermTest, PermTest_3) {
    ASSERT_EQ(math::pythonlike::numbertheoretic::perm<int>(4, 4), 24);
}

// ========================================
// math::pythonlike::floatingpoint::arithmetic::ceil
// ========================================
TEST(CeilTest, CeilTest_1) {
    ASSERT_EQ(math::pythonlike::floatingpoint::arithmetic::ceil(3.14), 4.0);
}

TEST(CeilTest, CeilTest_2) {
    ASSERT_EQ(math::pythonlike::floatingpoint::arithmetic::ceil(-3.14), -3.0);
}

TEST(CeilTest, CeilTest_3) {
    ASSERT_EQ(math::pythonlike::floatingpoint::arithmetic::ceil(5.0), 5.0);
}

// ========================================
// math::pythonlike::floatingpoint::arithmetic::fabs
// ========================================
TEST(FabsTest, FabsTest_1) {
    ASSERT_EQ(math::pythonlike::floatingpoint::arithmetic::fabs(-3.14), 3.14);
}

TEST(FabsTest, FabsTest_2) {
    ASSERT_EQ(math::pythonlike::floatingpoint::arithmetic::fabs(5.67), 5.67);
}

TEST(FabsTest, FabsTest_3) {
    ASSERT_EQ(math::pythonlike::floatingpoint::arithmetic::fabs(0.0), 0.0);
}

// ========================================
// math::pythonlike::floatingpoint::arithmetic::floor
// ========================================
TEST(FloorTest, FloorTest_1) {
    ASSERT_EQ(math::pythonlike::floatingpoint::arithmetic::floor(3.14), 3.0);
}

TEST(FloorTest, FloorTest_2) {
    ASSERT_EQ(math::pythonlike::floatingpoint::arithmetic::floor(-3.14), -4.0);
}

TEST(FloorTest, FloorTest_3) {
    ASSERT_EQ(math::pythonlike::floatingpoint::arithmetic::floor(5.0), 5.0);
}

// ========================================
// math::pythonlike::floatingpoint::arithmetic::fma
// ========================================
TEST(FmaTest, FmaTest_1) {
    ASSERT_NEAR(math::pythonlike::floatingpoint::arithmetic::fma(2.0, 3.0, 4.0), 10.0, 1e-9);
}

TEST(FmaTest, FmaTest_2) {
    ASSERT_NEAR(math::pythonlike::floatingpoint::arithmetic::fma(1.5, 2.5, 3.5), 7.25, 1e-9);
}

TEST(FmaTest, FmaTest_3) {
    ASSERT_NEAR(math::pythonlike::floatingpoint::arithmetic::fma(0.0, 5.0, 10.0), 10.0, 1e-9);
}

// ========================================
// math::pythonlike::floatingpoint::arithmetic::fmod
// ========================================
TEST(FmodTest, FmodTest_1) {
    ASSERT_NEAR(math::pythonlike::floatingpoint::arithmetic::fmod(5.7, 2.0), 1.7, 1e-9);
}

TEST(FmodTest, FmodTest_2) {
    ASSERT_NEAR(math::pythonlike::floatingpoint::arithmetic::fmod(10.0, 3.0), 1.0, 1e-9);
}

TEST(FmodTest, FmodTest_3) {
    ASSERT_NEAR(math::pythonlike::floatingpoint::arithmetic::fmod(-5.7, 2.0), -1.7, 1e-9);
}

// ========================================
// math::pythonlike::floatingpoint::arithmetic::modf
// ========================================
TEST(ModfTest, ModfTest_1) {
    auto result = math::pythonlike::floatingpoint::arithmetic::modf(3.14);
    ASSERT_NEAR(result.first, 0.14, 1e-9);
    ASSERT_EQ(result.second, 3.0);
}

TEST(ModfTest, ModfTest_2) {
    auto result = math::pythonlike::floatingpoint::arithmetic::modf(-2.718);
    ASSERT_NEAR(result.first, -0.718, 1e-9);
    ASSERT_EQ(result.second, -2.0);
}

TEST(ModfTest, ModfTest_3) {
    auto result = math::pythonlike::floatingpoint::arithmetic::modf(5.0);
    ASSERT_NEAR(result.first, 0.0, 1e-9);
    ASSERT_EQ(result.second, 5.0);
}

// ========================================
// math::pythonlike::floatingpoint::arithmetic::remainder
// ========================================
TEST(RemainderTest, RemainderTest_1) {
    ASSERT_NEAR(math::pythonlike::floatingpoint::arithmetic::remainder(5.0, 2.0), 1.0, 1e-9);
}

TEST(RemainderTest, RemainderTest_2) {
    ASSERT_NEAR(math::pythonlike::floatingpoint::arithmetic::remainder(10.0, 3.0), 1.0, 1e-9);
}

TEST(RemainderTest, RemainderTest_3) {
    ASSERT_NEAR(math::pythonlike::floatingpoint::arithmetic::remainder(7.5, 2.0), -0.5, 1e-9);
}

// ========================================
// math::pythonlike::floatingpoint::arithmetic::trunc
// ========================================
TEST(TruncTest, TruncTest_1) {
    ASSERT_EQ(math::pythonlike::floatingpoint::arithmetic::trunc(3.14), 3.0);
}

TEST(TruncTest, TruncTest_2) {
    ASSERT_EQ(math::pythonlike::floatingpoint::arithmetic::trunc(-3.14), -3.0);
}

TEST(TruncTest, TruncTest_3) {
    ASSERT_EQ(math::pythonlike::floatingpoint::arithmetic::trunc(5.99), 5.0);
}

// ========================================
// math::pythonlike::floatingpoint::manipulation::copysign
// ========================================
TEST(CopysignTest, CopysignTest_1) {
    ASSERT_EQ(math::pythonlike::floatingpoint::manipulation::copysign(3.14, -1.0), -3.14);
}

TEST(CopysignTest, CopysignTest_2) {
    ASSERT_EQ(math::pythonlike::floatingpoint::manipulation::copysign(-5.0, 2.0), 5.0);
}

TEST(CopysignTest, CopysignTest_3) {
    ASSERT_EQ(math::pythonlike::floatingpoint::manipulation::copysign(0.0, -1.0), -0.0);
}

// ========================================
// math::pythonlike::floatingpoint::manipulation::frexp
// ========================================
TEST(FrexpTest, FrexpTest_1) {
    auto result = math::pythonlike::floatingpoint::manipulation::frexp(8.0);
    ASSERT_NEAR(result.first, 0.5, 1e-9);
    ASSERT_EQ(result.second, 4);
}

TEST(FrexpTest, FrexpTest_2) {
    auto result = math::pythonlike::floatingpoint::manipulation::frexp(16.0);
    ASSERT_NEAR(result.first, 0.5, 1e-9);
    ASSERT_EQ(result.second, 5);
}

TEST(FrexpTest, FrexpTest_3) {
    auto result = math::pythonlike::floatingpoint::manipulation::frexp(0.5);
    ASSERT_NEAR(result.first, 0.5, 1e-9);
    ASSERT_EQ(result.second, 0);
}

// ========================================
// math::pythonlike::floatingpoint::manipulation::isclose
// ========================================
TEST(IsCloseTest, IsCloseTest_1) {
    ASSERT_TRUE(math::pythonlike::floatingpoint::manipulation::isclose(1.0, 1.0000000001));
}

TEST(IsCloseTest, IsCloseTest_2) {
    ASSERT_FALSE(math::pythonlike::floatingpoint::manipulation::isclose(1.0, 1.1));
}

TEST(IsCloseTest, IsCloseTest_3) {
    ASSERT_TRUE(math::pythonlike::floatingpoint::manipulation::isclose(0.1 + 0.2, 0.3));
}

// ========================================
// math::pythonlike::floatingpoint::manipulation::isfinite
// ========================================
TEST(IsfiniteTest, IsfiniteTest_1) {
    ASSERT_TRUE(math::pythonlike::floatingpoint::manipulation::isfinite(42.0));
}

TEST(IsfiniteTest, IsfiniteTest_2) {
    ASSERT_FALSE(math::pythonlike::floatingpoint::manipulation::isfinite(std::numeric_limits<double>::infinity()));
}

TEST(IsfiniteTest, IsfiniteTest_3) {
    ASSERT_FALSE(math::pythonlike::floatingpoint::manipulation::isfinite(std::numeric_limits<double>::quiet_NaN()));
}

// ========================================
// math::pythonlike::floatingpoint::manipulation::isinf
// ========================================
TEST(IsinfTest, IsinfTest_1) {
    ASSERT_TRUE(math::pythonlike::floatingpoint::manipulation::isinf(std::numeric_limits<double>::infinity()));
}

TEST(IsinfTest, IsinfTest_2) {
    ASSERT_FALSE(math::pythonlike::floatingpoint::manipulation::isinf(42.0));
}

TEST(IsinfTest, IsinfTest_3) {
    ASSERT_TRUE(math::pythonlike::floatingpoint::manipulation::isinf(-std::numeric_limits<double>::infinity()));
}

// ========================================
// math::pythonlike::floatingpoint::manipulation::isnan
// ========================================
TEST(IsnanTest, IsnanTest_1) {
    ASSERT_TRUE(math::pythonlike::floatingpoint::manipulation::isnan(std::numeric_limits<double>::quiet_NaN()));
}

TEST(IsnanTest, IsnanTest_2) {
    ASSERT_FALSE(math::pythonlike::floatingpoint::manipulation::isnan(42.0));
}

TEST(IsnanTest, IsnanTest_3) {
    ASSERT_FALSE(math::pythonlike::floatingpoint::manipulation::isnan(std::numeric_limits<double>::infinity()));
}

// ========================================
// math::pythonlike::floatingpoint::manipulation::ldexp
// ========================================
TEST(LdexpTest, LdexpTest_1) {
    ASSERT_EQ(math::pythonlike::floatingpoint::manipulation::ldexp(0.5, 4), 8.0);
}

TEST(LdexpTest, LdexpTest_2) {
    ASSERT_EQ(math::pythonlike::floatingpoint::manipulation::ldexp(1.5, 2), 6.0);
}

TEST(LdexpTest, LdexpTest_3) {
    ASSERT_EQ(math::pythonlike::floatingpoint::manipulation::ldexp(2.0, 0), 2.0);
}

// ========================================
// math::pythonlike::floatingpoint::manipulation::nextafter
// ========================================
TEST(NextafterTest, NextafterTest_1) {
    double x = 1.0;
    double next = math::pythonlike::floatingpoint::manipulation::nextafter(x, 2.0);
    ASSERT_GT(next, x);
}

TEST(NextafterTest, NextafterTest_2) {
    double x = 1.0;
    double prev = math::pythonlike::floatingpoint::manipulation::nextafter(x, 0.0);
    ASSERT_LT(prev, x);
}

TEST(NextafterTest, NextafterTest_3) {
    double x = 0.0;
    double next = math::pythonlike::floatingpoint::manipulation::nextafter(x, 1.0);
    ASSERT_GT(next, x);
}

// ========================================
// math::pythonlike::floatingpoint::manipulation::ulp
// ========================================
TEST(ULPTest, ULPTest_1) {
    ASSERT_NEAR(math::pythonlike::floatingpoint::manipulation::ulp(1.0), 2.220446049250313e-16, 1e-30);
}

TEST(ULPTest, ULPTest_2) {
    double ulp_zero = math::pythonlike::floatingpoint::manipulation::ulp(0.0);
    double min_positive = std::numeric_limits<double>::denorm_min();
    ASSERT_DOUBLE_EQ(ulp_zero, min_positive);
}

TEST(ULPTest, ULPTest_3) {
    double inf = std::numeric_limits<double>::infinity();
    ASSERT_TRUE(std::isinf(math::pythonlike::floatingpoint::manipulation::ulp(inf)));
}

// ========================================
// math::pythonlike::powexplog::cbrt
// ========================================
TEST(CbrtTest, CbrtTest_1) {
    ASSERT_NEAR(math::pythonlike::powexplog::cbrt(27.0), 3.0, 1e-9);
}

TEST(CbrtTest, CbrtTest_2) {
    ASSERT_NEAR(math::pythonlike::powexplog::cbrt(-8.0), -2.0, 1e-9);
}

TEST(CbrtTest, CbrtTest_3) {
    ASSERT_NEAR(math::pythonlike::powexplog::cbrt(125.0), 5.0, 1e-9);
}

// ========================================
// math::pythonlike::powexplog::exp
// ========================================
TEST(ExpTest, ExpTest_1) {
    ASSERT_NEAR(math::pythonlike::powexplog::exp(1.0), 2.718281828459045, 1e-9);
}

TEST(ExpTest, ExpTest_2) {
    ASSERT_NEAR(math::pythonlike::powexplog::exp(0.0), 1.0, 1e-9);
}

TEST(ExpTest, ExpTest_3) {
    ASSERT_NEAR(math::pythonlike::powexplog::exp(2.0), 7.38905609893065, 1e-9);
}

// ========================================
// math::pythonlike::powexplog::exp2
// ========================================
TEST(Exp2Test, Exp2Test_1) {
    ASSERT_NEAR(math::pythonlike::powexplog::exp2(3.0), 8.0, 1e-9);
}

TEST(Exp2Test, Exp2Test_2) {
    ASSERT_NEAR(math::pythonlike::powexplog::exp2(0.0), 1.0, 1e-9);
}

TEST(Exp2Test, Exp2Test_3) {
    ASSERT_NEAR(math::pythonlike::powexplog::exp2(10.0), 1024.0, 1e-9);
}

// ========================================
// math::pythonlike::powexplog::expm1
// ========================================
TEST(Expm1Test, Expm1Test_1) {
    ASSERT_NEAR(math::pythonlike::powexplog::expm1(0.0), 0.0, 1e-9);
}

TEST(Expm1Test, Expm1Test_2) {
    ASSERT_NEAR(math::pythonlike::powexplog::expm1(1.0), 1.718281828459045, 1e-9);
}

TEST(Expm1Test, Expm1Test_3) {
    ASSERT_NEAR(math::pythonlike::powexplog::expm1(0.001), 0.0010005001667083417, 1e-9);
}

// ========================================
// math::pythonlike::powexplog::log (натуральный)
// ========================================
TEST(LogTest, LogTest_1) {
    ASSERT_NEAR(math::pythonlike::powexplog::log(1.0), 0.0, 1e-9);
}

TEST(LogTest, LogTest_2) {
    ASSERT_NEAR(math::pythonlike::powexplog::log(2.718281828459045), 1.0, 1e-9);
}

TEST(LogTest, LogTest_3) {
    ASSERT_NEAR(math::pythonlike::powexplog::log(10.0), 2.302585092994046, 1e-9);
}

// ========================================
// math::pythonlike::powexplog::log (с основанием)
// ========================================
TEST(LogBaseTest, LogBaseTest_1) {
    ASSERT_NEAR(math::pythonlike::powexplog::log(8.0, 2.0), 3.0, 1e-9);
}

TEST(LogBaseTest, LogBaseTest_2) {
    ASSERT_NEAR(math::pythonlike::powexplog::log(100.0, 10.0), 2.0, 1e-9);
}

TEST(LogBaseTest, LogBaseTest_3) {
    ASSERT_NEAR(math::pythonlike::powexplog::log(27.0, 3.0), 3.0, 1e-9);
}

// ========================================
// math::pythonlike::powexplog::log1p
// ========================================
TEST(Log1pTest, Log1pTest_1) {
    ASSERT_NEAR(math::pythonlike::powexplog::log1p(0.0), 0.0, 1e-9);
}

TEST(Log1pTest, Log1pTest_2) {
    ASSERT_NEAR(math::pythonlike::powexplog::log1p(1.0), 0.6931471805599453, 1e-9);
}

TEST(Log1pTest, Log1pTest_3) {
    ASSERT_NEAR(math::pythonlike::powexplog::log1p(0.001), 0.0009995003330835332, 1e-9);
}

// ========================================
// math::pythonlike::powexplog::log2
// ========================================
TEST(Log2Test, Log2Test_1) {
    ASSERT_NEAR(math::pythonlike::powexplog::log2(8.0), 3.0, 1e-9);
}

TEST(Log2Test, Log2Test_2) {
    ASSERT_NEAR(math::pythonlike::powexplog::log2(1.0), 0.0, 1e-9);
}

TEST(Log2Test, Log2Test_3) {
    ASSERT_NEAR(math::pythonlike::powexplog::log2(1024.0), 10.0, 1e-9);
}

// ========================================
// math::pythonlike::powexplog::log10
// ========================================
TEST(Log10Test, Log10Test_1) {
    ASSERT_NEAR(math::pythonlike::powexplog::log10(100.0), 2.0, 1e-9);
}

TEST(Log10Test, Log10Test_2) {
    ASSERT_NEAR(math::pythonlike::powexplog::log10(1.0), 0.0, 1e-9);
}

TEST(Log10Test, Log10Test_3) {
    ASSERT_NEAR(math::pythonlike::powexplog::log10(1000.0), 3.0, 1e-9);
}

// ========================================
// math::pythonlike::powexplog::pow
// ========================================
TEST(PowTest, PowTest_1) {
    ASSERT_NEAR(math::pythonlike::powexplog::pow(2.0, 3.0), 8.0, 1e-9);
}

TEST(PowTest, PowTest_2) {
    ASSERT_NEAR(math::pythonlike::powexplog::pow(3.0, 2.0), 9.0, 1e-9);
}

TEST(PowTest, PowTest_3) {
    ASSERT_NEAR(math::pythonlike::powexplog::pow(4.0, 0.5), 2.0, 1e-9);
}

// ========================================
// math::pythonlike::powexplog::sqrt
// ========================================
TEST(SqrtTest, SqrtTest_1) {
    ASSERT_EQ(math::pythonlike::powexplog::sqrt(16.0), 4.0);
}

TEST(SqrtTest, SqrtTest_2) {
    ASSERT_NEAR(math::pythonlike::powexplog::sqrt(2.0), 1.4142135623730951, 1e-9);
}

TEST(SqrtTest, SqrtTest_3) {
    ASSERT_EQ(math::pythonlike::powexplog::sqrt(0.0), 0.0);
}

// ========================================
// math::pythonlike::sumprod::dist
// ========================================
TEST(DistTest, DistTest_1) {
    ASSERT_NEAR(math::pythonlike::sumprod::dist(3.0, 4.0), 5.0, 1e-9);
}

TEST(DistTest, DistTest_2) {
    ASSERT_NEAR(math::pythonlike::sumprod::dist(1.0, 1.0), 1.4142135623730951, 1e-9);
}

TEST(DistTest, DistTest_3) {
    ASSERT_NEAR(math::pythonlike::sumprod::dist(0.0, 5.0), 5.0, 1e-9);
}

// ========================================
// math::pythonlike::sumprod::fsum
// ========================================
TEST(FsumTest, FsumTest_1) {
    double arr[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    ASSERT_NEAR(math::pythonlike::sumprod::fsum(arr, 5), 15.0, 1e-9);
}

TEST(FsumTest, FsumTest_2) {
    double arr[] = {0.1, 0.2, 0.3, 0.4, 0.5};
    ASSERT_NEAR(math::pythonlike::sumprod::fsum(arr, 5), 1.5, 1e-9);
}

TEST(FsumTest, FsumTest_3) {
    double arr[] = {-1.5, 2.7, -3.2, 4.8};
    ASSERT_NEAR(math::pythonlike::sumprod::fsum(arr, 4), 2.8, 1e-9);
}

// ========================================
// math::pythonlike::sumprod::hypot (2D)
// ========================================
TEST(Hypot2DTest, Hypot2DTest_1) {
    ASSERT_NEAR(math::pythonlike::sumprod::hypot(3.0, 4.0), 5.0, 1e-9);
}

TEST(Hypot2DTest, Hypot2DTest_2) {
    ASSERT_NEAR(math::pythonlike::sumprod::hypot(5.0, 12.0), 13.0, 1e-9);
}

TEST(Hypot2DTest, Hypot2DTest_3) {
    ASSERT_NEAR(math::pythonlike::sumprod::hypot(1.0, 1.0), 1.4142135623730951, 1e-9);
}

// ========================================
// math::pythonlike::sumprod::hypot (3D)
// ========================================
TEST(Hypot3DTest, Hypot3DTest_1) {
    ASSERT_EQ(math::pythonlike::sumprod::hypot(3.0, 4.0, 12.0), 13.0);
}

TEST(Hypot3DTest, Hypot3DTest_2) {
    ASSERT_NEAR(math::pythonlike::sumprod::hypot(1.0, 2.0, 3.0), 3.7416573867739413, 1e-9);
}

TEST(Hypot3DTest, Hypot3DTest_3) {
    ASSERT_NEAR(math::pythonlike::sumprod::hypot(0.0, 0.0, 5.0), 5.0, 1e-9);
}

// ========================================
// math::pythonlike::sumprod::prod
// ========================================
TEST(ProdTest, ProdTest_1) {
    double arr[] = {2.0, 3.0, 4.0};
    ASSERT_EQ(math::pythonlike::sumprod::prod(arr, 3), 24.0);
}

TEST(ProdTest, ProdTest_2) {
    double arr[] = {1.5, 2.0, 3.0};
    ASSERT_EQ(math::pythonlike::sumprod::prod(arr, 3), 9.0);
}

TEST(ProdTest, ProdTest_3) {
    double arr[] = {5.0};
    ASSERT_EQ(math::pythonlike::sumprod::prod(arr, 1), 5.0);
}

// ========================================
// math::pythonlike::sumprod::sumprod
// ========================================
TEST(SumProdTest, SumProdTest_1) {
    double a[] = {1.0, 2.0, 3.0};
    double b[] = {4.0, 5.0, 6.0};
    ASSERT_EQ(math::pythonlike::sumprod::sumprod(a, b, 3, 3), 32.0);
}

TEST(SumProdTest, SumProdTest_2) {
    double a[] = {2.0, 3.0, 4.0};
    double b[] = {1.0, 2.0, 3.0};
    ASSERT_EQ(math::pythonlike::sumprod::sumprod(a, b, 3, 3), 20.0);
}

TEST(SumProdTest, SumProdTest_3) {
    double a[] = {1.5, 2.5, 3.5};
    double b[] = {2.0, 2.0, 2.0};
    ASSERT_EQ(math::pythonlike::sumprod::sumprod(a, b, 3, 3), 15.0);
}

// ========================================
// math::pythonlike::angconv::degrees
// ========================================
TEST(DegreesTest, DegreesTest_1) {
    ASSERT_NEAR(math::pythonlike::angconv::degrees(3.141592653589793 / 2.0), 90.0, 1e-12);
}

TEST(DegreesTest, DegreesTest_2) {
    ASSERT_NEAR(math::pythonlike::angconv::degrees(3.141592653589793), 180.0, 1e-12);
}

TEST(DegreesTest, DegreesTest_3) {
    ASSERT_NEAR(math::pythonlike::angconv::degrees(0.0), 0.0, 1e-12);
}

// ========================================
// math::pythonlike::angconv::radians
// ========================================
TEST(RadiansTest, RadiansTest_1) {
    ASSERT_NEAR(math::pythonlike::angconv::radians(180.0), 3.141592653589793, 1e-12);
}

TEST(RadiansTest, RadiansTest_2) {
    ASSERT_NEAR(math::pythonlike::angconv::radians(90.0), 1.5707963267948966, 1e-12);
}

TEST(RadiansTest, RadiansTest_3) {
    ASSERT_NEAR(math::pythonlike::angconv::radians(0.0), 0.0, 1e-12);
}

// ========================================
// math::pythonlike::trigonometric::acos
// ========================================
TEST(AcosTest, AcosTest_1) {
    ASSERT_NEAR(math::pythonlike::trigonometric::acos(1.0), 0.0, 1e-9);
}

TEST(AcosTest, AcosTest_2) {
    ASSERT_NEAR(math::pythonlike::trigonometric::acos(0.0), 1.5707963267948966, 1e-9);
}

TEST(AcosTest, AcosTest_3) {
    ASSERT_NEAR(math::pythonlike::trigonometric::acos(-1.0), 3.141592653589793, 1e-9);
}

// ========================================
// math::pythonlike::trigonometric::asin
// ========================================
TEST(AsinTest, AsinTest_1) {
    ASSERT_NEAR(math::pythonlike::trigonometric::asin(0.0), 0.0, 1e-9);
}

TEST(AsinTest, AsinTest_2) {
    ASSERT_NEAR(math::pythonlike::trigonometric::asin(1.0), 1.5707963267948966, 1e-9);
}

TEST(AsinTest, AsinTest_3) {
    ASSERT_NEAR(math::pythonlike::trigonometric::asin(0.5), 0.5235987755982989, 1e-9);
}

// ========================================
// math::pythonlike::trigonometric::atan
// ========================================
TEST(AtanTest, AtanTest_1) {
    ASSERT_NEAR(math::pythonlike::trigonometric::atan(0.0), 0.0, 1e-9);
}

TEST(AtanTest, AtanTest_2) {
    ASSERT_NEAR(math::pythonlike::trigonometric::atan(1.0), 0.7853981633974483, 1e-9);
}

TEST(AtanTest, AtanTest_3) {
    ASSERT_NEAR(math::pythonlike::trigonometric::atan(std::sqrt(3.0)), 1.0471975511965976, 1e-9);
}

// ========================================
// math::pythonlike::trigonometric::atan2
// ========================================
TEST(Atan2Test, Atan2Test_1) {
    ASSERT_NEAR(math::pythonlike::trigonometric::atan2(1.0, 1.0), 0.7853981633974483, 1e-9);
}

TEST(Atan2Test, Atan2Test_2) {
    ASSERT_NEAR(math::pythonlike::trigonometric::atan2(1.0, 0.0), 1.5707963267948966, 1e-9);
}

TEST(Atan2Test, Atan2Test_3) {
    ASSERT_NEAR(math::pythonlike::trigonometric::atan2(-1.0, -1.0), -2.356194490192345, 1e-9);
}

// ========================================
// math::pythonlike::trigonometric::cos
// ========================================
TEST(CosTest, CosTest_1) {
    ASSERT_NEAR(math::pythonlike::trigonometric::cos(0.0), 1.0, 1e-9);
}

TEST(CosTest, CosTest_2) {
    ASSERT_NEAR(math::pythonlike::trigonometric::cos(3.141592653589793), -1.0, 1e-9);
}

TEST(CosTest, CosTest_3) {
    ASSERT_NEAR(math::pythonlike::trigonometric::cos(1.5707963267948966), 0.0, 1e-9);
}

// ========================================
// math::pythonlike::trigonometric::sin
// ========================================
TEST(SinTest, SinTest_1) {
    ASSERT_NEAR(math::pythonlike::trigonometric::sin(0.0), 0.0, 1e-9);
}

TEST(SinTest, SinTest_2) {
    ASSERT_NEAR(math::pythonlike::trigonometric::sin(1.5707963267948966), 1.0, 1e-9);
}

TEST(SinTest, SinTest_3) {
    ASSERT_NEAR(math::pythonlike::trigonometric::sin(3.141592653589793), 0.0, 1e-9);
}

// ========================================
// math::pythonlike::trigonometric::tan
// ========================================
TEST(TanTest, TanTest_1) {
    ASSERT_NEAR(math::pythonlike::trigonometric::tan(0.0), 0.0, 1e-9);
}

TEST(TanTest, TanTest_2) {
    ASSERT_NEAR(math::pythonlike::trigonometric::tan(0.7853981633974483), 1.0, 1e-9);
}

TEST(TanTest, TanTest_3) {
    ASSERT_NEAR(math::pythonlike::trigonometric::tan(1.0471975511965976), 1.7320508075688767, 1e-9);
}

// ========================================
// math::pythonlike::hyperbolic::acosh
// ========================================
TEST(AcoshTest, AcoshTest_1) {
    ASSERT_NEAR(math::pythonlike::hyperbolic::acosh(1.0), 0.0, 1e-9);
}

TEST(AcoshTest, AcoshTest_2) {
    ASSERT_NEAR(math::pythonlike::hyperbolic::acosh(std::cosh(2.0)), 2.0, 1e-9);
}

TEST(AcoshTest, AcoshTest_3) {
    ASSERT_NEAR(math::pythonlike::hyperbolic::acosh(2.0), 1.3169578969248166, 1e-9);
}

// ========================================
// math::pythonlike::hyperbolic::asinh
// ========================================
TEST(AsinhTest, AsinhTest_1) {
    ASSERT_NEAR(math::pythonlike::hyperbolic::asinh(0.0), 0.0, 1e-9);
}

TEST(AsinhTest, AsinhTest_2) {
    ASSERT_NEAR(math::pythonlike::hyperbolic::asinh(std::sinh(1.0)), 1.0, 1e-9);
}

TEST(AsinhTest, AsinhTest_3) {
    ASSERT_NEAR(math::pythonlike::hyperbolic::asinh(1.0), 0.881373587019543, 1e-9);
}

// ========================================
// math::pythonlike::hyperbolic::atanh
// ========================================
TEST(AtanhTest, AtanhTest_1) {
    ASSERT_NEAR(math::pythonlike::hyperbolic::atanh(0.0), 0.0, 1e-9);
}

TEST(AtanhTest, AtanhTest_2) {
    ASSERT_NEAR(math::pythonlike::hyperbolic::atanh(std::tanh(0.5)), 0.5, 1e-9);
}

TEST(AtanhTest, AtanhTest_3) {
    ASSERT_NEAR(math::pythonlike::hyperbolic::atanh(0.5), 0.5493061443340549, 1e-9);
}

// ========================================
// math::pythonlike::hyperbolic::cosh
// ========================================
TEST(CoshTest, CoshTest_1) {
    ASSERT_NEAR(math::pythonlike::hyperbolic::cosh(0.0), 1.0, 1e-9);
}

TEST(CoshTest, CoshTest_2) {
    ASSERT_NEAR(math::pythonlike::hyperbolic::cosh(1.0), 1.5430806348152437, 1e-9);
}

TEST(CoshTest, CoshTest_3) {
    ASSERT_NEAR(math::pythonlike::hyperbolic::cosh(-1.0), 1.5430806348152437, 1e-9);
}

// ========================================
// math::pythonlike::hyperbolic::sinh
// ========================================
TEST(SinhTest, SinhTest_1) {
    ASSERT_EQ(math::pythonlike::hyperbolic::sinh(0.0), 0.0);
}

TEST(SinhTest, SinhTest_2) {
    ASSERT_NEAR(math::pythonlike::hyperbolic::sinh(1.0), 1.1752011936438014, 1e-9);
}

TEST(SinhTest, SinhTest_3) {
    ASSERT_NEAR(math::pythonlike::hyperbolic::sinh(-1.0), -1.1752011936438014, 1e-9);
}

// ========================================
// math::pythonlike::hyperbolic::tanh
// ========================================
TEST(TanhTest, TanhTest_1) {
    ASSERT_EQ(math::pythonlike::hyperbolic::tanh(0.0), 0.0);
}

TEST(TanhTest, TanhTest_2) {
    ASSERT_NEAR(math::pythonlike::hyperbolic::tanh(1.0), 0.7615941559557649, 1e-9);
}

TEST(TanhTest, TanhTest_3) {
    ASSERT_NEAR(math::pythonlike::hyperbolic::tanh(2.0), 0.9640275800758169, 1e-9);
}

// ========================================
// math::pythonlike::special::erf
// ========================================
TEST(ErfTest, ErfTest_1) {
    ASSERT_EQ(math::pythonlike::special::erf(0.0), 0.0);
}

TEST(ErfTest, ErfTest_2) {
    ASSERT_NEAR(math::pythonlike::special::erf(1.0), 0.8427007929497148, 1e-9);
}

TEST(ErfTest, ErfTest_3) {
    ASSERT_NEAR(math::pythonlike::special::erf(2.0), 0.9953222650189527, 1e-9);
}

// ========================================
// math::pythonlike::special::erfc
// ========================================
TEST(ErfcTest, ErfcTest_1) {
    ASSERT_NEAR(math::pythonlike::special::erfc(0.0), 1.0, 1e-9);
}

TEST(ErfcTest, ErfcTest_2) {
    ASSERT_NEAR(math::pythonlike::special::erfc(1.0), 0.1572992070502851, 1e-9);
}

TEST(ErfcTest, ErfcTest_3) {
    ASSERT_NEAR(math::pythonlike::special::erfc(2.0), 0.004677734981047266, 1e-9);
}

// ========================================
// math::pythonlike::special::gamma
// ========================================
TEST(GammaTest, GammaTest_1) {
    ASSERT_NEAR(math::pythonlike::special::gamma(5.0), 24.0, 1e-9);
}

TEST(GammaTest, GammaTest_2) {
    ASSERT_NEAR(math::pythonlike::special::gamma(1.0), 1.0, 1e-9);
}

TEST(GammaTest, GammaTest_3) {
    ASSERT_NEAR(math::pythonlike::special::gamma(0.5), 1.7724538509055159, 1e-9);
}

// ========================================
// math::pythonlike::special::lgamma
// ========================================
TEST(LgammaTest, LgammaTest_1) {
    ASSERT_NEAR(math::pythonlike::special::lgamma(5.0), std::log(24.0), 1e-9);
}

TEST(LgammaTest, LgammaTest_2) {
    ASSERT_NEAR(math::pythonlike::special::lgamma(1.0), 0.0, 1e-9);
}

TEST(LgammaTest, LgammaTest_3) {
    ASSERT_NEAR(math::pythonlike::special::lgamma(0.5), 0.5723649429247001, 1e-9);
}

#endif // PYTHON_LIKE_FUNCTIONS