#include "safecast.h"

#ifndef EPSILON
#define EPSILON (1e-9)
#endif

// bool conversions
int8_t SafeCaster::boolToInt8(bool value)
{
    return value ? static_cast<int8_t>(1) : static_cast<int8_t>(0);
}

int16_t SafeCaster::boolToInt16(bool value)
{
    return value ? static_cast<int16_t>(1) : static_cast<int16_t>(0);
}

int32_t SafeCaster::boolToInt32(bool value)
{
    return value ? static_cast<int32_t>(1) : static_cast<int32_t>(0);
}

int64_t SafeCaster::boolToInt64(bool value)
{
    return value ? static_cast<int64_t>(1) : static_cast<int64_t>(0);
}

uint8_t SafeCaster::boolToUint8(bool value)
{
    return value ? static_cast<uint8_t>(1U) : static_cast<uint8_t>(0U);
}

uint16_t SafeCaster::boolToUint16(bool value)
{
    return value ? static_cast<uint16_t>(1U) : static_cast<uint16_t>(0U);
}

uint32_t SafeCaster::boolToUint32(bool value)
{
    return value ? static_cast<uint32_t>(1U) : static_cast<uint32_t>(0U);
}

uint64_t SafeCaster::boolToUint64(bool value)
{
    return value ? static_cast<uint64_t>(1U) : static_cast<uint64_t>(0U);
}

float SafeCaster::boolToFloat(bool value)
{
    return value ? 1.0f : 0.0f;
}

double SafeCaster::boolToDouble(bool value)
{
    return value ? 1.0 : 0.0;
}

// int8_t conversions
bool SafeCaster::int8ToBool(int8_t value)
{
    return value != 0;
}

int16_t SafeCaster::int8ToInt16(int8_t value)
{
    return static_cast<int16_t>(value);
}

int32_t SafeCaster::int8ToInt32(int8_t value)
{
    return static_cast<int32_t>(value);
}

int64_t SafeCaster::int8ToInt64(int8_t value)
{
    return static_cast<int64_t>(value);
}

uint8_t SafeCaster::int8ToUint8(int8_t value)
{
    if (value < 0)
    {
        return 0U;
    }
    return static_cast<uint8_t>(value);
}

uint16_t SafeCaster::int8ToUint16(int8_t value)
{
    if (value < 0)
    {
        return 0U;
    }
    return static_cast<uint16_t>(value);
}

uint32_t SafeCaster::int8ToUint32(int8_t value)
{
    if (value < 0)
    {
        return 0U;
    }
    return static_cast<uint32_t>(value);
}

uint64_t SafeCaster::int8ToUint64(int8_t value)
{
    if (value < 0)
    {
        return 0U;
    }
    return static_cast<uint64_t>(value);
}

float SafeCaster::int8ToFloat(int8_t value)
{
    return static_cast<float>(value);
}

double SafeCaster::int8ToDouble(int8_t value)
{
    return static_cast<double>(value);
}

// int16_t conversions
bool SafeCaster::int16ToBool(int16_t value)
{
    return value != 0;
}

int8_t SafeCaster::int16ToInt8(int16_t value)
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

int32_t SafeCaster::int16ToInt32(int16_t value)
{
    return static_cast<int32_t>(value);
}

int64_t SafeCaster::int16ToInt64(int16_t value)
{
    return static_cast<int64_t>(value);
}

uint8_t SafeCaster::int16ToUint8(int16_t value)
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

uint16_t SafeCaster::int16ToUint16(int16_t value)
{
    if (value < 0)
    {
        return 0U;
    }
    return static_cast<uint16_t>(value);
}

uint32_t SafeCaster::int16ToUint32(int16_t value)
{
    if (value < 0)
    {
        return 0U;
    }
    return static_cast<uint32_t>(value);
}

uint64_t SafeCaster::int16ToUint64(int16_t value)
{
    if (value < 0)
    {
        return 0U;
    }
    return static_cast<uint64_t>(value);
}

float SafeCaster::int16ToFloat(int16_t value)
{
    return static_cast<float>(value);
}

double SafeCaster::int16ToDouble(int16_t value)
{
    return static_cast<double>(value);
}

// int32_t conversions
bool SafeCaster::int32ToBool(int32_t value)
{
    return value != 0;
}

int8_t SafeCaster::int32ToInt8(int32_t value)
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

int16_t SafeCaster::int32ToInt16(int32_t value)
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

int64_t SafeCaster::int32ToInt64(int32_t value)
{
    return static_cast<int64_t>(value);
}

uint8_t SafeCaster::int32ToUint8(int32_t value)
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

uint16_t SafeCaster::int32ToUint16(int32_t value)
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

uint32_t SafeCaster::int32ToUint32(int32_t value)
{
    if (value < 0)
    {
        return 0U;
    }
    return static_cast<uint32_t>(value);
}

