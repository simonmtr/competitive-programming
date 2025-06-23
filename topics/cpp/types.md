# Types in C++

## Int
|**Name**|**Size/Type**|**Range**|
|--------|-------------|---------|
|std::int8_t|8 Bit signed|-128 - 127|
|std::int16_t|16 Bit signed|-32.786 - 32.767|
|std::int32_t|32 Bit signed|-2.147.483.648 - 2.147.483.647|
|std::int64_t|64 Bit signed|-9.223.372.036.854.775.808 - 9.223.372.036.854.775.807|
|std::uint8_t|8 Bit unsigned|0 - 255|
|std::uint16_t|16 Bit unsigned|0 - 65.535|
|std::uint32_t|32 Bit unsigned|0 - 4.294.967.295|
|std::uint64_t|64 Bit unsigned|0 - 18.446.744.073.709.551.615|


## Floating Point

|**Type**|**Typical Size**|
|--------|----------------|
|float|4 bytes|
|double|8 bytes|
|long double|8, 12, or 16 bytes|

|**Format**|**Range**|**Precision**|
|----------|---------|-------------|
|IEEE 754 single-precision (4 bytes)|±1.18 x 10-38 to ±3.4 x 1038 and 0.0|6-9 significant digits, typically 7|
|IEEE 754 double-precision (8 bytes)|±2.23 x 10-308 to ±1.80 x 10308 and 0.0|15-18 significant digits, typically 16|
|x87 extended-precision (80 bits)|±3.36 x 10-4932 to ±1.18 x 104932 and 0.0|18-21 significant digits|
|IEEE 754 quadruple-precision (16 bytes)|±3.36 x 10-4932 to ±1.18 x 104932 and 0.0|33-36 significant digits|

## Literal suffixes

|Data type|Suffix|Meaning|
|---------|------|-------|
|integral|u or U|unsigned int|
|integral|l or L|long|
|integral|ul, uL, Ul, UL, lu, lU, Lu, LU|unsigned long
|integral|ll or LL|long long|
|integral|ull, uLL, Ull, ULL, llu, llU, LLu, LLU|unsigned long long|
|integral|z or Z|The signed version of std::size_t (C++23)|
|integral|uz, uZ, Uz, UZ, zu, zU, Zu, ZU|std::size_t (C++23)|
|floating point|f or F|float|
|floating point|l or L|long double|
|string|s|std::string|
|string|sv|std::string_view|
