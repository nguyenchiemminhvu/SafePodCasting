/*
MIT License

Copyright (c) 2025 nguyenchiemminhvu@gmail.com

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#ifndef SAFE_CONVERTER_H
#define SAFE_CONVERTER_H

#include <algorithm>
#include <cstdint>
#include <limits>
#include <type_traits>
#include <cmath>

template <typename T>
T CLAMP_VALUE(const T value, const T min, const T max)
{
    return (value < min) ? min : ((value > max) ? max : value);
}

class SafeCaster
{
public:
    // bool conversions
    static bool boolToBool(bool value);
    static int8_t boolToInt8(bool value);
    static int16_t boolToInt16(bool value);
    static int32_t boolToInt32(bool value);
    static int64_t boolToInt64(bool value);
    static uint8_t boolToUint8(bool value);
    static uint16_t boolToUint16(bool value);
    static uint32_t boolToUint32(bool value);
    static uint64_t boolToUint64(bool value);
    static float boolToFloat(bool value);
    static double boolToDouble(bool value);

    // int8_t conversions
    static bool int8ToBool(int8_t value);
    static int8_t int8ToInt8(int8_t value);
    static int16_t int8ToInt16(int8_t value);
    static int32_t int8ToInt32(int8_t value);
    static int64_t int8ToInt64(int8_t value);
    static uint8_t int8ToUint8(int8_t value);
    static uint16_t int8ToUint16(int8_t value);
    static uint32_t int8ToUint32(int8_t value);
    static uint64_t int8ToUint64(int8_t value);
    static float int8ToFloat(int8_t value);
    static double int8ToDouble(int8_t value);

    // int16_t conversions
    static bool int16ToBool(int16_t value);
    static int8_t int16ToInt8(int16_t value);
    static int16_t int16ToInt16(int16_t value);
    static int32_t int16ToInt32(int16_t value);
    static int64_t int16ToInt64(int16_t value);
    static uint8_t int16ToUint8(int16_t value);
    static uint16_t int16ToUint16(int16_t value);
    static uint32_t int16ToUint32(int16_t value);
    static uint64_t int16ToUint64(int16_t value);
    static float int16ToFloat(int16_t value);
    static double int16ToDouble(int16_t value);

    // int32_t conversions
    static bool int32ToBool(int32_t value);
    static int8_t int32ToInt8(int32_t value);
    static int16_t int32ToInt16(int32_t value);
    static int32_t int32ToInt32(int32_t value);
    static int64_t int32ToInt64(int32_t value);
    static uint8_t int32ToUint8(int32_t value);
    static uint16_t int32ToUint16(int32_t value);
    static uint32_t int32ToUint32(int32_t value);
    static uint64_t int32ToUint64(int32_t value);
    static float int32ToFloat(int32_t value);
    static double int32ToDouble(int32_t value);

    // int64_t conversions
    static bool int64ToBool(int64_t value);
    static int8_t int64ToInt8(int64_t value);
    static int16_t int64ToInt16(int64_t value);
    static int32_t int64ToInt32(int64_t value);
    static int64_t int64ToInt64(int64_t value);
    static uint8_t int64ToUint8(int64_t value);
    static uint16_t int64ToUint16(int64_t value);
    static uint32_t int64ToUint32(int64_t value);
    static uint64_t int64ToUint64(int64_t value);
    static float int64ToFloat(int64_t value);
    static double int64ToDouble(int64_t value);

    // uint8_t conversions
    static bool uint8ToBool(uint8_t value);
    static int8_t uint8ToInt8(uint8_t value);
    static int16_t uint8ToInt16(uint8_t value);
    static int32_t uint8ToInt32(uint8_t value);
    static int64_t uint8ToInt64(uint8_t value);
    static uint8_t uint8ToUint8(uint8_t value);
    static uint16_t uint8ToUint16(uint8_t value);
    static uint32_t uint8ToUint32(uint8_t value);
    static uint64_t uint8ToUint64(uint8_t value);
    static float uint8ToFloat(uint8_t value);
    static double uint8ToDouble(uint8_t value);

    // uint16_t conversions
    static bool uint16ToBool(uint16_t value);
    static int8_t uint16ToInt8(uint16_t value);
    static int16_t uint16ToInt16(uint16_t value);
    static int32_t uint16ToInt32(uint16_t value);
    static int64_t uint16ToInt64(uint16_t value);
    static uint8_t uint16ToUint8(uint16_t value);
    static uint16_t uint16ToUint16(uint16_t value);
    static uint32_t uint16ToUint32(uint16_t value);
    static uint64_t uint16ToUint64(uint16_t value);
    static float uint16ToFloat(uint16_t value);
    static double uint16ToDouble(uint16_t value);

    // uint32_t conversions
    static bool uint32ToBool(uint32_t value);
    static int8_t uint32ToInt8(uint32_t value);
    static int16_t uint32ToInt16(uint32_t value);
    static int32_t uint32ToInt32(uint32_t value);
    static int64_t uint32ToInt64(uint32_t value);
    static uint8_t uint32ToUint8(uint32_t value);
    static uint16_t uint32ToUint16(uint32_t value);
    static uint32_t uint32ToUint32(uint32_t value);
    static uint64_t uint32ToUint64(uint32_t value);
    static float uint32ToFloat(uint32_t value);
    static double uint32ToDouble(uint32_t value);

    // uint64_t conversions
    static bool uint64ToBool(uint64_t value);
    static int8_t uint64ToInt8(uint64_t value);
    static int16_t uint64ToInt16(uint64_t value);
    static int32_t uint64ToInt32(uint64_t value);
    static int64_t uint64ToInt64(uint64_t value);
    static uint8_t uint64ToUint8(uint64_t value);
    static uint16_t uint64ToUint16(uint64_t value);
    static uint32_t uint64ToUint32(uint64_t value);
    static uint64_t uint64ToUint64(uint64_t value);
    static float uint64ToFloat(uint64_t value);
    static double uint64ToDouble(uint64_t value);

    // float conversions
    static bool floatToBool(float value);
    static int8_t floatToInt8(float value);
    static int16_t floatToInt16(float value);
    static int32_t floatToInt32(float value);
    static int64_t floatToInt64(float value);
    static uint8_t floatToUint8(float value);
    static uint16_t floatToUint16(float value);
    static uint32_t floatToUint32(float value);
    static uint64_t floatToUint64(float value);
    static float floatToFloat(float value);
    static double floatToDouble(float value);

    // double conversions
    static bool doubleToBool(double value);
    static int8_t doubleToInt8(double value);
    static int16_t doubleToInt16(double value);
    static int32_t doubleToInt32(double value);
    static int64_t doubleToInt64(double value);
    static uint8_t doubleToUint8(double value);
    static uint16_t doubleToUint16(double value);
    static uint32_t doubleToUint32(double value);
    static uint64_t doubleToUint64(double value);
    static float doubleToFloat(double value);
    static double doubleToDouble(double value);
};

template<typename SourceType, typename TargetType>
TargetType SAFE_CONVERT(SourceType value)
{
    return static_cast<TargetType>(value);
}

#endif // SAFE_CONVERTER_H