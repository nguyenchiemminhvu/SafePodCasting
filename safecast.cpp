#include "safecast.h"

#ifndef EPSILON
#define EPSILON (1e-9)
#endif

// bool conversions
int8_t SafeCast::boolToInt8(bool value)
{
    return value ? static_cast<int8_t>(1) : static_cast<int8_t>(0);
}

int16_t SafeCast::boolToInt16(bool value)
{
    return value ? static_cast<int16_t>(1) : static_cast<int16_t>(0);
}

int32_t SafeCast::boolToInt32(bool value)
{
    return value ? static_cast<int32_t>(1) : static_cast<int32_t>(0);
}

int64_t SafeCast::boolToInt64(bool value)
{
    return value ? static_cast<int64_t>(1) : static_cast<int64_t>(0);
}

uint8_t SafeCast::boolToUint8(bool value)
{
    return value ? static_cast<uint8_t>(1U) : static_cast<uint8_t>(0U);
}

uint16_t SafeCast::boolToUint16(bool value)
{
    return value ? static_cast<uint16_t>(1U) : static_cast<uint16_t>(0U);
}

uint32_t SafeCast::boolToUint32(bool value)
{
    return value ? static_cast<uint32_t>(1U) : static_cast<uint32_t>(0U);
}

uint64_t SafeCast::boolToUint64(bool value)
{
    return value ? static_cast<uint64_t>(1U) : static_cast<uint64_t>(0U);
}

float SafeCast::boolToFloat(bool value)
{
    return value ? 1.0f : 0.0f;
}

double SafeCast::boolToDouble(bool value)
{
    return value ? 1.0 : 0.0;
}

// int8_t conversions
bool SafeCast::int8ToBool(int8_t value)
{
    return value != 0;
}

int16_t SafeCast::int8ToInt16(int8_t value)
{
    return static_cast<int16_t>(value);
}

int32_t SafeCast::int8ToInt32(int8_t value)
{
    return static_cast<int32_t>(value);
}

int64_t SafeCast::int8ToInt64(int8_t value)
{
    return static_cast<int64_t>(value);
}

uint8_t SafeCast::int8ToUint8(int8_t value)
{
    if (value < 0)
    {
        return 0U;
    }
    return static_cast<uint8_t>(value);
}

uint16_t SafeCast::int8ToUint16(int8_t value)
{
    if (value < 0)
    {
        return 0U;
    }
    return static_cast<uint16_t>(value);
}

uint32_t SafeCast::int8ToUint32(int8_t value)
{
    if (value < 0)
    {
        return 0U;
    }
    return static_cast<uint32_t>(value);
}

uint64_t SafeCast::int8ToUint64(int8_t value)
{
    if (value < 0)
    {
        return 0U;
    }
    return static_cast<uint64_t>(value);
}

float SafeCast::int8ToFloat(int8_t value)
{
    return static_cast<float>(value);
}

double SafeCast::int8ToDouble(int8_t value)
{
    return static_cast<double>(value);
}

// int16_t conversions
bool SafeCast::int16ToBool(int16_t value)
{
    return value != 0;
}

int8_t SafeCast::int16ToInt8(int16_t value)
{
    if (value < static_cast<int16_t>(INT8_MIN))
    {
        return static_cast<int8_t>(INT8_MIN);
    }
    if (value > static_cast<int16_t>(INT8_MAX))
    {
        return static_cast<int8_t>(INT8_MAX);
    }
    return static_cast<int8_t>(value);
}

int32_t SafeCast::int16ToInt32(int16_t value)
{
    return static_cast<int32_t>(value);
}

int64_t SafeCast::int16ToInt64(int16_t value)
{
    return static_cast<int64_t>(value);
}

uint8_t SafeCast::int16ToUint8(int16_t value)
{
    if (value < 0)
    {
        return 0U;
    }
    if (value > static_cast<int16_t>(UINT8_MAX))
    {
        return static_cast<uint8_t>(UINT8_MAX);
    }
    return static_cast<uint8_t>(value);
}

uint16_t SafeCast::int16ToUint16(int16_t value)
{
    if (value < 0)
    {
        return 0U;
    }
    return static_cast<uint16_t>(value);
}

uint32_t SafeCast::int16ToUint32(int16_t value)
{
    if (value < 0)
    {
        return 0U;
    }
    return static_cast<uint32_t>(value);
}

uint64_t SafeCast::int16ToUint64(int16_t value)
{
    if (value < 0)
    {
        return 0U;
    }
    return static_cast<uint64_t>(value);
}

float SafeCast::int16ToFloat(int16_t value)
{
    return static_cast<float>(value);
}

double SafeCast::int16ToDouble(int16_t value)
{
    return static_cast<double>(value);
}

// int32_t conversions
bool SafeCast::int32ToBool(int32_t value)
{
    return value != 0;
}

