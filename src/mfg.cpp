#include "mfg.hpp"


#include "mfg_export.h"

#define PYTHON_LIKE_FUNCTIONS

#ifdef PYTHON_LIKE_FUNCTIONS
// math::pythonlike::numbertheoretic
extern "C" MFG_EXPORT std::int64_t factorial_i64(std::int64_t n) noexcept {return math::pythonlike::numbertheoretic::factorial<std::int64_t>(n);}
extern "C" MFG_EXPORT double factorial_f64(double n) noexcept {return math::pythonlike::numbertheoretic::factorial<double>(n);}

extern "C" MFG_EXPORT std::int64_t comb_i64(std::int64_t n, std::int64_t k) noexcept {return math::pythonlike::numbertheoretic::comb<std::int64_t>(n, k);}
extern "C" MFG_EXPORT double comb_f64(double n, double k) noexcept {return math::pythonlike::numbertheoretic::comb<double>(n, k);}

extern "C" MFG_EXPORT std::int64_t gcd_i64(std::int64_t * integers, std::size_t length) noexcept {return math::pythonlike::numbertheoretic::gcd(integers, length);}

extern "C" MFG_EXPORT std::int64_t isqrt_i64(std::int64_t n) noexcept {return math::pythonlike::numbertheoretic::isqrt(n);}

extern "C" MFG_EXPORT std::int64_t lcm_i64(std::int64_t * integers, std::size_t length) noexcept {return math::pythonlike::numbertheoretic::lcm(integers, length);}

extern "C" MFG_EXPORT std::int64_t perm_i64(std::int64_t n, std::int64_t k) noexcept {return math::pythonlike::numbertheoretic::perm<std::int64_t>(n, k);}
extern "C" MFG_EXPORT double perm_f64(double n, double k) noexcept {return math::pythonlike::numbertheoretic::perm<double>(n, k);}


// math::pythonlike::floatingpoint::arithmetic
extern "C" MFG_EXPORT double ceil_f64(double x) noexcept {return math::pythonlike::floatingpoint::arithmetic::ceil(x);}

extern "C" MFG_EXPORT double fabs_f64(double x) noexcept {return math::pythonlike::floatingpoint::arithmetic::fabs(x);}

extern "C" MFG_EXPORT double floor_f64(double x) noexcept {return math::pythonlike::floatingpoint::arithmetic::floor(x);}

extern "C" MFG_EXPORT double fma_f64(double x, double y, double z) noexcept {return math::pythonlike::floatingpoint::arithmetic::fma(x, y, z);}

extern "C" MFG_EXPORT double fmod_f64(double x, double y) noexcept {return math::pythonlike::floatingpoint::arithmetic::fmod(x, y);}

extern "C" MFG_EXPORT double * modf_f64(double x) noexcept {double output[2]{0.0, 0.0};  std::pair<double, double> rel_output = math::pythonlike::floatingpoint::arithmetic::modf(x); output[0] = rel_output.first; output[1] = rel_output.second; return output;}

extern "C" MFG_EXPORT double remainder_f64(double x, double y) noexcept {return math::pythonlike::floatingpoint::arithmetic::remainder(x, y);}

extern "C" MFG_EXPORT double trunc_f64(double x) noexcept {return math::pythonlike::floatingpoint::arithmetic::trunc(x);}


// math::pythonlike::floatingpoint::manipulation
extern "C" MFG_EXPORT double copysign_f64(double x, double y) noexcept {return math::pythonlike::floatingpoint::manipulation::copysign(x, y);}

extern "C" MFG_EXPORT double * frexp_f64(double x) noexcept {double output[2]{0.0, 0.0}; std::pair<double, double> rel_output = math::pythonlike::floatingpoint::manipulation::frexp(x); output[0] = rel_output.first; output[1] = rel_output.second; return output;}

extern "C" MFG_EXPORT bool isclose_b(double a, double b, double rel_tol, double abs_tol) noexcept {return math::pythonlike::floatingpoint::manipulation::isclose(a, b, rel_tol, abs_tol);}

extern "C" MFG_EXPORT bool isfinite_b(double x) noexcept {return math::pythonlike::floatingpoint::manipulation::isfinite(x);}