uint64_t SafeCaster::int32ToUint64(int32_t value)
{
    if (value < 0)
    {
        return 0U;
    }
    return static_cast<uint64_t>(value);
}

float SafeCaster::int32ToFloat(int32_t value)
{
    return static_cast<float>(value);
}

double SafeCaster::int32ToDouble(int32_t value)
{
    return static_cast<double>(value);
}

// int64_t conversions
bool SafeCaster::int64ToBool(int64_t value)
{
    return value != 0;
}

int8_t SafeCaster::int64ToInt8(int64_t value)
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

int16_t SafeCaster::int64ToInt16(int64_t value)
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

int32_t SafeCaster::int64ToInt32(int64_t value)
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

uint8_t SafeCaster::int64ToUint8(int64_t value)
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

uint16_t SafeCaster::int64ToUint16(int64_t value)
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

uint32_t SafeCaster::int64ToUint32(int64_t value)
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

uint64_t SafeCaster::int64ToUint64(int64_t value)
{
    if (value < 0)
    {
        return 0U;
    }
    return static_cast<uint64_t>(value);
}

float SafeCaster::int64ToFloat(int64_t value)
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

double SafeCaster::int64ToDouble(int64_t value)
{
    return static_cast<double>(value);
}

// uint8_t conversions
bool SafeCaster::uint8ToBool(uint8_t value)
{
    return value != 0U;
}

int8_t SafeCaster::uint8ToInt8(uint8_t value)
{
    if (value > static_cast<uint8_t>(INT8_MAX))
    {
        return static_cast<int8_t>(INT8_MAX);
    }
    return static_cast<int8_t>(value);
}

int16_t SafeCaster::uint8ToInt16(uint8_t value)
{
    return static_cast<int16_t>(value);
}

int32_t SafeCaster::uint8ToInt32(uint8_t value)
{
    return static_cast<int32_t>(value);
}

int64_t SafeCaster::uint8ToInt64(uint8_t value)
{
    return static_cast<int64_t>(value);
}

uint16_t SafeCaster::uint8ToUint16(uint8_t value)
{
    return static_cast<uint16_t>(value);
}

uint32_t SafeCaster::uint8ToUint32(uint8_t value)
{
    return static_cast<uint32_t>(value);
}

uint64_t SafeCaster::uint8ToUint64(uint8_t value)
{
    return static_cast<uint64_t>(value);
}

float SafeCaster::uint8ToFloat(uint8_t value)
{
    return static_cast<float>(value);
}

double SafeCaster::uint8ToDouble(uint8_t value)
{
    return static_cast<double>(value);
}

// uint16_t conversions
bool SafeCaster::uint16ToBool(uint16_t value)
{
    return value != 0U;
}

int8_t SafeCaster::uint16ToInt8(uint16_t value)
{
    if (value > static_cast<uint16_t>(INT8_MAX))
    {
        return static_cast<int8_t>(INT8_MAX);
    }
    return static_cast<int8_t>(value);
}

int16_t SafeCaster::uint16ToInt16(uint16_t value)
{
    if (value > static_cast<uint16_t>(INT16_MAX))
    {
        return static_cast<int16_t>(INT16_MAX);
    }
    return static_cast<int16_t>(value);
}

int32_t SafeCaster::uint16ToInt32(uint16_t value)
{
    return static_cast<int32_t>(value);
}

int64_t SafeCaster::uint16ToInt64(uint16_t value)
{
    return static_cast<int64_t>(value);
}

uint8_t SafeCaster::uint16ToUint8(uint16_t value)
{
    if (value > static_cast<uint16_t>(UINT8_MAX))
    {
        return static_cast<uint8_t>(UINT8_MAX);
    }
    return static_cast<uint8_t>(value);
}

uint32_t SafeCaster::uint16ToUint32(uint16_t value)
{
    return static_cast<uint32_t>(value);
}

uint64_t SafeCaster::uint16ToUint64(uint16_t value)
{
    return static_cast<uint64_t>(value);
}

float SafeCaster::uint16ToFloat(uint16_t value)
{
    return static_cast<float>(value);
}

double SafeCaster::uint16ToDouble(uint16_t value)
{
    return static_cast<double>(value);
}

// uint32_t conversions
bool SafeCaster::uint32ToBool(uint32_t value)
{
    return value != 0U;
}

int8_t SafeCaster::uint32ToInt8(uint32_t value)
{
    if (value > static_cast<uint32_t>(INT8_MAX))
    {
        return static_cast<int8_t>(INT8_MAX);
    }
    return static_cast<int8_t>(value);
}

int16_t SafeCaster::uint32ToInt16(uint32_t value)
{
    if (value > static_cast<uint32_t>(INT16_MAX))
    {
        return static_cast<int16_t>(INT16_MAX);
    }
    return static_cast<int16_t>(value);
}