int8_t SafeCast::int32ToInt8(int32_t value)
{
    if (value < static_cast<int32_t>(INT8_MIN))
    {
        return static_cast<int8_t>(INT8_MIN);
    }
    if (value > static_cast<int32_t>(INT8_MAX))
    {
        return static_cast<int8_t>(INT8_MAX);
    }
    return static_cast<int8_t>(value);
}

int16_t SafeCast::int32ToInt16(int32_t value)
{
    if (value < static_cast<int32_t>(INT16_MIN))
    {
        return static_cast<int16_t>(INT16_MIN);
    }
    if (value > static_cast<int32_t>(INT16_MAX))
    {
        return static_cast<int16_t>(INT16_MAX);
    }
    return static_cast<int16_t>(value);
}

int64_t SafeCast::int32ToInt64(int32_t value)
{
    return static_cast<int64_t>(value);
}

uint8_t SafeCast::int32ToUint8(int32_t value)
{
    if (value < 0)
    {
        return 0U;
    }
    if (value > static_cast<int32_t>(UINT8_MAX))
    {
        return static_cast<uint8_t>(UINT8_MAX);
    }
    return static_cast<uint8_t>(value);
}

uint16_t SafeCast::int32ToUint16(int32_t value)
{
    if (value < 0)
    {
        return 0U;
    }
    if (value > static_cast<int32_t>(UINT16_MAX))
    {
        return static_cast<uint16_t>(UINT16_MAX);
    }
    return static_cast<uint16_t>(value);
}

uint32_t SafeCast::int32ToUint32(int32_t value)
{
    if (value < 0)
    {
        return 0U;
    }
    return static_cast<uint32_t>(value);
}

uint64_t SafeCast::int32ToUint64(int32_t value)
{
    if (value < 0)
    {
        return 0U;
    }
    return static_cast<uint64_t>(value);
}

float SafeCast::int32ToFloat(int32_t value)
{
    return static_cast<float>(value);
}

double SafeCast::int32ToDouble(int32_t value)
{
    return static_cast<double>(value);
}

// int64_t conversions
bool SafeCast::int64ToBool(int64_t value)
{
    return value != 0;
}

int8_t SafeCast::int64ToInt8(int64_t value)
{
    if (value < static_cast<int64_t>(INT8_MIN))
    {
        return static_cast<int8_t>(INT8_MIN);
    }
    if (value > static_cast<int64_t>(INT8_MAX))
    {
        return static_cast<int8_t>(INT8_MAX);
    }
    return static_cast<int8_t>(value);
}

int16_t SafeCast::int64ToInt16(int64_t value)
{
    if (value < static_cast<int64_t>(INT16_MIN))
    {
        return static_cast<int16_t>(INT16_MIN);
    }
    if (value > static_cast<int64_t>(INT16_MAX))
    {
        return static_cast<int16_t>(INT16_MAX);
    }
    return static_cast<int16_t>(value);
}

int32_t SafeCast::int64ToInt32(int64_t value)
{
    if (value < static_cast<int64_t>(INT32_MIN))
    {
        return static_cast<int32_t>(INT32_MIN);
    }
    if (value > static_cast<int64_t>(INT32_MAX))
    {
        return static_cast<int32_t>(INT32_MAX);
    }
    return static_cast<int32_t>(value);
}

uint8_t SafeCast::int64ToUint8(int64_t value)
{
    if (value < 0)
    {
        return 0U;
    }
    if (value > static_cast<int64_t>(UINT8_MAX))
    {
        return static_cast<uint8_t>(UINT8_MAX);
    }
    return static_cast<uint8_t>(value);
}

uint16_t SafeCast::int64ToUint16(int64_t value)
{
    if (value < 0)
    {
        return 0U;
    }
    if (value > static_cast<int64_t>(UINT16_MAX))
    {
        return static_cast<uint16_t>(UINT16_MAX);
    }
    return static_cast<uint16_t>(value);
}

uint32_t SafeCast::int64ToUint32(int64_t value)
{
    if (value < 0)
    {
        return 0U;
    }
    if (value > static_cast<int64_t>(UINT32_MAX))
    {
        return static_cast<uint32_t>(UINT32_MAX);
    }
    return static_cast<uint32_t>(value);
}

uint64_t SafeCast::int64ToUint64(int64_t value)
{
    if (value < 0)
    {
        return 0U;
    }
    return static_cast<uint64_t>(value);
}

float SafeCast::int64ToFloat(int64_t value)
{
    if (static_cast<double>(value) < static_cast<double>(-FLT_MAX))
    {
        return -FLT_MAX;
    }
    if (static_cast<double>(value) > static_cast<double>(FLT_MAX))
    {
        return FLT_MAX;
    }
    return static_cast<float>(value);
}

double SafeCast::int64ToDouble(int64_t value)
{
    return static_cast<double>(value);
}