extern "C" MFG_EXPORT bool isinf_b(double x) noexcept {return math::pythonlike::floatingpoint::manipulation::isinf(x);}

extern "C" MFG_EXPORT bool isnan_b(double x) noexcept {return math::pythonlike::floatingpoint::manipulation::isnan(x);}
// !TODO: Change i back to std::int32_t
extern "C" MFG_EXPORT double ldexp_f64(double x, std::int64_t i) noexcept {return math::pythonlike::floatingpoint::manipulation::ldexp(x, i);}

extern "C" MFG_EXPORT double nextafter_f64(double from, double to) noexcept {return math::pythonlike::floatingpoint::manipulation::nextafter(from, to);}

extern "C" MFG_EXPORT double ulp_f64(double x) noexcept {return math::pythonlike::floatingpoint::manipulation::ulp(x);}


// math::pythonlike::powexplog
extern "C" MFG_EXPORT std::int64_t cbrt_i64(std::int64_t x) noexcept {return math::pythonlike::powexplog::cbrt<std::int64_t>(x);}
extern "C" MFG_EXPORT double cbrt_f64(double x) noexcept {return math::pythonlike::powexplog::cbrt<double>(x);}

extern "C" MFG_EXPORT std::int64_t exp_i64(std::int64_t x) noexcept {return math::pythonlike::powexplog::exp<std::int64_t>(x);}
extern "C" MFG_EXPORT double exp_f64(double x) noexcept {return math::pythonlike::powexplog::exp<double>(x);}

extern "C" MFG_EXPORT std::int64_t exp2_i64(std::int64_t x) noexcept {return math::pythonlike::powexplog::exp2<std::int64_t>(x);}
extern "C" MFG_EXPORT double exp2_f64(double x) noexcept {return math::pythonlike::powexplog::exp2<double>(x);}

extern "C" MFG_EXPORT std::int64_t expm1_i64(std::int64_t x) noexcept {return math::pythonlike::powexplog::expm1<std::int64_t>(x);}
extern "C" MFG_EXPORT double expm1_f64(double x) noexcept {return math::pythonlike::powexplog::expm1<double>(x);}

extern "C" MFG_EXPORT std::int64_t log_i64(std::int64_t x) noexcept {return math::pythonlike::powexplog::log<std::int64_t>(x);}
extern "C" MFG_EXPORT double log_f64(double x) noexcept {return math::pythonlike::powexplog::log<double>(x);}

extern "C" MFG_EXPORT std::int64_t logbase_i64(std::int64_t x, std::int64_t base) noexcept {return math::pythonlike::powexplog::log<std::int64_t>(x, base);}
extern "C" MFG_EXPORT double logbase_f64(double x, double base) noexcept {return math::pythonlike::powexplog::log<double>(x, base);}

extern "C" MFG_EXPORT std::int64_t log1p_i64(std::int64_t x) noexcept {return math::pythonlike::powexplog::log1p<std::int64_t>(x);}
extern "C" MFG_EXPORT double log1p_f64(double x) noexcept {return math::pythonlike::powexplog::log1p<double>(x);}

extern "C" MFG_EXPORT std::int64_t log2_i64(std::int64_t x) noexcept {return math::pythonlike::powexplog::log2<std::int64_t>(x);}
extern "C" MFG_EXPORT double log2_f64(double x) noexcept {return math::pythonlike::powexplog::log2<double>(x);}

extern "C" MFG_EXPORT std::int64_t log10_i64(std::int64_t x) noexcept {return math::pythonlike::powexplog::log10<std::int64_t>(x);}
extern "C" MFG_EXPORT double log10_f64(double x) noexcept {return math::pythonlike::powexplog::log10<double>(x);}

extern "C" MFG_EXPORT std::int64_t pow_i64(std::int64_t x, std::int64_t y) noexcept {return math::pythonlike::powexplog::pow<std::int64_t>(x, y);}
extern "C" MFG_EXPORT double pow_f64(double x, double y) noexcept {return math::pythonlike::powexplog::pow<double>(x, y);}

extern "C" MFG_EXPORT std::int64_t sqrt_i64(std::int64_t x) noexcept {return math::pythonlike::powexplog::sqrt<std::int64_t>(x);}
extern "C" MFG_EXPORT double sqrt_f64(double x) noexcept {return math::pythonlike::powexplog::sqrt<double>(x);}


