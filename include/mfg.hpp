#pragma once



#include <iostream>
#include <cmath>
#include <vector>
#include <numeric>
#include <algorithm>
#include <execution>
#include <iterator>



#define LIST_NUMBER_OF_ELEMENTS 10


namespace math
{
    // Constants.
    #define NUMBER_CONST_PI  3.141592653589793
    #define NUMBER_CONST_E   2.718281828459045
    #define NUMBER_CONST_TAU 6.283185307179586


    double PI{NUMBER_CONST_PI};
    double E{NUMBER_CONST_E};
    double TAU{NUMBER_CONST_TAU};

    std::size_t factorial(std::size_t n) noexcept {
        std::size_t output = 1;
        for(std::size_t counter = 1; counter <= n; ++counter)
            output *= counter;
        return output;
    }


    template <typename T>
    T ksa(T* array, std::size_t length) noexcept
    {
        std::vector<T> vArray;
        vArray.reserve(LIST_NUMBER_OF_ELEMENTS);
        for(std::size_t counter = 0; counter < length; ++counter) vArray.push_back(array[counter]);
        T sum{0.0};
        T c{0.0};
        for(T x: vArray)
        {
            T y = x - c;
            T t = sum + y;
            c = (t - sum) - y;
            sum = t;
        }
        return sum;
    }


    namespace pythonlike
    {
        namespace numbertheoretic
        {
            template <typename T>
            T factorial(T n) noexcept {
                T output = 1;
                for(T counter = 1; counter <= n; ++counter)
                    output *= counter;
                return output;
            }

            
            template <typename T>
            T comb(T n, T k) noexcept
            {
                if(k <= n)
                {
                    T kFactorial = factorial(k);
                    T nFactorial = factorial(n);
                    T difference = factorial(n - k);
                    return nFactorial / (kFactorial * difference);
                }
                return 0;
            }


            std::int64_t gcd(std::int64_t * integers, std::size_t length) noexcept
            {
                std::vector<std::int64_t> vIntegers;
                vIntegers.reserve(LIST_NUMBER_OF_ELEMENTS);
                for(std::size_t counter = 0; counter < length; ++counter) vIntegers.push_back(integers[counter]);
                return std::accumulate(vIntegers.begin(), vIntegers.end(), vIntegers[0], [](std::int64_t a, std::int64_t b){
                    return std::gcd(a, b);
                });
            }


            std::int64_t isqrt(std::int64_t n) noexcept
            {
                if(n <= 0) return 0;
                if(n < 2) return 0;
                std::int64_t x = n / 2 + 1;
                std::int64_t y = (x + n / x) / 2;
                while(y < x)
                {
                    x = y;
                    y = (x + n / x) / 2;
                }
                return x;
            }


            std::int64_t lcm(std::int64_t * integers, std::size_t length) noexcept
            {
                std::vector<std::int64_t> vIntegers;
                vIntegers.reserve(LIST_NUMBER_OF_ELEMENTS);
                for(std::size_t counter = 0; counter < length; ++counter) vIntegers.push_back(integers[counter]);
                return std::accumulate(vIntegers.begin(), vIntegers.end(), vIntegers[0], [](std::int64_t a, std::int64_t b){
                    return std::lcm(a, b);
                });
            }


            template <typename T>
            T perm(T n, T k) noexcept {
                if(k < 0 || k > n) return 0;
                T output = 1;
                for(std::int64_t counter = 0; counter < k; ++counter) 
                    output *= (n - counter);
                return output;
            }
        };


        namespace floatingpoint
        {
            namespace arithmetic
            {
                double ceil(double x) noexcept
                {
                    return std::ceil(x);
                }


                double fabs(double x) noexcept
                {
                    return std::abs(x);
                }


                double floor(double x) noexcept
                {
                    return std::floor(x);
                }


                double fma(double x, double y, double z) noexcept
                {
                    return std::fma(x, y ,z);
                }


                double fmod(double x, double y) noexcept
                {
                    return std::fmod(x, y);
                }


                std::pair<double, double> modf(double x) noexcept
                {
                    double integer{0};
                    double fractional = std::modf(x, &integer);
                    return {fractional, integer};
                }


                double remainder(double x, double y) noexcept
                {
                    return std::remainder(x, y);
                }


                double trunc(double x) noexcept
                {
                    return std::trunc(x);
                }
            };


            namespace manipulation
            {
                double copysign(double x, double y) noexcept
                {
                    return std::copysign(x, y);
                }


                std::pair<double, std::int32_t> frexp(double x) noexcept
                {
                    std::int32_t integer{0};
                    double mantissa = std::frexp(x, &integer);
                    return {mantissa, integer};
                }


                bool isclose(double a, double b, double rel_tol=1e-09, double abs_tol=0.0) noexcept
                {
                    if(std::isinf(a) || std::isinf(b)) return a == b;
                    double difference = fabs(a - b);
                    double maxvalue = std::max<double>(fabs(a), fabs(b));
                    return difference <= std::max(rel_tol * maxvalue, abs_tol);
                }