// uint8_t conversions
bool SafeCast::uint8ToBool(uint8_t value)
{
    return value != 0U;
}

int8_t SafeCast::uint8ToInt8(uint8_t value)
{
    if (value > static_cast<uint8_t>(INT8_MAX))
    {
        return static_cast<int8_t>(INT8_MAX);
    }
    return static_cast<int8_t>(value);
}

int16_t SafeCast::uint8ToInt16(uint8_t value)
{
    return static_cast<int16_t>(value);
}

int32_t SafeCast::uint8ToInt32(uint8_t value)
{
    return static_cast<int32_t>(value);
}

int64_t SafeCast::uint8ToInt64(uint8_t value)
{
    return static_cast<int64_t>(value);
}

uint16_t SafeCast::uint8ToUint16(uint8_t value)
{
    return static_cast<uint16_t>(value);
}

uint32_t SafeCast::uint8ToUint32(uint8_t value)
{
    return static_cast<uint32_t>(value);
}

uint64_t SafeCast::uint8ToUint64(uint8_t value)
{
    return static_cast<uint64_t>(value);
}

float SafeCast::uint8ToFloat(uint8_t value)
{
    return static_cast<float>(value);
}

double SafeCast::uint8ToDouble(uint8_t value)
{
    return static_cast<double>(value);
}

// uint16_t conversions
bool SafeCast::uint16ToBool(uint16_t value)
{
    return value != 0U;
}

int8_t SafeCast::uint16ToInt8(uint16_t value)
{
    if (value > static_cast<uint16_t>(INT8_MAX))
    {
        return static_cast<int8_t>(INT8_MAX);
    }
    return static_cast<int8_t>(value);
}

int16_t SafeCast::uint16ToInt16(uint16_t value)
{
    if (value > static_cast<uint16_t>(INT16_MAX))
    {
        return static_cast<int16_t>(INT16_MAX);
    }
    return static_cast<int16_t>(value);
}

int32_t SafeCast::uint16ToInt32(uint16_t value)
{
    return static_cast<int32_t>(value);
}

int64_t SafeCast::uint16ToInt64(uint16_t value)
{
    return static_cast<int64_t>(value);
}

uint8_t SafeCast::uint16ToUint8(uint16_t value)
{
    if (value > static_cast<uint16_t>(UINT8_MAX))
    {
        return static_cast<uint8_t>(UINT8_MAX);
    }
    return static_cast<uint8_t>(value);
}

uint32_t SafeCast::uint16ToUint32(uint16_t value)
{
    return static_cast<uint32_t>(value);
}

uint64_t SafeCast::uint16ToUint64(uint16_t value)
{
    return static_cast<uint64_t>(value);
}

float SafeCast::uint16ToFloat(uint16_t value)
{
    return static_cast<float>(value);
}

double SafeCast::uint16ToDouble(uint16_t value)
{
    return static_cast<double>(value);
}

// uint32_t conversions
bool SafeCast::uint32ToBool(uint32_t value)
{
    return value != 0U;
}

int8_t SafeCast::uint32ToInt8(uint32_t value)
{
    if (value > static_cast<uint32_t>(INT8_MAX))
    {
        return static_cast<int8_t>(INT8_MAX);
    }
    return static_cast<int8_t>(value);
}

int16_t SafeCast::uint32ToInt16(uint32_t value)
{
    if (value > static_cast<uint32_t>(INT16_MAX))
    {
        return static_cast<int16_t>(INT16_MAX);
    }
    return static_cast<int16_t>(value);
}

int32_t SafeCast::uint32ToInt32(uint32_t value)
{
    if (value > static_cast<uint32_t>(INT32_MAX))
    {
        return static_cast<int32_t>(INT32_MAX);
    }
    return static_cast<int32_t>(value);
}

int64_t SafeCast::uint32ToInt64(uint32_t value)
{
    return static_cast<int64_t>(value);
}

uint8_t SafeCast::uint32ToUint8(uint32_t value)
{
    if (value > static_cast<uint32_t>(UINT8_MAX))
    {
        return static_cast<uint8_t>(UINT8_MAX);
    }
    return static_cast<uint8_t>(value);
}

uint16_t SafeCast::uint32ToUint16(uint32_t value)
{
    if (value > static_cast<uint32_t>(UINT16_MAX))
    {
        return static_cast<uint16_t>(UINT16_MAX);
    }
    return static_cast<uint16_t>(value);
}

uint64_t SafeCast::uint32ToUint64(uint32_t value)
{
    return static_cast<uint64_t>(value);
}

float SafeCast::uint32ToFloat(uint32_t value)
{
    return static_cast<float>(value);
}

double SafeCast::uint32ToDouble(uint32_t value)
{
    return static_cast<double>(value);
}

// uint64_t conversions
bool SafeCast::uint64ToBool(uint64_t value)
{
    return value != 0U;
}