// math::pythonlike::sumprod
extern "C" MFG_EXPORT std::int64_t dist_i64(std::int64_t p, std::int64_t q) noexcept {return math::pythonlike::sumprod::dist<std::int64_t>(p ,q);}
extern "C" MFG_EXPORT double dist_f64(double p, double q) noexcept {return math::pythonlike::sumprod::dist<double>(p ,q);}

extern "C" MFG_EXPORT double fsum(double * array, std::size_t length) noexcept {return math::pythonlike::sumprod::fsum(array, length);}

extern "C" MFG_EXPORT std::int64_t hypot2d_i64(std::int64_t x, std::int64_t y) noexcept {return math::pythonlike::sumprod::hypot<std::int64_t>(x, y);}
extern "C" MFG_EXPORT double hypot2d_f64(double x, double y) noexcept {return math::pythonlike::sumprod::hypot<double>(x, y);}

extern "C" MFG_EXPORT std::int64_t hypot3d_i64(std::int64_t x, std::int64_t y, std::int64_t z) noexcept {return math::pythonlike::sumprod::hypot<std::int64_t>(x, y, z);}
extern "C" MFG_EXPORT double hypot3d_f64(double x, double y, double z) noexcept {return math::pythonlike::sumprod::hypot<double>(x, y, z);}

extern "C" MFG_EXPORT std::int64_t prod_i64(std::int64_t * array, std::size_t length) noexcept {return math::pythonlike::sumprod::prod<std::int64_t>(array, length);}
extern "C" MFG_EXPORT double prod_f64(double * array, std::size_t length) noexcept {return math::pythonlike::sumprod::prod<double>(array, length);}

extern "C" MFG_EXPORT std::int64_t sumprod_i64(std::int64_t * array1, std::int64_t * array2, std::size_t length1, std::size_t length2) noexcept {return math::pythonlike::sumprod::sumprod<std::int64_t>(array1, array2, length1, length2);}
extern "C" MFG_EXPORT double sumprod_f64(double * array1, double * array2, std::size_t length1, std::size_t length2) noexcept {return math::pythonlike::sumprod::sumprod<double>(array1, array2, length1, length2);}


// math::pythonlike::angconv
extern "C" MFG_EXPORT std::int64_t degrees_i64(std::int64_t x) noexcept {return math::pythonlike::angconv::degrees<std::int64_t>(x);}
extern "C" MFG_EXPORT double degrees_f64(double x) noexcept {return math::pythonlike::angconv::degrees<double>(x);}

extern "C" MFG_EXPORT std::int64_t radians_i64(std::int64_t x) noexcept {return math::pythonlike::angconv::radians<std::int64_t>(x);}
extern "C" MFG_EXPORT double radians_f64(double x) noexcept {return math::pythonlike::angconv::radians<double>(x);}


// math::pythonlike::trigonometric
extern "C" MFG_EXPORT std::int64_t acos_i64(std::int64_t x) noexcept {return math::pythonlike::trigonometric::acos<std::int64_t>(x);}
extern "C" MFG_EXPORT double acos_f64(double x) noexcept {return math::pythonlike::trigonometric::acos<double>(x);}

extern "C" MFG_EXPORT std::int64_t asin_i64(std::int64_t x) noexcept {return math::pythonlike::trigonometric::asin<std::int64_t>(x);}
extern "C" MFG_EXPORT double asin_f64(double x) noexcept {return math::pythonlike::trigonometric::asin<double>(x);}

extern "C" MFG_EXPORT std::int64_t atan_i64(std::int64_t x) noexcept {return math::pythonlike::trigonometric::atan<std::int64_t>(x);}
extern "C" MFG_EXPORT double atan_f64(double x) noexcept {return math::pythonlike::trigonometric::atan<double>(x);}

extern "C" MFG_EXPORT std::int64_t atan2_i64(std::int64_t x, std::int64_t y) noexcept {return math::pythonlike::trigonometric::atan2<std::int64_t>(x, y);}
extern "C" MFG_EXPORT double atan2_f64(double x, double y) noexcept {return math::pythonlike::trigonometric::atan2<double>(x, y);}

