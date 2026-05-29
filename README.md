# C++ Library for [GoidaLang](https://github.com/Artem468/goida_lang).

## Building

### 1. mkdir build && cmake -B build -G "MinGW Makefiles" .

### 2. cd build && cmake --build . --parallel 16 --config Release

## Usage

`библиотека "mfg.dll" {`  
&nbsp;&nbsp;&nbsp;&nbsp;`функция pow_i64(x: число, y: число) -> число {}`  
&nbsp;&nbsp;&nbsp;&nbsp;`функция pow_f64(x: дробь, y: дробь) -> дробь {}`  
`}`  
  
`степень_число = pow_i64;`  
`степень_дробь = pow_f64;`  

`печать(степень_число(2, 4));`  
`печать(степень_дробь(2.0, 2.0));`  

## Functions

## Python-like functions

## Number-theoretic functions

##  comb
### * `int64 comb_i64(int64, int64) noexcept`
### * `float64 comb_f64(float64, float64) noexcept`


## factorial

### * `int64 factorial_i64(int64) noexcept`
### * `float64 factorial_f64(float64) noexcept`


## gcd

### * `int64 gcd_i64(int64 *, size_t) noexcept`


## isqrt

### * `int64 isqrt_i64(int64) noexcept`


## lcm

### * `int64 lcm_i64(int64 *, size_t) noexcept`
### * `float64 lcm_f64(float64 *, size_t) noexcept`


## perm

### * `int64 perm_i64(int64, int64) noexcept`
### * `float64 perm_f64(float64, float64) noexcept`


## Floatingpoint arithmetic functions

## ceil

### * `float64 ceil_f64(float64) noexcept`


## fabs

### * `float64 fabs_f64(float64) noexcept`


## floor

### * `float64 floor_f64(float64) noexcept`


## fma

### * `float64 fma_f64(float64, float64, float64) noexcept`


## fmod

### * `float64 fmod_f64(float64, float64) noexcept`


## modf

### * `float64 * modf_f64(float64) noexcept`


## remainder

### * `float64 remainder_f64(float64, float64) noexcept`


## trunc

### * `float64 trunc_f64(float64) noexcept`


## Floatingpoint manipulation functions

## copysign

### * `float64 copysign_f64(float64, float64) noexcept`


## frexp

### * `float64 * frexp_f64(float64) noexcept`


## isclose

### * `bool isclose_b(float64, float64, float64, float64) noexcept`


## isfinite

### * `bool isfinite_b(float64) noexcept`


## isinf

### * `bool isinf_b(float64) noexcept`


## ldexp

### * `float64 ldexp_f64(float64, int32) noexcept`


## nextafter

### * `float64 nextafter_f64(float64, float64) noexcept`


## ulp

### * `float64 ulp_f64(float64) noexcept`


## Power, exponential and logarithmic functions

## cbrt

### * `int64 cbrt_i64(int64) noexcept`
### * `float64 cbrt_f64(float64) noexcept`


## exp

### * `int64 exp_i64(int64) noexcept`
### * `float64 exp_f64(float64) noexcept`


## exp2

### * `int64 exp2_i64(int64) noexcept`
### * `float64 exp2_f64(float64) noexcept`


## expm1

### * `int64 expm1_i64(int64) noexcept`
### * `float64 expm1_f64(float64) noexcept`


## logbase

### * `int64 logbase_i64(int64, int64) noexcept`
### * `float64 logbase_f64(float64, float64) noexcept`


## log1p

### * `int64 log1p_i64(int64) noexcept`
### * `float64 log1p_f64(float64) noexcept`


## log2

### * `int64 log2_i64(int64) noexcept`
### * `float64 log2_f64(float64) noexcept`


## log10

### * `int64 log10_i64(int64) noexcept`
### * `float64 log10_f64(float64) noexcept`


## pow

### * `int64 pow_i64(int64, int64) noexcept`
### * `float64 pow_f64(float64, float64) noexcept`


## sqrt

### * `int64 sqrt_i64(int64) noexcept`
### * `float64 sqrt_f64(float64) noexcept`


## Summation and product functions

## dist

### * `int64 dist_i64(int64, int64) noexcept`
### * `float64 dist_f64(float64, float64) noexcept`


## fsum

### * `float64 fsum_f64(float64 *, size_t) noexcept`


## hypot2d

### * `int64 hypot2d_i64(int64, int64) noexcept`
### * `float64 hypot2d_f64(float64, float64) noexcept`


## hypot3d

### * `int64 hypot3d_i64(int64, int64, int64) noexcept`
### * `float64 hypot3d_f64(float64, float64, float64) noexcept`


## prod

### * `int64 prod_i64(int64 *, size_t) noexcept`
### * `float64 prod_f64(float64 *, size_t) noexcept`


## sumprod

### * `int64 sumprod_i64(int64 *, int64 *, size_t, size_t) noexcept`
### * `float64 sumprod_f64(float64 *, float64, size_t, size_t) noexcept`


## Angular conversion functions

## degrees

### * `int64 degrees_i64(int64) noexcept`
### * `float64 degrees_f64(float64) noexcept`


## radians

### * `int64 radians_i64(int64) noexcept`
### * `float64 radians_f64(float64) noexcept`


## Trigonometric functions

## acos

### * `int64 acos_i64(int64) noexcept`
### * `float64 acos_f64(float64) noexcept`


## asin

### * `int64 asin_i64(int64) noexcept`
### * `float64 asin_f64(float64) noexcept`


## atan

### * `int64 atan_i64(int64) noexcept`
### * `float64 atan_f64(float64) noexcept`


## atan2

### * `int64 atan2_i64(int64) noexcept`
### * `float64 atan2_f64(float64) noexcept`


## cos

### * `int64 cos_i64(int64) noexcept`
### * `float64 cos_f64(float64) noexcept`


## sin

### * `int64 sin_i64(int64) noexcept`
### * `float64 sin_f64(float64) noexcept`


## tan

### * `int64 tan_i64(int64) noexcept`
### * `float64 tan_f64(float64) noexcept`


## Hyperbolic functions

## acosh

### * `int64 acosh_i64(int64) noexcept`
### * `float64 acosh_f64(float64) noexcept`


## asinh

### * `int64 asinh_i64(int64) noexcept`
### * `float64 asinh_f64(float64) noexcept`


## atanh

### * `int64 atanh_i64(int64) noexcept`
### * `float64 atanh_f64(float64) noexcept`


## cosh

### * `int64 cosh_i64(int64) noexcept`
### * `float64 cosh_f64(float64) noexcept`


## sinh

### * `int64 sinh_i64(int64) noexcept`
### * `float64 sinh_f64(float64) noexcept`


## tanh

### * `int64 tanh_i64(int64) noexcept`
### * `float64 tanh_f64(float64) noexcept`


## Special functions

## erf

### * `int64 erf_i64(int64) noexcept`
### * `float64 erf_f64(float64) noexcept`


## erfc

### * `int64 erfc_i64(int64) noexcept`
### * `float64 erfc_f64(float64) noexcept`


## gamma

### * `int64 gamma_i64(int64) noexcept`
### * `float64 gamma_f64(float64) noexcept`


## lgamma

### * `int64 lgamma_i64(int64) noexcept`
### * `float64 lgamma_f64(float64) noexcept`


## Constants

## PI

## E

## TAU