int8_t SafeCast::uint64ToInt8(uint64_t value)
{
    if (value > static_cast<uint64_t>(INT8_MAX))
    {
        return static_cast<int8_t>(INT8_MAX);
    }
    return static_cast<int8_t>(value);
}

int16_t SafeCast::uint64ToInt16(uint64_t value)
{
    if (value > static_cast<uint64_t>(INT16_MAX))
    {
        return static_cast<int16_t>(INT16_MAX);
    }
    return static_cast<int16_t>(value);
}

int32_t SafeCast::uint64ToInt32(uint64_t value)
{
    if (value > static_cast<uint64_t>(INT32_MAX))
    {
        return static_cast<int32_t>(INT32_MAX);
    }
    return static_cast<int32_t>(value);
}

int64_t SafeCast::uint64ToInt64(uint64_t value)
{
    if (value > static_cast<uint64_t>(INT64_MAX))
    {
        return static_cast<int64_t>(INT64_MAX);
    }
    return static_cast<int64_t>(value);
}

uint8_t SafeCast::uint64ToUint8(uint64_t value)
{
    if (value > static_cast<uint64_t>(UINT8_MAX))
    {
        return static_cast<uint8_t>(UINT8_MAX);
    }
    return static_cast<uint8_t>(value);
}

uint16_t SafeCast::uint64ToUint16(uint64_t value)
{
    if (value > static_cast<uint64_t>(UINT16_MAX))
    {
        return static_cast<uint16_t>(UINT16_MAX);
    }
    return static_cast<uint16_t>(value);
}

uint32_t SafeCast::uint64ToUint32(uint64_t value)
{
    if (value > static_cast<uint64_t>(UINT32_MAX))
    {
        return static_cast<uint32_t>(UINT32_MAX);
    }
    return static_cast<uint32_t>(value);
}

float SafeCast::uint64ToFloat(uint64_t value)
{
    return static_cast<float>(value);
}

double SafeCast::uint64ToDouble(uint64_t value)
{
    return static_cast<double>(value);
}

// float conversions
bool SafeCast::floatToBool(float value)
{
    return std::abs(static_cast<double>(value)) >= EPSILON; // not zero
}

int8_t SafeCast::floatToInt8(float value)
{
    if (static_cast<double>(value) <= static_cast<double>(INT8_MIN))
    {
        return static_cast<int8_t>(INT8_MIN);
    }
    if (static_cast<double>(value) >= static_cast<double>(INT8_MAX))
    {
        return static_cast<int8_t>(INT8_MAX);
    }
    return static_cast<int8_t>(value);
}

int16_t SafeCast::floatToInt16(float value)
{
    if (static_cast<double>(value) <= static_cast<double>(INT16_MIN))
    {
        return static_cast<int16_t>(INT16_MIN);
    }
    if (static_cast<double>(value) >= static_cast<double>(INT16_MAX))
    {
        return static_cast<int16_t>(INT16_MAX);
    }
    return static_cast<int16_t>(value);
}

int32_t SafeCast::floatToInt32(float value)
{
    if (static_cast<double>(value) <= static_cast<double>(INT32_MIN))
    {
        return static_cast<int32_t>(INT32_MIN);
    }
    if (static_cast<double>(value) >= static_cast<double>(INT32_MAX))
    {
        return static_cast<int32_t>(INT32_MAX);
    }
    return static_cast<int32_t>(value);
}

int64_t SafeCast::floatToInt64(float value)
{
    if ((double)value <= static_cast<double>(INT64_MIN))
    {
        return static_cast<int64_t>(INT64_MIN);
    }
    if ((double)value >= static_cast<double>(INT64_MAX))
    {
        return static_cast<int64_t>(INT64_MAX);
    }
    return static_cast<int64_t>(value);
}

uint8_t SafeCast::floatToUint8(float value)
{
    if (static_cast<double>(value) <= 0.0)
    {
        return 0U;
    }
    if (static_cast<double>(value) >= static_cast<double>(UINT8_MAX))
    {
        return static_cast<uint8_t>(UINT8_MAX);
    }
    return static_cast<uint8_t>(value);
}

uint16_t SafeCast::floatToUint16(float value)
{
    if (static_cast<double>(value) <= 0.0)
    {
        return 0U;
    }
    if (static_cast<double>(value) >= static_cast<double>(UINT16_MAX))
    {
        return static_cast<uint16_t>(UINT16_MAX);
    }
    return static_cast<uint16_t>(value);
}

uint32_t SafeCast::floatToUint32(float value)
{
    if (static_cast<double>(value) <= 0.0)
    {
        return 0U;
    }
    if (static_cast<double>(value) >= static_cast<double>(UINT32_MAX))
    {
        return static_cast<uint32_t>(UINT32_MAX);
    }
    return static_cast<uint32_t>(value);
}