                bool isfinite(double x) noexcept
                {
                    return std::isfinite(x);
                }


                bool isinf(double x) noexcept
                {
                    return std::isinf(x);
                }


                bool isnan(double x) noexcept
                {
                    return std::isnan(x);
                }


                double ldexp(double x, std::int32_t i) noexcept
                {
                    return std::ldexp(x, i);
                }


                double nextafter(double from, double to) noexcept
                {
                    return std::nextafter(from, to);
                }


                double ulp(double x) noexcept
                {
                    if(isinf(x)) return std::numeric_limits<double>::infinity();
                    if(isnan(x)) return std::numeric_limits<double>::quiet_NaN();
                    x = std::fabs(x);
                    double next = nextafter(x, std::numeric_limits<double>::infinity());
                    return next - x;
                }
            };
        };


        namespace powexplog
        {
            template <typename T>
            T cbrt(T x) noexcept
            {
                return std::cbrt(x);
            }


            template <typename T>
            T exp(T x) noexcept
            {
                return std::exp(x);
            }


            template <typename T>
            T exp2(T x) noexcept
            {
                return std::exp2(x);
            }


            template <typename T>
            T expm1(T x) noexcept
            {
                return std::expm1(x);
            }


            template <typename T>
            T log(T x) noexcept
            {
                return std::log(x);
            }


            template <typename T>
            T log(T x, T base) noexcept
            {
                return log(x) / log(base);
            }


            template <typename T>
            T log1p(T x) noexcept
            {
                return std::log1p(x);
            }


            template <typename T>
            T log2(T x) noexcept
            {
                return std::log2(x);
            }


            template <typename T>
            T log10(T x) noexcept
            {
                return std::log10(x);
            }


            template <typename T>
            T pow(T x, T y) noexcept
            {
                return std::pow(x, y);
            }


            template <typename T>
            T sqrt(T x) noexcept
            {
                return std::sqrt(x);
            }
        };


        namespace sumprod
        {
            template <typename T>
            T dist(T p, T q) noexcept
            {
                return std::hypot(p, q);
            }


            double fsum(double * array, std::size_t length) noexcept
            {
                return ksa(array, length);
            }


            template <typename T>
            T hypot(T x, T y) noexcept
            {
                return std::hypot(x, y);
            }


            template <typename T>
            T hypot(T x, T y, T z) noexcept
            {
                return std::hypot(x, y, z);
            }


            template <typename T>
            T prod(T* array, std::size_t length) noexcept
            {
                if (length == 0) return static_cast<T>(1);
                return std::accumulate(array, array + length, static_cast<T>(1), std::multiplies<T>());
            }


            template <typename T>
            T sumprod(T* array1, T* array2, std::size_t length1, std::size_t length2) noexcept
            {
                if (length1 != length2 || length1 == 0) return static_cast<T>(0);
                return std::inner_product(array1, array1 + length1, array2, static_cast<T>(0));
            }
            };


        namespace angconv
        {
            template <typename T>
            double degrees(T x) noexcept
            {
                return x * (static_cast<T>(180.0) / PI);
            }


            template <typename T>
            double radians(T x) noexcept
            {
                return x * (PI / static_cast<T>(180.0));
            }
        };


        namespace trigonometric
        {
            template <typename T>
            T acos(T x) noexcept
            {
                return std::acos(x);
            }


            template <typename T>
            T asin(T x) noexcept
            {
                return std::asin(x);
            }


            template <typename T>
            T atan(T x) noexcept
            {
                return std::atan(x);
            }


            template <typename T>
            T atan2(T x, T y) noexcept
            {
                return std::atan2(x, y);
            }


            template <typename T>
            T cos(T x) noexcept
            {
                return std::cos(x);
            }


            template <typename T>
            T sin(T x) noexcept
            {
                return std::sin(x);
            }


            template <typename T>
            T tan(T x) noexcept
            {
                return std::tan(x);
            }
        };


        namespace hyperbolic
        {
            template <typename T>
            T acosh(T x) noexcept
            {
                return std::acosh(x);
            }


            template <typename T>
            T asinh(T x) noexcept
            {
                return std::asinh(x);
            }


            template <typename T>
            T atanh(T x) noexcept
            {
                return std::atanh(x);
            }


            template <typename T>
            T cosh(T x) noexcept
            {
                return std::cosh(x);
            }


            template <typename T>
            T sinh(T x) noexcept
            {
                return std::sinh(x);
            }


            template <typename T>
            T tanh(T x) noexcept
            {
                return std::tanh(x);
            }
        };


        namespace special
        {
            template <typename T>
            T erf(T x) noexcept
            {
                return std::erf(x);
            }


            template <typename T>
            T erfc(T x) noexcept
            {
                return std::erfc(x);
            }


            template <typename T>
            T gamma(T x) noexcept
            {
                return std::tgamma(x);
            }


            template <typename T>
            T lgamma(T x) noexcept
            {
                return std::lgamma(x);
            }
        };
    };
};