extern "C" MFG_EXPORT std::int64_t cos_i64(std::int64_t x) noexcept {return math::pythonlike::trigonometric::cos<std::int64_t>(x);}
extern "C" MFG_EXPORT double cos_f64(double x) noexcept {return math::pythonlike::trigonometric::cos<double>(x);}

extern "C" MFG_EXPORT std::int64_t sin_i64(std::int64_t x) noexcept {return math::pythonlike::trigonometric::sin<std::int64_t>(x);}
extern "C" MFG_EXPORT double sin_f64(double x) noexcept {return math::pythonlike::trigonometric::sin<double>(x);}

extern "C" MFG_EXPORT std::int64_t tan_i64(std::int64_t x) noexcept {return math::pythonlike::trigonometric::tan<std::int64_t>(x);}
extern "C" MFG_EXPORT double tan_f64(double x) noexcept {return math::pythonlike::trigonometric::tan<double>(x);}


// math::pythonlike::hyperbolic
extern "C" MFG_EXPORT std::int64_t acosh_i64(std::int64_t x) noexcept {return math::pythonlike::hyperbolic::acosh<std::int64_t>(x);}
extern "C" MFG_EXPORT double acosh_f64(double x) noexcept {return math::pythonlike::hyperbolic::acosh<double>(x);}

extern "C" MFG_EXPORT std::int64_t asinh_i64(std::int64_t x) noexcept {return math::pythonlike::hyperbolic::asinh<std::int64_t>(x);}
extern "C" MFG_EXPORT double asinh_f64(double x) noexcept {return math::pythonlike::hyperbolic::asinh<double>(x);}

extern "C" MFG_EXPORT std::int64_t atanh_i64(std::int64_t x) noexcept {return math::pythonlike::hyperbolic::atanh<std::int64_t>(x);}
extern "C" MFG_EXPORT double atanh_f64(double x) noexcept {return math::pythonlike::hyperbolic::atanh<double>(x);}

extern "C" MFG_EXPORT std::int64_t cosh_i64(std::int64_t x) noexcept {return math::pythonlike::hyperbolic::cosh<std::int64_t>(x);}
extern "C" MFG_EXPORT double cosh_f64(double x) noexcept {return math::pythonlike::hyperbolic::cosh<double>(x);}

extern "C" MFG_EXPORT std::int64_t sinh_i64(std::int64_t x) noexcept {return math::pythonlike::hyperbolic::sinh<std::int64_t>(x);}
extern "C" MFG_EXPORT double sinh_f64(double x) noexcept {return math::pythonlike::hyperbolic::sinh<double>(x);}

extern "C" MFG_EXPORT std::int64_t tanh_i64(std::int64_t x) noexcept {return math::pythonlike::hyperbolic::tanh<std::int64_t>(x);}
extern "C" MFG_EXPORT double tanh_f64(double x) noexcept {return math::pythonlike::hyperbolic::tanh<double>(x);}


// math::pythonlike::special
extern "C" MFG_EXPORT std::int64_t erf_i64(std::int64_t x) noexcept {return math::pythonlike::special::erf<std::int64_t>(x);}
extern "C" MFG_EXPORT double erf_f64(double x) noexcept {return math::pythonlike::special::erf<double>(x);}

extern "C" MFG_EXPORT std::int64_t erfc_i64(std::int64_t x) noexcept {return math::pythonlike::special::erfc<std::int64_t>(x);}
extern "C" MFG_EXPORT double erfc_f64(double x) noexcept {return math::pythonlike::special::erfc<double>(x);}

extern "C" MFG_EXPORT std::int64_t gamma_i64(std::int64_t x) noexcept {return math::pythonlike::special::gamma<std::int64_t>(x);}
extern "C" MFG_EXPORT double gamma_f64(double x) noexcept {return math::pythonlike::special::gamma<double>(x);}

extern "C" MFG_EXPORT std::int64_t lgamma_i64(std::int64_t x) noexcept {return math::pythonlike::special::lgamma<std::int64_t>(x);}
extern "C" MFG_EXPORT double lgamma_f64(double x) noexcept {return math::pythonlike::special::lgamma<double>(x);}
#endif