uint64_t SafeCast::floatToUint64(float value)
{
    if (static_cast<double>(value) <= 0.0)
    {
        return 0U;
    }
    if (static_cast<double>(value) >= static_cast<double>(UINT64_MAX))
    {
        return static_cast<uint64_t>(UINT64_MAX);
    }
    return static_cast<uint64_t>(value);
}

double SafeCast::floatToDouble(float value)
{
    return static_cast<double>(value);
}

// double conversions
bool SafeCast::doubleToBool(double value)
{
    return std::abs(value) >= EPSILON; // not zero
}

int8_t SafeCast::doubleToInt8(double value)
{
    if (value <= static_cast<double>(INT8_MIN))
    {
        return static_cast<int8_t>(INT8_MIN);
    }
    if (value >= static_cast<double>(INT8_MAX))
    {
        return static_cast<int8_t>(INT8_MAX);
    }
    return static_cast<int8_t>(value);
}

int16_t SafeCast::doubleToInt16(double value)
{
    if (value <= static_cast<double>(INT16_MIN))
    {
        return static_cast<int16_t>(INT16_MIN);
    }
    if (value >= static_cast<double>(INT16_MAX))
    {
        return static_cast<int16_t>(INT16_MAX);
    }
    return static_cast<int16_t>(value);
}

int32_t SafeCast::doubleToInt32(double value)
{
    if (value <= static_cast<double>(INT32_MIN))
    {
        return static_cast<int32_t>(INT32_MIN);
    }
    if (value >= static_cast<double>(INT32_MAX))
    {
        return static_cast<int32_t>(INT32_MAX);
    }
    return static_cast<int32_t>(value);
}

int64_t SafeCast::doubleToInt64(double value)
{
    if (value <= static_cast<double>(INT64_MIN))
    {
        return static_cast<int64_t>(INT64_MIN);
    }
    if (value >= static_cast<double>(INT64_MAX))
    {
        return static_cast<int64_t>(INT64_MAX);
    }
    return static_cast<int64_t>(value);
}

uint8_t SafeCast::doubleToUint8(double value)
{
    if (value <= 0.0)
    {
        return 0U;
    }
    if (value >= static_cast<double>(UINT8_MAX))
    {
        return static_cast<uint8_t>(UINT8_MAX);
    }
    return static_cast<uint8_t>(value);
}

uint16_t SafeCast::doubleToUint16(double value)
{
    if (value <= 0.0)
    {
        return 0U;
    }
    if (value >= static_cast<double>(UINT16_MAX))
    {
        return static_cast<uint16_t>(UINT16_MAX);
    }
    return static_cast<uint16_t>(value);
}

uint32_t SafeCast::doubleToUint32(double value)
{
    if (value <= 0.0)
    {
        return 0U;
    }
    if (value >= static_cast<double>(UINT32_MAX))
    {
        return static_cast<uint32_t>(UINT32_MAX);
    }
    return static_cast<uint32_t>(value);
}

uint64_t SafeCast::doubleToUint64(double value)
{
    if (value <= 0.0)
    {
        return 0U;
    }
    if (value >= static_cast<double>(UINT64_MAX))
    {
        return static_cast<uint64_t>(UINT64_MAX);
    }
    return static_cast<uint64_t>(value);
}

float SafeCast::doubleToFloat(double value)
{
    if (value <= static_cast<double>(-FLT_MAX))
    {
        return -FLT_MAX;
    }
    if (value >= static_cast<double>(FLT_MAX))
    {
        return FLT_MAX;
    }
    return static_cast<float>(value);
}

template<>
int8_t SAFE_CAST<bool, int8_t>(bool value)
{
    return SafeCast::boolToInt8(value);
}

template<>
int16_t SAFE_CAST<bool, int16_t>(bool value)
{
    return SafeCast::boolToInt16(value);
}

template<>
int32_t SAFE_CAST<bool, int32_t>(bool value)
{
    return SafeCast::boolToInt32(value);
}

template<>
int64_t SAFE_CAST<bool, int64_t>(bool value)
{
    return SafeCast::boolToInt64(value);
}

template<>
uint8_t SAFE_CAST<bool, uint8_t>(bool value)
{
    return SafeCast::boolToUint8(value);
}

template<>
uint16_t SAFE_CAST<bool, uint16_t>(bool value)
{
    return SafeCast::boolToUint16(value);
}

template<>
uint32_t SAFE_CAST<bool, uint32_t>(bool value)
{
    return SafeCast::boolToUint32(value);
}

template<>
uint64_t SAFE_CAST<bool, uint64_t>(bool value)
{
    return SafeCast::boolToUint64(value);
}

template<>
float SAFE_CAST<bool, float>(bool value)
{
    return SafeCast::boolToFloat(value);
}

template<>
double SAFE_CAST<bool, double>(bool value)
{
    return SafeCast::boolToDouble(value);
}