int32_t SafeCaster::uint32ToInt32(uint32_t value)
{
    if (value > static_cast<uint32_t>(INT32_MAX))
    {
        return static_cast<int32_t>(INT32_MAX);
    }
    return static_cast<int32_t>(value);
}

int64_t SafeCaster::uint32ToInt64(uint32_t value)
{
    return static_cast<int64_t>(value);
}

uint8_t SafeCaster::uint32ToUint8(uint32_t value)
{
    if (value > static_cast<uint32_t>(UINT8_MAX))
    {
        return static_cast<uint8_t>(UINT8_MAX);
    }
    return static_cast<uint8_t>(value);
}

uint16_t SafeCaster::uint32ToUint16(uint32_t value)
{
    if (value > static_cast<uint32_t>(UINT16_MAX))
    {
        return static_cast<uint16_t>(UINT16_MAX);
    }
    return static_cast<uint16_t>(value);
}

uint64_t SafeCaster::uint32ToUint64(uint32_t value)
{
    return static_cast<uint64_t>(value);
}

float SafeCaster::uint32ToFloat(uint32_t value)
{
    return static_cast<float>(value);
}

double SafeCaster::uint32ToDouble(uint32_t value)
{
    return static_cast<double>(value);
}

// uint64_t conversions
bool SafeCaster::uint64ToBool(uint64_t value)
{
    return value != 0U;
}

int8_t SafeCaster::uint64ToInt8(uint64_t value)
{
    if (value > static_cast<uint64_t>(INT8_MAX))
    {
        return static_cast<int8_t>(INT8_MAX);
    }
    return static_cast<int8_t>(value);
}

int16_t SafeCaster::uint64ToInt16(uint64_t value)
{
    if (value > static_cast<uint64_t>(INT16_MAX))
    {
        return static_cast<int16_t>(INT16_MAX);
    }
    return static_cast<int16_t>(value);
}

int32_t SafeCaster::uint64ToInt32(uint64_t value)
{
    if (value > static_cast<uint64_t>(INT32_MAX))
    {
        return static_cast<int32_t>(INT32_MAX);
    }
    return static_cast<int32_t>(value);
}

int64_t SafeCaster::uint64ToInt64(uint64_t value)
{
    if (value > static_cast<uint64_t>(INT64_MAX))
    {
        return static_cast<int64_t>(INT64_MAX);
    }
    return static_cast<int64_t>(value);
}

uint8_t SafeCaster::uint64ToUint8(uint64_t value)
{
    if (value > static_cast<uint64_t>(UINT8_MAX))
    {
        return static_cast<uint8_t>(UINT8_MAX);
    }
    return static_cast<uint8_t>(value);
}

uint16_t SafeCaster::uint64ToUint16(uint64_t value)
{
    if (value > static_cast<uint64_t>(UINT16_MAX))
    {
        return static_cast<uint16_t>(UINT16_MAX);
    }
    return static_cast<uint16_t>(value);
}

uint32_t SafeCaster::uint64ToUint32(uint64_t value)
{
    if (value > static_cast<uint64_t>(UINT32_MAX))
    {
        return static_cast<uint32_t>(UINT32_MAX);
    }
    return static_cast<uint32_t>(value);
}

float SafeCaster::uint64ToFloat(uint64_t value)
{
    return static_cast<float>(value);
}

double SafeCaster::uint64ToDouble(uint64_t value)
{
    return static_cast<double>(value);
}

// float conversions
bool SafeCaster::floatToBool(float value)
{
    return std::abs(static_cast<double>(value)) >= EPSILON; // not zero
}

int8_t SafeCaster::floatToInt8(float value)
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

int16_t SafeCaster::floatToInt16(float value)
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

int32_t SafeCaster::floatToInt32(float value)
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

int64_t SafeCaster::floatToInt64(float value)
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

uint8_t SafeCaster::floatToUint8(float value)
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

uint16_t SafeCaster::floatToUint16(float value)
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

uint32_t SafeCaster::floatToUint32(float value)
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

uint64_t SafeCaster::floatToUint64(float value)
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

double SafeCaster::floatToDouble(float value)
{
    return static_cast<double>(value);
}

// double conversions
bool SafeCaster::doubleToBool(double value)
{
    return std::abs(value) >= EPSILON; // not zero
}

int8_t SafeCaster::doubleToInt8(double value)
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

int16_t SafeCaster::doubleToInt16(double value)
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

int32_t SafeCaster::doubleToInt32(double value)
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

int64_t SafeCaster::doubleToInt64(double value)
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

uint8_t SafeCaster::doubleToUint8(double value)
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

uint16_t SafeCaster::doubleToUint16(double value)
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

uint32_t SafeCaster::doubleToUint32(double value)
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

uint64_t SafeCaster::doubleToUint64(double value)
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

float SafeCaster::doubleToFloat(double value)
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