// int8_t conversions
template<>
bool SAFE_CAST<int8_t, bool>(int8_t value)
{
    return SafeCast::int8ToBool(value);
}

template<>
int16_t SAFE_CAST<int8_t, int16_t>(int8_t value)
{
    return SafeCast::int8ToInt16(value);
}

template<>
int32_t SAFE_CAST<int8_t, int32_t>(int8_t value)
{
    return SafeCast::int8ToInt32(value);
}

template<>
int64_t SAFE_CAST<int8_t, int64_t>(int8_t value)
{
    return SafeCast::int8ToInt64(value);
}

template<>
uint8_t SAFE_CAST<int8_t, uint8_t>(int8_t value)
{
    return SafeCast::int8ToUint8(value);
}

template<>
uint16_t SAFE_CAST<int8_t, uint16_t>(int8_t value)
{
    return SafeCast::int8ToUint16(value);
}

template<>
uint32_t SAFE_CAST<int8_t, uint32_t>(int8_t value)
{
    return SafeCast::int8ToUint32(value);
}

template<>
uint64_t SAFE_CAST<int8_t, uint64_t>(int8_t value)
{
    return SafeCast::int8ToUint64(value);
}

template<>
float SAFE_CAST<int8_t, float>(int8_t value)
{
    return SafeCast::int8ToFloat(value);
}

template<>
double SAFE_CAST<int8_t, double>(int8_t value)
{
    return SafeCast::int8ToDouble(value);
}

// int16_t conversions
template<>
bool SAFE_CAST<int16_t, bool>(int16_t value)
{
    return SafeCast::int16ToBool(value);
}

template<>
int8_t SAFE_CAST<int16_t, int8_t>(int16_t value)
{
    return SafeCast::int16ToInt8(value);
}

template<>
int32_t SAFE_CAST<int16_t, int32_t>(int16_t value)
{
    return SafeCast::int16ToInt32(value);
}

template<>
int64_t SAFE_CAST<int16_t, int64_t>(int16_t value)
{
    return SafeCast::int16ToInt64(value);
}

template<>
uint8_t SAFE_CAST<int16_t, uint8_t>(int16_t value)
{
    return SafeCast::int16ToUint8(value);
}

template<>
uint16_t SAFE_CAST<int16_t, uint16_t>(int16_t value)
{
    return SafeCast::int16ToUint16(value);
}

template<>
uint32_t SAFE_CAST<int16_t, uint32_t>(int16_t value)
{
    return SafeCast::int16ToUint32(value);
}

template<>
uint64_t SAFE_CAST<int16_t, uint64_t>(int16_t value)
{
    return SafeCast::int16ToUint64(value);
}

template<>
float SAFE_CAST<int16_t, float>(int16_t value)
{
    return SafeCast::int16ToFloat(value);
}

template<>
double SAFE_CAST<int16_t, double>(int16_t value)
{
    return SafeCast::int16ToDouble(value);
}

// int32_t conversions
template<>
bool SAFE_CAST<int32_t, bool>(int32_t value)
{
    return SafeCast::int32ToBool(value);
}

template<>
int8_t SAFE_CAST<int32_t, int8_t>(int32_t value)
{
    return SafeCast::int32ToInt8(value);
}

template<>
int16_t SAFE_CAST<int32_t, int16_t>(int32_t value)
{
    return SafeCast::int32ToInt16(value);
}

template<>
int64_t SAFE_CAST<int32_t, int64_t>(int32_t value)
{
    return SafeCast::int32ToInt64(value);
}

template<>
uint8_t SAFE_CAST<int32_t, uint8_t>(int32_t value)
{
    return SafeCast::int32ToUint8(value);
}

template<>
uint16_t SAFE_CAST<int32_t, uint16_t>(int32_t value)
{
    return SafeCast::int32ToUint16(value);
}

template<>
uint32_t SAFE_CAST<int32_t, uint32_t>(int32_t value)
{
    return SafeCast::int32ToUint32(value);
}

template<>
uint64_t SAFE_CAST<int32_t, uint64_t>(int32_t value)
{
    return SafeCast::int32ToUint64(value);
}

template<>
float SAFE_CAST<int32_t, float>(int32_t value)
{
    return SafeCast::int32ToFloat(value);
}

template<>
double SAFE_CAST<int32_t, double>(int32_t value)
{
    return SafeCast::int32ToDouble(value);
}

// int64_t conversions
template<>
bool SAFE_CAST<int64_t, bool>(int64_t value)
{
    return SafeCast::int64ToBool(value);
}

template<>
int8_t SAFE_CAST<int64_t, int8_t>(int64_t value)
{
    return SafeCast::int64ToInt8(value);
}

template<>
int16_t SAFE_CAST<int64_t, int16_t>(int64_t value)
{
    return SafeCast::int64ToInt16(value);
}

template<>
int32_t SAFE_CAST<int64_t, int32_t>(int64_t value)
{
    return SafeCast::int64ToInt32(value);
}

template<>
uint8_t SAFE_CAST<int64_t, uint8_t>(int64_t value)
{
    return SafeCast::int64ToUint8(value);
}

template<>
uint16_t SAFE_CAST<int64_t, uint16_t>(int64_t value)
{
    return SafeCast::int64ToUint16(value);
}

template<>
uint32_t SAFE_CAST<int64_t, uint32_t>(int64_t value)
{
    return SafeCast::int64ToUint32(value);
}

template<>
uint64_t SAFE_CAST<int64_t, uint64_t>(int64_t value)
{
    return SafeCast::int64ToUint64(value);
}

template<>
float SAFE_CAST<int64_t, float>(int64_t value)
{
    return SafeCast::int64ToFloat(value);
}

template<>
double SAFE_CAST<int64_t, double>(int64_t value)
{
    return SafeCast::int64ToDouble(value);
}

// uint8_t conversions
template<>
bool SAFE_CAST<uint8_t, bool>(uint8_t value)
{
    return SafeCast::uint8ToBool(value);
}

template<>
int8_t SAFE_CAST<uint8_t, int8_t>(uint8_t value)
{
    return SafeCast::uint8ToInt8(value);
}

template<>
int16_t SAFE_CAST<uint8_t, int16_t>(uint8_t value)
{
    return SafeCast::uint8ToInt16(value);
}

template<>
int32_t SAFE_CAST<uint8_t, int32_t>(uint8_t value)
{
    return SafeCast::uint8ToInt32(value);
}

template<>
int64_t SAFE_CAST<uint8_t, int64_t>(uint8_t value)
{
    return SafeCast::uint8ToInt64(value);
}

template<>
uint16_t SAFE_CAST<uint8_t, uint16_t>(uint8_t value)
{
    return SafeCast::uint8ToUint16(value);
}

template<>
uint32_t SAFE_CAST<uint8_t, uint32_t>(uint8_t value)
{
    return SafeCast::uint8ToUint32(value);
}

template<>
uint64_t SAFE_CAST<uint8_t, uint64_t>(uint8_t value)
{
    return SafeCast::uint8ToUint64(value);
}

template<>
float SAFE_CAST<uint8_t, float>(uint8_t value)
{
    return SafeCast::uint8ToFloat(value);
}

template<>
double SAFE_CAST<uint8_t, double>(uint8_t value)
{
    return SafeCast::uint8ToDouble(value);
}

// uint16_t conversions
template<>
bool SAFE_CAST<uint16_t, bool>(uint16_t value)
{
    return SafeCast::uint16ToBool(value);
}

template<>
int8_t SAFE_CAST<uint16_t, int8_t>(uint16_t value)
{
    return SafeCast::uint16ToInt8(value);
}

template<>
int16_t SAFE_CAST<uint16_t, int16_t>(uint16_t value)
{
    return SafeCast::uint16ToInt16(value);
}

template<>
int32_t SAFE_CAST<uint16_t, int32_t>(uint16_t value)
{
    return SafeCast::uint16ToInt32(value);
}

template<>
int64_t SAFE_CAST<uint16_t, int64_t>(uint16_t value)
{
    return SafeCast::uint16ToInt64(value);
}

template<>
uint8_t SAFE_CAST<uint16_t, uint8_t>(uint16_t value)
{
    return SafeCast::uint16ToUint8(value);
}

template<>
uint32_t SAFE_CAST<uint16_t, uint32_t>(uint16_t value)
{
    return SafeCast::uint16ToUint32(value);
}

template<>
uint64_t SAFE_CAST<uint16_t, uint64_t>(uint16_t value)
{
    return SafeCast::uint16ToUint64(value);
}

template<>
float SAFE_CAST<uint16_t, float>(uint16_t value)
{
    return SafeCast::uint16ToFloat(value);
}

template<>
double SAFE_CAST<uint16_t, double>(uint16_t value)
{
    return SafeCast::uint16ToDouble(value);
}

// uint32_t conversions
template<>
bool SAFE_CAST<uint32_t, bool>(uint32_t value)
{
    return SafeCast::uint32ToBool(value);
}

template<>
int8_t SAFE_CAST<uint32_t, int8_t>(uint32_t value)
{
    return SafeCast::uint32ToInt8(value);
}

template<>
int16_t SAFE_CAST<uint32_t, int16_t>(uint32_t value)
{
    return SafeCast::uint32ToInt16(value);
}

template<>
int32_t SAFE_CAST<uint32_t, int32_t>(uint32_t value)
{
    return SafeCast::uint32ToInt32(value);
}

template<>
int64_t SAFE_CAST<uint32_t, int64_t>(uint32_t value)
{
    return SafeCast::uint32ToInt64(value);
}

template<>
uint8_t SAFE_CAST<uint32_t, uint8_t>(uint32_t value)
{
    return SafeCast::uint32ToUint8(value);
}

template<>
uint16_t SAFE_CAST<uint32_t, uint16_t>(uint32_t value)
{
    return SafeCast::uint32ToUint16(value);
}

template<>
uint64_t SAFE_CAST<uint32_t, uint64_t>(uint32_t value)
{
    return SafeCast::uint32ToUint64(value);
}

template<>
float SAFE_CAST<uint32_t, float>(uint32_t value)
{
    return SafeCast::uint32ToFloat(value);
}

template<>
double SAFE_CAST<uint32_t, double>(uint32_t value)
{
    return SafeCast::uint32ToDouble(value);
}

// uint64_t conversions
template<>
bool SAFE_CAST<uint64_t, bool>(uint64_t value)
{
    return SafeCast::uint64ToBool(value);
}

template<>
int8_t SAFE_CAST<uint64_t, int8_t>(uint64_t value)
{
    return SafeCast::uint64ToInt8(value);
}

template<>
int16_t SAFE_CAST<uint64_t, int16_t>(uint64_t value)
{
    return SafeCast::uint64ToInt16(value);
}

template<>
int32_t SAFE_CAST<uint64_t, int32_t>(uint64_t value)
{
    return SafeCast::uint64ToInt32(value);
}

template<>
int64_t SAFE_CAST<uint64_t, int64_t>(uint64_t value)
{
    return SafeCast::uint64ToInt64(value);
}

template<>
uint8_t SAFE_CAST<uint64_t, uint8_t>(uint64_t value)
{
    return SafeCast::uint64ToUint8(value);
}

template<>
uint16_t SAFE_CAST<uint64_t, uint16_t>(uint64_t value)
{
    return SafeCast::uint64ToUint16(value);
}

template<>
uint32_t SAFE_CAST<uint64_t, uint32_t>(uint64_t value)
{
    return SafeCast::uint64ToUint32(value);
}

template<>
float SAFE_CAST<uint64_t, float>(uint64_t value)
{
    return SafeCast::uint64ToFloat(value);
}

template<>
double SAFE_CAST<uint64_t, double>(uint64_t value)
{
    return SafeCast::uint64ToDouble(value);
}

// float conversions
template<>
bool SAFE_CAST<float, bool>(float value)
{
    return SafeCast::floatToBool(value);
}

template<>
int8_t SAFE_CAST<float, int8_t>(float value)
{
    return SafeCast::floatToInt8(value);
}

template<>
int16_t SAFE_CAST<float, int16_t>(float value)
{
    return SafeCast::floatToInt16(value);
}

template<>
int32_t SAFE_CAST<float, int32_t>(float value)
{
    return SafeCast::floatToInt32(value);
}

template<>
int64_t SAFE_CAST<float, int64_t>(float value)
{
    return SafeCast::floatToInt64(value);
}

template<>
uint8_t SAFE_CAST<float, uint8_t>(float value)
{
    return SafeCast::floatToUint8(value);
}

template<>
uint16_t SAFE_CAST<float, uint16_t>(float value)
{
    return SafeCast::floatToUint16(value);
}

template<>
uint32_t SAFE_CAST<float, uint32_t>(float value)
{
    return SafeCast::floatToUint32(value);
}

template<>
uint64_t SAFE_CAST<float, uint64_t>(float value)
{
    return SafeCast::floatToUint64(value);
}

template<>
double SAFE_CAST<float, double>(float value)
{
    return SafeCast::floatToDouble(value);
}

// double conversions
template<>
bool SAFE_CAST<double, bool>(double value)
{
    return SafeCast::doubleToBool(value);
}

template<>
int8_t SAFE_CAST<double, int8_t>(double value)
{
    return SafeCast::doubleToInt8(value);
}

template<>
int16_t SAFE_CAST<double, int16_t>(double value)
{
    return SafeCast::doubleToInt16(value);
}

template<>
int32_t SAFE_CAST<double, int32_t>(double value)
{
    return SafeCast::doubleToInt32(value);
}

template<>
int64_t SAFE_CAST<double, int64_t>(double value)
{
    return SafeCast::doubleToInt64(value);
}

template<>
uint8_t SAFE_CAST<double, uint8_t>(double value)
{
    return SafeCast::doubleToUint8(value);
}

template<>
uint16_t SAFE_CAST<double, uint16_t>(double value)
{
    return SafeCast::doubleToUint16(value);
}

template<>
uint32_t SAFE_CAST<double, uint32_t>(double value)
{
    return SafeCast::doubleToUint32(value);
}

template<>
uint64_t SAFE_CAST<double, uint64_t>(double value)
{
    return SafeCast::doubleToUint64(value);
}

template<>
float SAFE_CAST<double, float>(double value)
{
    return SafeCast::doubleToFloat(value);
}
