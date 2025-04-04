#include <gtest/gtest.h>

#include "safecast.cpp"

class SafeCastTest : public ::testing::Test
{
protected:
    void SetUp() override
    {
        // Code here will be called just before the test executes.
    }

    void TearDown() override
    {
        // Code here will be called just after the test executes.
    }
};

TEST_F(SafeCastTest, BoolToInt8)
{
    int8_t val = 0;
    val = SAFE_CAST<bool, int8_t>(true);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<bool, int8_t>(false);
    EXPECT_EQ(val, 0);
}

TEST_F(SafeCastTest, BoolToInt16)
{
    int16_t val = 0;
    val = SAFE_CAST<bool, int16_t>(true);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<bool, int16_t>(false);
    EXPECT_EQ(val, 0);
}

TEST_F(SafeCastTest, BoolToInt32)
{
    int32_t val = 0;
    val = SAFE_CAST<bool, int32_t>(true);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<bool, int32_t>(false);
    EXPECT_EQ(val, 0);
}

TEST_F(SafeCastTest, BoolToInt64)
{
    int64_t val = 0;
    val = SAFE_CAST<bool, int64_t>(true);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<bool, int64_t>(false);
    EXPECT_EQ(val, 0);
}

TEST_F(SafeCastTest, BoolToUint8)
{
    uint8_t val = 0U;
    val = SAFE_CAST<bool, uint8_t>(true);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<bool, uint8_t>(false);
    EXPECT_EQ(val, 0U);
}

TEST_F(SafeCastTest, BoolToUint16)
{
    uint16_t val = 0U;
    val = SAFE_CAST<bool, uint16_t>(true);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<bool, uint16_t>(false);
    EXPECT_EQ(val, 0U);
}

TEST_F(SafeCastTest, BoolToUint32)
{
    uint32_t val = 0U;
    val = SAFE_CAST<bool, uint32_t>(true);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<bool, uint32_t>(false);
    EXPECT_EQ(val, 0U);   
}

TEST_F(SafeCastTest, BoolToUint64)
{
    uint64_t val = 0U;
    val = SAFE_CAST<bool, uint64_t>(true);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<bool, uint64_t>(false);
    EXPECT_EQ(val, 0U);
}

TEST_F(SafeCastTest, BoolToFloat)
{
    float val = 0.0f;
    val = SAFE_CAST<bool, float>(true);
    EXPECT_FLOAT_EQ(val, 1.0f);
    val = SAFE_CAST<bool, float>(false);
    EXPECT_FLOAT_EQ(val, 0.0f);
}

TEST_F(SafeCastTest, BoolToDouble)
{
    double val = 0.0;
    val = SAFE_CAST<bool, double>(true);
    EXPECT_DOUBLE_EQ(val, 1.0);
    val = SAFE_CAST<bool, double>(false);
    EXPECT_DOUBLE_EQ(val, 0.0);
}

TEST_F(SafeCastTest, Int8ToBool)
{
    bool val = false;
    val = SAFE_CAST<int8_t, bool>(1);
    EXPECT_EQ(val, true);
    val = SAFE_CAST<int8_t, bool>(0);
    EXPECT_EQ(val, false);
    val = SAFE_CAST<int8_t, bool>(-1);
    EXPECT_EQ(val, true);
    val = SAFE_CAST<int8_t, bool>(-128);
    EXPECT_EQ(val, true);
    val = SAFE_CAST<int8_t, bool>(127);
    EXPECT_EQ(val, true);
}

TEST_F(SafeCastTest, Int8ToInt16)
{
    int16_t val = 0;
    val = SAFE_CAST<int8_t, int16_t>(1);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<int8_t, int16_t>(-1);
    EXPECT_EQ(val, -1);
    val = SAFE_CAST<int8_t, int16_t>(127);
    EXPECT_EQ(val, 127);
    val = SAFE_CAST<int8_t, int16_t>(-128);
    EXPECT_EQ(val, -128);
}

TEST_F(SafeCastTest, Int8ToInt32)
{
    int32_t val = 0;
    val = SAFE_CAST<int8_t, int32_t>(1);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<int8_t, int32_t>(-1);
    EXPECT_EQ(val, -1);
    val = SAFE_CAST<int8_t, int32_t>(127);
    EXPECT_EQ(val, 127);
    val = SAFE_CAST<int8_t, int32_t>(-128);
    EXPECT_EQ(val, -128);
}

TEST_F(SafeCastTest, Int8ToInt64)
{
    int64_t val = 0;
    val = SAFE_CAST<int8_t, int64_t>(1);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<int8_t, int64_t>(-1);
    EXPECT_EQ(val, -1);
    val = SAFE_CAST<int8_t, int64_t>(127);
    EXPECT_EQ(val, 127);
    val = SAFE_CAST<int8_t, int64_t>(-128);
    EXPECT_EQ(val, -128);
}

TEST_F(SafeCastTest, Int8ToUint8)
{
    uint8_t val = 0U;
    val = SAFE_CAST<int8_t, uint8_t>(1);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<int8_t, uint8_t>(-1);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<int8_t, uint8_t>(127);
    EXPECT_EQ(val, 127U);
    val = SAFE_CAST<int8_t, uint8_t>(-127);
    EXPECT_EQ(val, 0U);
}

TEST_F(SafeCastTest, Int8ToUint16)
{
    uint16_t val = 0U;
    val = SAFE_CAST<int8_t, uint16_t>(1);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<int8_t, uint16_t>(-1);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<int8_t, uint16_t>(127);
    EXPECT_EQ(val, 127U);
    val = SAFE_CAST<int8_t, uint16_t>(-127);
    EXPECT_EQ(val, 0U);
}

TEST_F(SafeCastTest, Int8ToUint32)
{
    uint32_t val = 0U;
    val = SAFE_CAST<int8_t, uint32_t>(1);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<int8_t, uint32_t>(-1);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<int8_t, uint32_t>(127);
    EXPECT_EQ(val, 127U);
    val = SAFE_CAST<int8_t, uint32_t>(-127);
    EXPECT_EQ(val, 0U);
}

TEST_F(SafeCastTest, Int8ToUint64)
{
    uint64_t val = 0U;
    val = SAFE_CAST<int8_t, uint64_t>(1);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<int8_t, uint64_t>(-1);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<int8_t, uint64_t>(127);
    EXPECT_EQ(val, 127U);
    val = SAFE_CAST<int8_t, uint64_t>(-127);
    EXPECT_EQ(val, 0U);
}

TEST_F(SafeCastTest, Int8ToFloat)
{
    float val = 0.0f;
    val = SAFE_CAST<int8_t, float>(1);
    EXPECT_FLOAT_EQ(val, 1.0f);
    val = SAFE_CAST<int8_t, float>(-1);
    EXPECT_FLOAT_EQ(val, -1.0f);
    val = SAFE_CAST<int8_t, float>(127);
    EXPECT_FLOAT_EQ(val, 127.0f);
    val = SAFE_CAST<int8_t, float>(-128);
    EXPECT_FLOAT_EQ(val, -128.0f);
}

TEST_F(SafeCastTest, Int8ToDouble)
{
    double val = 0.0;
    val = SAFE_CAST<int8_t, double>(1);
    EXPECT_DOUBLE_EQ(val, 1.0);
    val = SAFE_CAST<int8_t, double>(-1);
    EXPECT_DOUBLE_EQ(val, -1.0);
    val = SAFE_CAST<int8_t, double>(127);
    EXPECT_DOUBLE_EQ(val, 127.0);
    val = SAFE_CAST<int8_t, double>(-128);
    EXPECT_DOUBLE_EQ(val, -128.0);
}

TEST_F(SafeCastTest, Int16ToBool)
{
    bool val = false;
    val = SAFE_CAST<int16_t, bool>(1);
    EXPECT_EQ(val, true);
    val = SAFE_CAST<int16_t, bool>(0);
    EXPECT_EQ(val, false);
    val = SAFE_CAST<int16_t, bool>(-1);
    EXPECT_EQ(val, true);
    val = SAFE_CAST<int16_t, bool>(-32768);
    EXPECT_EQ(val, true);
    val = SAFE_CAST<int16_t, bool>(32767);
    EXPECT_EQ(val, true);
}

TEST_F(SafeCastTest, Int16ToInt8)
{
    int8_t val = 0;
    val = SAFE_CAST<int16_t, int8_t>(1);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<int16_t, int8_t>(-1);
    EXPECT_EQ(val, -1);
    val = SAFE_CAST<int16_t, int8_t>(127);
    EXPECT_EQ(val, 127);
    val = SAFE_CAST<int16_t, int8_t>(-32768);
    EXPECT_EQ(val, INT8_MIN);
    val = SAFE_CAST<int16_t, int8_t>(32767);
    EXPECT_EQ(val, INT8_MAX);
}

TEST_F(SafeCastTest, Int16ToInt32)
{
    int32_t val = 0;
    val = SAFE_CAST<int16_t, int32_t>(1);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<int16_t, int32_t>(-1);
    EXPECT_EQ(val, -1);
    val = SAFE_CAST<int16_t, int32_t>(127);
    EXPECT_EQ(val, 127);
    val = SAFE_CAST<int16_t, int32_t>(-32768);
    EXPECT_EQ(val, -32768);
    val = SAFE_CAST<int16_t, int32_t>(32767);
    EXPECT_EQ(val, 32767);
}

TEST_F(SafeCastTest, Int16ToInt64)
{
    int64_t val = 0;
    val = SAFE_CAST<int16_t, int64_t>(1);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<int16_t, int64_t>(-1);
    EXPECT_EQ(val, -1);
    val = SAFE_CAST<int16_t, int64_t>(127);
    EXPECT_EQ(val, 127);
    val = SAFE_CAST<int16_t, int64_t>(-32768);
    EXPECT_EQ(val, -32768);
    val = SAFE_CAST<int16_t, int64_t>(32767);
    EXPECT_EQ(val, 32767);
}

TEST_F(SafeCastTest, Int16ToUint8)
{
    uint8_t val = 0U;
    val = SAFE_CAST<int16_t, uint8_t>(1);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<int16_t, uint8_t>(-1);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<int16_t, uint8_t>(127);
    EXPECT_EQ(val, 127U);
    val = SAFE_CAST<int16_t, uint8_t>(-32768);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<int16_t, uint8_t>(32767);
    EXPECT_EQ(val, 255U);
}

TEST_F(SafeCastTest, Int16ToUint16)
{
    uint16_t val = 0U;
    val = SAFE_CAST<int16_t, uint16_t>(1);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<int16_t, uint16_t>(-1);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<int16_t, uint16_t>(127);
    EXPECT_EQ(val, 127U);
    val = SAFE_CAST<int16_t, uint16_t>(-32768);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<int16_t, uint16_t>(32767);
    EXPECT_EQ(val, 32767U);
}

TEST_F(SafeCastTest, Int16ToUint32)
{
    uint32_t val = 0U;
    val = SAFE_CAST<int16_t, uint32_t>(1);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<int16_t, uint32_t>(-1);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<int16_t, uint32_t>(127);
    EXPECT_EQ(val, 127U);
    val = SAFE_CAST<int16_t, uint32_t>(-32768);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<int16_t, uint32_t>(32767);
    EXPECT_EQ(val, 32767U);
}

TEST_F(SafeCastTest, Int16ToUint64)
{
    uint64_t val = 0U;
    val = SAFE_CAST<int16_t, uint64_t>(1);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<int16_t, uint64_t>(-1);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<int16_t, uint64_t>(127);
    EXPECT_EQ(val, 127U);
    val = SAFE_CAST<int16_t, uint64_t>(-32768);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<int16_t, uint64_t>(32767);
    EXPECT_EQ(val, 32767U);
}

TEST_F(SafeCastTest, Int16ToFloat)
{
    float val = 0.0f;
    val = SAFE_CAST<int16_t, float>(1);
    EXPECT_FLOAT_EQ(val, 1.0f);
    val = SAFE_CAST<int16_t, float>(-1);
    EXPECT_FLOAT_EQ(val, -1.0f);
    val = SAFE_CAST<int16_t, float>(127);
    EXPECT_FLOAT_EQ(val, 127.0f);
    val = SAFE_CAST<int16_t, float>(-32768);
    EXPECT_FLOAT_EQ(val, -32768.0f);
    val = SAFE_CAST<int16_t, float>(32767);
    EXPECT_FLOAT_EQ(val, 32767.0f);
}

TEST_F(SafeCastTest, Int16ToDouble)
{
    double val = 0.0;
    val = SAFE_CAST<int16_t, double>(1);
    EXPECT_DOUBLE_EQ(val, 1.0);
    val = SAFE_CAST<int16_t, double>(-1);
    EXPECT_DOUBLE_EQ(val, -1.0);
    val = SAFE_CAST<int16_t, double>(127);
    EXPECT_DOUBLE_EQ(val, 127.0);
    val = SAFE_CAST<int16_t, double>(-32768);
    EXPECT_DOUBLE_EQ(val, -32768.0);
    val = SAFE_CAST<int16_t, double>(32767);
    EXPECT_DOUBLE_EQ(val, 32767.0);
}

TEST_F(SafeCastTest, Int32ToBool)
{
    bool val = false;
    val = SAFE_CAST<int32_t, bool>(1);
    EXPECT_EQ(val, true);
    val = SAFE_CAST<int32_t, bool>(0);
    EXPECT_EQ(val, false);
    val = SAFE_CAST<int32_t, bool>(-1);
    EXPECT_EQ(val, true);
    val = SAFE_CAST<int32_t, bool>(-2147483648);
    EXPECT_EQ(val, true);
    val = SAFE_CAST<int32_t, bool>(2147483647);
    EXPECT_EQ(val, true);
}

TEST_F(SafeCastTest, Int32ToInt8)
{
    int8_t val = 0;
    val = SAFE_CAST<int32_t, int8_t>(1);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<int32_t, int8_t>(-1);
    EXPECT_EQ(val, -1);
    val = SAFE_CAST<int32_t, int8_t>(127);
    EXPECT_EQ(val, 127);
    val = SAFE_CAST<int32_t, int8_t>(-2147483648);
    EXPECT_EQ(val, INT8_MIN);
    val = SAFE_CAST<int32_t, int8_t>(2147483647);
    EXPECT_EQ(val, INT8_MAX);
}

TEST_F(SafeCastTest, Int32ToInt16)
{
    int16_t val = 0;
    val = SAFE_CAST<int32_t, int16_t>(1);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<int32_t, int16_t>(-1);
    EXPECT_EQ(val, -1);
    val = SAFE_CAST<int32_t, int16_t>(127);
    EXPECT_EQ(val, 127);
    val = SAFE_CAST<int32_t, int16_t>(-2147483648);
    EXPECT_EQ(val, INT16_MIN);
    val = SAFE_CAST<int32_t, int16_t>(2147483647);
    EXPECT_EQ(val, INT16_MAX);
}

TEST_F(SafeCastTest, Int32ToInt64)
{
    int64_t val = 0;
    val = SAFE_CAST<int32_t, int64_t>(1);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<int32_t, int64_t>(-1);
    EXPECT_EQ(val, -1);
    val = SAFE_CAST<int32_t, int64_t>(127);
    EXPECT_EQ(val, 127);
    val = SAFE_CAST<int32_t, int64_t>(-2147483648);
    EXPECT_EQ(val, -2147483648);
    val = SAFE_CAST<int32_t, int64_t>(2147483647);
    EXPECT_EQ(val, 2147483647);
}

TEST_F(SafeCastTest, Int32ToUint8)
{
    uint8_t val = 0U;
    val = SAFE_CAST<int32_t, uint8_t>(1);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<int32_t, uint8_t>(-1);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<int32_t, uint8_t>(127);
    EXPECT_EQ(val, 127U);
    val = SAFE_CAST<int32_t, uint8_t>(-2147483648);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<int32_t, uint8_t>(2147483647);
    EXPECT_EQ(val, 255U);
}

TEST_F(SafeCastTest, Int32ToUint16)
{
    uint16_t val = 0U;
    val = SAFE_CAST<int32_t, uint16_t>(1);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<int32_t, uint16_t>(-1);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<int32_t, uint16_t>(127);
    EXPECT_EQ(val, 127U);
    val = SAFE_CAST<int32_t, uint16_t>(-2147483648);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<int32_t, uint16_t>(2147483647);
    EXPECT_EQ(val, 65535U);
}

TEST_F(SafeCastTest, Int32ToUint32)
{
    uint32_t val = 0U;
    val = SAFE_CAST<int32_t, uint32_t>(1);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<int32_t, uint32_t>(-1);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<int32_t, uint32_t>(127);
    EXPECT_EQ(val, 127U);
    val = SAFE_CAST<int32_t, uint32_t>(-2147483648);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<int32_t, uint32_t>(2147483647);
    EXPECT_EQ(val, 2147483647U);
}

TEST_F(SafeCastTest, Int32ToUint64)
{
    uint64_t val = 0U;
    val = SAFE_CAST<int32_t, uint64_t>(1);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<int32_t, uint64_t>(-1);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<int32_t, uint64_t>(127);
    EXPECT_EQ(val, 127U);
    val = SAFE_CAST<int32_t, uint64_t>(-2147483648);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<int32_t, uint64_t>(2147483647);
    EXPECT_EQ(val, 2147483647U);
}

TEST_F(SafeCastTest, Int32ToFloat)
{
    float val = 0.0f;
    val = SAFE_CAST<int32_t, float>(1);
    EXPECT_FLOAT_EQ(val, 1.0f);
    val = SAFE_CAST<int32_t, float>(-1);
    EXPECT_FLOAT_EQ(val, -1.0f);
    val = SAFE_CAST<int32_t, float>(127);
    EXPECT_FLOAT_EQ(val, 127.0f);
    val = SAFE_CAST<int32_t, float>(-2147483648);
    EXPECT_FLOAT_EQ(val, -2147483648.0f);
    val = SAFE_CAST<int32_t, float>(2147483647);
    EXPECT_FLOAT_EQ(val, 2147483647.0f);
}

TEST_F(SafeCastTest, Int32ToDouble)
{
    double val = 0.0;
    val = SAFE_CAST<int32_t, double>(1);
    EXPECT_DOUBLE_EQ(val, 1.0);
    val = SAFE_CAST<int32_t, double>(-1);
    EXPECT_DOUBLE_EQ(val, -1.0);
    val = SAFE_CAST<int32_t, double>(127);
    EXPECT_DOUBLE_EQ(val, 127.0);
    val = SAFE_CAST<int32_t, double>(-2147483648);
    EXPECT_DOUBLE_EQ(val, -2147483648.0);
    val = SAFE_CAST<int32_t, double>(2147483647);
    EXPECT_DOUBLE_EQ(val, 2147483647.0);
}

TEST_F(SafeCastTest, Int64ToBool)
{
    bool val = false;
    val = SAFE_CAST<int64_t, bool>(1);
    EXPECT_EQ(val, true);
    val = SAFE_CAST<int64_t, bool>(0);
    EXPECT_EQ(val, false);
    val = SAFE_CAST<int64_t, bool>(-1);
    EXPECT_EQ(val, true);
    val = SAFE_CAST<int64_t, bool>(-9223372036854775808LL);
    EXPECT_EQ(val, true);
    val = SAFE_CAST<int64_t, bool>(9223372036854775807LL);
    EXPECT_EQ(val, true);
}

TEST_F(SafeCastTest, Int64ToInt8)
{
    int8_t val = 0;
    val = SAFE_CAST<int64_t, int8_t>(1);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<int64_t, int8_t>(-1);
    EXPECT_EQ(val, -1);
    val = SAFE_CAST<int64_t, int8_t>(127);
    EXPECT_EQ(val, 127);
    val = SAFE_CAST<int64_t, int8_t>(-9223372036854775808LL);
    EXPECT_EQ(val, INT8_MIN);
    val = SAFE_CAST<int64_t, int8_t>(9223372036854775807LL);
    EXPECT_EQ(val, INT8_MAX);
}

TEST_F(SafeCastTest, Int64ToInt16)
{
    int16_t val = 0;
    val = SAFE_CAST<int64_t, int16_t>(1);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<int64_t, int16_t>(-1);
    EXPECT_EQ(val, -1);
    val = SAFE_CAST<int64_t, int16_t>(127);
    EXPECT_EQ(val, 127);
    val = SAFE_CAST<int64_t, int16_t>(-9223372036854775808LL);
    EXPECT_EQ(val, INT16_MIN);
    val = SAFE_CAST<int64_t, int16_t>(9223372036854775807LL);
    EXPECT_EQ(val, INT16_MAX);
}

TEST_F(SafeCastTest, Int64ToInt32)
{
    int32_t val = 0;
    val = SAFE_CAST<int64_t, int32_t>(1);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<int64_t, int32_t>(-1);
    EXPECT_EQ(val, -1);
    val = SAFE_CAST<int64_t, int32_t>(127);
    EXPECT_EQ(val, 127);
    val = SAFE_CAST<int64_t, int32_t>(-9223372036854775808LL);
    EXPECT_EQ(val, INT32_MIN);
    val = SAFE_CAST<int64_t, int32_t>(9223372036854775807LL);
    EXPECT_EQ(val, INT32_MAX);
}

TEST_F(SafeCastTest, Int64ToUint8)
{
    uint8_t val = 0U;
    val = SAFE_CAST<int64_t, uint8_t>(1);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<int64_t, uint8_t>(-1);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<int64_t, uint8_t>(127);
    EXPECT_EQ(val, 127U);
    val = SAFE_CAST<int64_t, uint8_t>(-9223372036854775808LL);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<int64_t, uint8_t>(9223372036854775807LL);
    EXPECT_EQ(val, 255U);
}

TEST_F(SafeCastTest, Int64ToUint16)
{
    uint16_t val = 0U;
    val = SAFE_CAST<int64_t, uint16_t>(1);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<int64_t, uint16_t>(-1);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<int64_t, uint16_t>(127);
    EXPECT_EQ(val, 127U);
    val = SAFE_CAST<int64_t, uint16_t>(-9223372036854775808LL);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<int64_t, uint16_t>(9223372036854775807LL);
    EXPECT_EQ(val, 65535U);
}

TEST_F(SafeCastTest, Int64ToUint32)
{
    uint32_t val = 0U;
    val = SAFE_CAST<int64_t, uint32_t>(1);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<int64_t, uint32_t>(-1);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<int64_t, uint32_t>(127);
    EXPECT_EQ(val, 127U);
    val = SAFE_CAST<int64_t, uint32_t>(-9223372036854775808LL);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<int64_t, uint32_t>(9223372036854775807LL);
    EXPECT_EQ(val, 4294967295U);
}

TEST_F(SafeCastTest, Int64ToUint64)
{
    uint64_t val = 0U;
    val = SAFE_CAST<int64_t, uint64_t>(1);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<int64_t, uint64_t>(-1);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<int64_t, uint64_t>(127);
    EXPECT_EQ(val, 127U);
    val = SAFE_CAST<int64_t, uint64_t>(-9223372036854775808LL);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<int64_t, uint64_t>(9223372036854775807LL);
    EXPECT_EQ(val, 9223372036854775807U);
}

TEST_F(SafeCastTest, Int64ToFloat)
{
    float val = 0.0f;
    val = SAFE_CAST<int64_t, float>(1);
    EXPECT_FLOAT_EQ(val, 1.0f);
    val = SAFE_CAST<int64_t, float>(-1);
    EXPECT_FLOAT_EQ(val, -1.0f);
    val = SAFE_CAST<int64_t, float>(127);
    EXPECT_FLOAT_EQ(val, 127.0f);
    val = SAFE_CAST<int64_t, float>(-9223372036854775808LL);
    EXPECT_FLOAT_EQ(val, -9223372036854775808.0f);
    val = SAFE_CAST<int64_t, float>(9223372036854775807LL);
    EXPECT_FLOAT_EQ(val, 9223372036854775807.0f);
}

TEST_F(SafeCastTest, Int64ToDouble)
{
    double val = 0.0;
    val = SAFE_CAST<int64_t, double>(1);
    EXPECT_DOUBLE_EQ(val, 1.0);
    val = SAFE_CAST<int64_t, double>(-1);
    EXPECT_DOUBLE_EQ(val, -1.0);
    val = SAFE_CAST<int64_t, double>(127);
    EXPECT_DOUBLE_EQ(val, 127.0);
    val = SAFE_CAST<int64_t, double>(-9223372036854775808LL);
    EXPECT_DOUBLE_EQ(val, -9223372036854775808.0);
    val = SAFE_CAST<int64_t, double>(9223372036854775807LL);
    EXPECT_DOUBLE_EQ(val, 9223372036854775807.0);
}

TEST_F(SafeCastTest, Uint8ToBool)
{
    bool val = false;
    val = SAFE_CAST<uint8_t, bool>(1U);
    EXPECT_EQ(val, true);
    val = SAFE_CAST<uint8_t, bool>(0U);
    EXPECT_EQ(val, false);
    val = SAFE_CAST<uint8_t, bool>(255U);
    EXPECT_EQ(val, true);
}

TEST_F(SafeCastTest, Uint8ToInt8)
{
    int8_t val = 0;
    val = SAFE_CAST<uint8_t, int8_t>(1U);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<uint8_t, int8_t>(0U);
    EXPECT_EQ(val, 0);
    val = SAFE_CAST<uint8_t, int8_t>(255U);
    EXPECT_EQ(val, 0x7F);
}

TEST_F(SafeCastTest, Uint8ToInt16)
{
    int16_t val = 0;
    val = SAFE_CAST<uint8_t, int16_t>(1U);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<uint8_t, int16_t>(0U);
    EXPECT_EQ(val, 0);
    val = SAFE_CAST<uint8_t, int16_t>(255U);
    EXPECT_EQ(val, 255);
}

TEST_F(SafeCastTest, Uint8ToInt32)
{
    int32_t val = 0;
    val = SAFE_CAST<uint8_t, int32_t>(1U);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<uint8_t, int32_t>(0U);
    EXPECT_EQ(val, 0);
    val = SAFE_CAST<uint8_t, int32_t>(255U);
    EXPECT_EQ(val, 255);
}

TEST_F(SafeCastTest, Uint8ToInt64)
{
    int64_t val = 0;
    val = SAFE_CAST<uint8_t, int64_t>(1U);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<uint8_t, int64_t>(0U);
    EXPECT_EQ(val, 0);
    val = SAFE_CAST<uint8_t, int64_t>(255U);
    EXPECT_EQ(val, 255);
}

TEST_F(SafeCastTest, Uint8ToUint16)
{
    uint16_t val = 0U;
    val = SAFE_CAST<uint8_t, uint16_t>(1U);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<uint8_t, uint16_t>(0U);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<uint8_t, uint16_t>(255U);
    EXPECT_EQ(val, 255U);
}

TEST_F(SafeCastTest, Uint8ToUint32)
{
    uint32_t val = 0U;
    val = SAFE_CAST<uint8_t, uint32_t>(1U);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<uint8_t, uint32_t>(0U);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<uint8_t, uint32_t>(255U);
    EXPECT_EQ(val, 255U);
}

TEST_F(SafeCastTest, Uint8ToUint64)
{
    uint64_t val = 0U;
    val = SAFE_CAST<uint8_t, uint64_t>(1U);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<uint8_t, uint64_t>(0U);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<uint8_t, uint64_t>(255U);
    EXPECT_EQ(val, 255U);
}

TEST_F(SafeCastTest, Uint8ToFloat)
{
    float val = 0.0f;
    val = SAFE_CAST<uint8_t, float>(1U);
    EXPECT_FLOAT_EQ(val, 1.0f);
    val = SAFE_CAST<uint8_t, float>(0U);
    EXPECT_FLOAT_EQ(val, 0.0f);
    val = SAFE_CAST<uint8_t, float>(255U);
    EXPECT_FLOAT_EQ(val, 255.0f);
}

TEST_F(SafeCastTest, Uint8ToDouble)
{
    double val = 0.0;
    val = SAFE_CAST<uint8_t, double>(1U);
    EXPECT_DOUBLE_EQ(val, 1.0);
    val = SAFE_CAST<uint8_t, double>(0U);
    EXPECT_DOUBLE_EQ(val, 0.0);
    val = SAFE_CAST<uint8_t, double>(255U);
    EXPECT_DOUBLE_EQ(val, 255.0);
}

TEST_F(SafeCastTest, Uint16ToBool)
{
    bool val = false;
    val = SAFE_CAST<uint16_t, bool>(1U);
    EXPECT_EQ(val, true);
    val = SAFE_CAST<uint16_t, bool>(0U);
    EXPECT_EQ(val, false);
    val = SAFE_CAST<uint16_t, bool>(65535U);
    EXPECT_EQ(val, true);
}

TEST_F(SafeCastTest, Uint16ToInt8)
{
    int8_t val = 0;
    val = SAFE_CAST<uint16_t, int8_t>(1U);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<uint16_t, int8_t>(0U);
    EXPECT_EQ(val, 0);
    val = SAFE_CAST<uint16_t, int8_t>(65535U);
    EXPECT_EQ(val, INT8_MAX);   
}

TEST_F(SafeCastTest, Uint16ToInt16)
{
    int16_t val = 0;
    val = SAFE_CAST<uint16_t, int16_t>(1U);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<uint16_t, int16_t>(0U);
    EXPECT_EQ(val, 0);
    val = SAFE_CAST<uint16_t, int16_t>(65535U);
    EXPECT_EQ(val, INT16_MAX);
}

TEST_F(SafeCastTest, Uint16ToInt32)
{
    int32_t val = 0;
    val = SAFE_CAST<uint16_t, int32_t>(1U);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<uint16_t, int32_t>(0U);
    EXPECT_EQ(val, 0);
    val = SAFE_CAST<uint16_t, int32_t>(65535U);
    EXPECT_EQ(val, 65535);
}

TEST_F(SafeCastTest, Uint16ToInt64)
{
    int64_t val = 0;
    val = SAFE_CAST<uint16_t, int64_t>(1U);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<uint16_t, int64_t>(0U);
    EXPECT_EQ(val, 0);
    val = SAFE_CAST<uint16_t, int64_t>(65535U);
    EXPECT_EQ(val, 65535);
}

TEST_F(SafeCastTest, Uint16ToUint8)
{
    uint8_t val = 0U;
    val = SAFE_CAST<uint16_t, uint8_t>(1U);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<uint16_t, uint8_t>(0U);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<uint16_t, uint8_t>(65535U);
    EXPECT_EQ(val, 255U);
}

TEST_F(SafeCastTest, Uint16ToUint32)
{
    uint32_t val = 0U;
    val = SAFE_CAST<uint16_t, uint32_t>(1U);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<uint16_t, uint32_t>(0U);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<uint16_t, uint32_t>(65535U);
    EXPECT_EQ(val, 65535U);
}

TEST_F(SafeCastTest, Uint16ToUint64)
{
    uint64_t val = 0U;
    val = SAFE_CAST<uint16_t, uint64_t>(1U);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<uint16_t, uint64_t>(0U);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<uint16_t, uint64_t>(65535U);
    EXPECT_EQ(val, 65535U);
}

TEST_F(SafeCastTest, Uint16ToFloat)
{
    float val = 0.0f;
    val = SAFE_CAST<uint16_t, float>(1U);
    EXPECT_FLOAT_EQ(val, 1.0f);
    val = SAFE_CAST<uint16_t, float>(0U);
    EXPECT_FLOAT_EQ(val, 0.0f);
    val = SAFE_CAST<uint16_t, float>(65535U);
    EXPECT_FLOAT_EQ(val, 65535.0f);
}

TEST_F(SafeCastTest, Uint16ToDouble)
{
    double val = 0.0;
    val = SAFE_CAST<uint16_t, double>(1U);
    EXPECT_DOUBLE_EQ(val, 1.0);
    val = SAFE_CAST<uint16_t, double>(0U);
    EXPECT_DOUBLE_EQ(val, 0.0);
    val = SAFE_CAST<uint16_t, double>(65535U);
    EXPECT_DOUBLE_EQ(val, 65535.0);
}

TEST_F(SafeCastTest, Uint32ToBool)
{
    bool val = false;
    val = SAFE_CAST<uint32_t, bool>(1U);
    EXPECT_EQ(val, true);
    val = SAFE_CAST<uint32_t, bool>(0U);
    EXPECT_EQ(val, false);
    val = SAFE_CAST<uint32_t, bool>(4294967295U);
    EXPECT_EQ(val, true);
}

TEST_F(SafeCastTest, Uint32ToInt8)
{
    int8_t val = 0;
    val = SAFE_CAST<uint32_t, int8_t>(1U);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<uint32_t, int8_t>(0U);
    EXPECT_EQ(val, 0);
    val = SAFE_CAST<uint32_t, int8_t>(4294967295U);
    EXPECT_EQ(val, INT8_MAX);
}

TEST_F(SafeCastTest, Uint32ToInt16)
{
    int16_t val = 0;
    val = SAFE_CAST<uint32_t, int16_t>(1U);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<uint32_t, int16_t>(0U);
    EXPECT_EQ(val, 0);
    val = SAFE_CAST<uint32_t, int16_t>(4294967295U);
    EXPECT_EQ(val, INT16_MAX);
}

TEST_F(SafeCastTest, Uint32ToInt32)
{
    int32_t val = 0;
    val = SAFE_CAST<uint32_t, int32_t>(1U);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<uint32_t, int32_t>(0U);
    EXPECT_EQ(val, 0);
    val = SAFE_CAST<uint32_t, int32_t>(4294967295U);
    EXPECT_EQ(val, INT32_MAX);
}

TEST_F(SafeCastTest, Uint32ToInt64)
{
    int64_t val = 0;
    val = SAFE_CAST<uint32_t, int64_t>(1U);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<uint32_t, int64_t>(0U);
    EXPECT_EQ(val, 0);
    val = SAFE_CAST<uint32_t, int64_t>(4294967295U);
    EXPECT_EQ(val, 4294967295LL);
}

TEST_F(SafeCastTest, Uint32ToUint8)
{
    uint8_t val = 0U;
    val = SAFE_CAST<uint32_t, uint8_t>(1U);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<uint32_t, uint8_t>(0U);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<uint32_t, uint8_t>(4294967295U);
    EXPECT_EQ(val, 255U);
}

TEST_F(SafeCastTest, Uint32ToUint16)
{
    uint16_t val = 0U;
    val = SAFE_CAST<uint32_t, uint16_t>(1U);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<uint32_t, uint16_t>(0U);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<uint32_t, uint16_t>(4294967295U);
    EXPECT_EQ(val, 65535U);
}

TEST_F(SafeCastTest, Uint32ToUint64)
{
    uint64_t val = 0U;
    val = SAFE_CAST<uint32_t, uint64_t>(1U);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<uint32_t, uint64_t>(0U);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<uint32_t, uint64_t>(4294967295U);
    EXPECT_EQ(val, 4294967295U);
}

TEST_F(SafeCastTest, Uint32ToFloat)
{
    float val = 0.0f;
    val = SAFE_CAST<uint32_t, float>(1U);
    EXPECT_FLOAT_EQ(val, 1.0f);
    val = SAFE_CAST<uint32_t, float>(0U);
    EXPECT_FLOAT_EQ(val, 0.0f);
    val = SAFE_CAST<uint32_t, float>(4294967295U);
    EXPECT_FLOAT_EQ(val, 4294967295.0f);
}

TEST_F(SafeCastTest, Uint32ToDouble)
{
    double val = 0.0;
    val = SAFE_CAST<uint32_t, double>(1U);
    EXPECT_DOUBLE_EQ(val, 1.0);
    val = SAFE_CAST<uint32_t, double>(0U);
    EXPECT_DOUBLE_EQ(val, 0.0);
    val = SAFE_CAST<uint32_t, double>(4294967295U);
    EXPECT_DOUBLE_EQ(val, 4294967295.0);
}

TEST_F(SafeCastTest, Uint64ToBool)
{
    bool val = false;
    val = SAFE_CAST<uint64_t, bool>(1U);
    EXPECT_EQ(val, true);
    val = SAFE_CAST<uint64_t, bool>(0U);
    EXPECT_EQ(val, false);
    val = SAFE_CAST<uint64_t, bool>(18446744073709551615ULL);
    EXPECT_EQ(val, true);
}

TEST_F(SafeCastTest, Uint64ToInt8)
{
    int8_t val = 0;
    val = SAFE_CAST<uint64_t, int8_t>(1U);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<uint64_t, int8_t>(0U);
    EXPECT_EQ(val, 0);
    val = SAFE_CAST<uint64_t, int8_t>(18446744073709551615ULL);
    EXPECT_EQ(val, INT8_MAX);
}

TEST_F(SafeCastTest, Uint64ToInt16)
{
    int16_t val = 0;
    val = SAFE_CAST<uint64_t, int16_t>(1U);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<uint64_t, int16_t>(0U);
    EXPECT_EQ(val, 0);
    val = SAFE_CAST<uint64_t, int16_t>(18446744073709551615ULL);
    EXPECT_EQ(val, INT16_MAX);
}

TEST_F(SafeCastTest, Uint64ToInt32)
{
    int32_t val = 0;
    val = SAFE_CAST<uint64_t, int32_t>(1U);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<uint64_t, int32_t>(0U);
    EXPECT_EQ(val, 0);
    val = SAFE_CAST<uint64_t, int32_t>(18446744073709551615ULL);
    EXPECT_EQ(val, INT32_MAX);
}

TEST_F(SafeCastTest, Uint64ToInt64)
{
    int64_t val = 0;
    val = SAFE_CAST<uint64_t, int64_t>(1U);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<uint64_t, int64_t>(0U);
    EXPECT_EQ(val, 0);
    val = SAFE_CAST<uint64_t, int64_t>(18446744073709551615ULL);
    EXPECT_EQ(val, INT64_MAX);
}

TEST_F(SafeCastTest, Uint64ToUint8)
{
    uint8_t val = 0U;
    val = SAFE_CAST<uint64_t, uint8_t>(1U);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<uint64_t, uint8_t>(0U);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<uint64_t, uint8_t>(18446744073709551615ULL);
    EXPECT_EQ(val, 255U);
}

TEST_F(SafeCastTest, Uint64ToUint16)
{
    uint16_t val = 0U;
    val = SAFE_CAST<uint64_t, uint16_t>(1U);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<uint64_t, uint16_t>(0U);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<uint64_t, uint16_t>(18446744073709551615ULL);
    EXPECT_EQ(val, 65535U);
}

TEST_F(SafeCastTest, Uint64ToUint32)
{
    uint32_t val = 0U;
    val = SAFE_CAST<uint64_t, uint32_t>(1U);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<uint64_t, uint32_t>(0U);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<uint64_t, uint32_t>(18446744073709551615ULL);
    EXPECT_EQ(val, 4294967295U);
}

TEST_F(SafeCastTest, Uint64ToFloat)
{
    float val = 0.0f;
    val = SAFE_CAST<uint64_t, float>(1U);
    EXPECT_FLOAT_EQ(val, 1.0f);
    val = SAFE_CAST<uint64_t, float>(0U);
    EXPECT_FLOAT_EQ(val, 0.0f);
    val = SAFE_CAST<uint64_t, float>(18446744073709551615ULL);
    EXPECT_FLOAT_EQ(val, 18446744073709551615.0f);
}

TEST_F(SafeCastTest, Uint64ToDouble)
{
    double val = 0.0;
    val = SAFE_CAST<uint64_t, double>(1U);
    EXPECT_DOUBLE_EQ(val, 1.0);
    val = SAFE_CAST<uint64_t, double>(0U);
    EXPECT_DOUBLE_EQ(val, 0.0);
    val = SAFE_CAST<uint64_t, double>(18446744073709551615ULL);
    EXPECT_DOUBLE_EQ(val, 18446744073709551615.0);
}

TEST_F(SafeCastTest, FloatToBool)
{
    bool val = false;
    val = SAFE_CAST<float, bool>(1.0f);
    EXPECT_EQ(val, true);
    val = SAFE_CAST<float, bool>(0.0f);
    EXPECT_EQ(val, false);
    val = SAFE_CAST<float, bool>(-1.0f);
    EXPECT_EQ(val, true);
    val = SAFE_CAST<float, bool>(-3.4028235e38f);
    EXPECT_EQ(val, true);
    val = SAFE_CAST<float, bool>(3.4028235e38f);
    EXPECT_EQ(val, true);
}

TEST_F(SafeCastTest, FloatToInt8)
{
    int8_t val = 0;
    val = SAFE_CAST<float, int8_t>(1.1f);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<float, int8_t>(0.2f);
    EXPECT_EQ(val, 0);
    val = SAFE_CAST<float, int8_t>(-1.5f);
    EXPECT_EQ(val, -1);
    val = SAFE_CAST<float, int8_t>(-3.4028235e38f);
    EXPECT_EQ(val, INT8_MIN);
    val = SAFE_CAST<float, int8_t>(3.4028235e38f);
    EXPECT_EQ(val, INT8_MAX);
}

TEST_F(SafeCastTest, FloatToInt16)
{
    int16_t val = 0;
    val = SAFE_CAST<float, int16_t>(1.3f);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<float, int16_t>(0.1f);
    EXPECT_EQ(val, 0);
    val = SAFE_CAST<float, int16_t>(-1.001f);
    EXPECT_EQ(val, -1);
    val = SAFE_CAST<float, int16_t>(-3.4028235e38f);
    EXPECT_EQ(val, INT16_MIN);
    val = SAFE_CAST<float, int16_t>(3.4028235e38f);
    EXPECT_EQ(val, INT16_MAX);
}

TEST_F(SafeCastTest, FloatToInt32)
{
    int32_t val = 0;
    val = SAFE_CAST<float, int32_t>(1.1f);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<float, int32_t>(0.5f);
    EXPECT_EQ(val, 0);
    val = SAFE_CAST<float, int32_t>(-1.1f);
    EXPECT_EQ(val, -1);
    val = SAFE_CAST<float, int32_t>(INT32_MIN);
    EXPECT_EQ(val, INT32_MIN);
    val = SAFE_CAST<float, int32_t>(INT32_MAX);
    EXPECT_EQ(val, INT32_MAX);
    val = SAFE_CAST<float, int32_t>(-3.4028235e38f);
    EXPECT_EQ(val, INT32_MIN);
    val = SAFE_CAST<float, int32_t>(3.4028235e38f);
    EXPECT_EQ(val, INT32_MAX);
}

TEST_F(SafeCastTest, FloatToInt64)
{
    int64_t val = 0;
    val = SAFE_CAST<float, int64_t>(1.0f);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<float, int64_t>(0.0f);
    EXPECT_EQ(val, 0);
    val = SAFE_CAST<float, int64_t>(-1.0f);
    EXPECT_EQ(val, -1);
    val = SAFE_CAST<float, int64_t>(-100.0f);
    EXPECT_EQ(val, -100);
    val = SAFE_CAST<float, int64_t>(100.0f);
    EXPECT_EQ(val, 100);
}

TEST_F(SafeCastTest, FloatToUint8)
{
    uint8_t val = 0U;
    val = SAFE_CAST<float, uint8_t>(1.0f);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<float, uint8_t>(0.0f);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<float, uint8_t>(-1.0f);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<float, uint8_t>(-3.4028235e38f);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<float, uint8_t>(3.4028235e38f);
    EXPECT_EQ(val, 255U);
}

TEST_F(SafeCastTest, FloatToUint16)
{
    uint16_t val = 0U;
    val = SAFE_CAST<float, uint16_t>(1.0f);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<float, uint16_t>(0.0f);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<float, uint16_t>(-1.0f);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<float, uint16_t>(-3.4028235e38f);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<float, uint16_t>(3.4028235e38f);
    EXPECT_EQ(val, 65535U);
}

TEST_F(SafeCastTest, FloatToUint32)
{
    uint32_t val = 0U;
    val = SAFE_CAST<float, uint32_t>(1.0f);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<float, uint32_t>(0.0f);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<float, uint32_t>(-1.0f);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<float, uint32_t>(-3.4028235e38f);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<float, uint32_t>(3.4028235e38f);
    EXPECT_EQ(val, 4294967295U);
}

TEST_F(SafeCastTest, FloatToUint64)
{
    uint64_t val = 0U;
    val = SAFE_CAST<float, uint64_t>(1.0f);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<float, uint64_t>(0.0f);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<float, uint64_t>(-1.0f);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<float, uint64_t>(-3.4028235e38f);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<float, uint64_t>(3.4028235e38f);
    EXPECT_EQ(val, 18446744073709551615ULL);
}

TEST_F(SafeCastTest, FloatToDouble)
{
    double val = 0.0;
    val = SAFE_CAST<float, double>(1.0f);
    EXPECT_DOUBLE_EQ(val, 1.0);
    val = SAFE_CAST<float, double>(0.0f);
    EXPECT_DOUBLE_EQ(val, 0.0);
    val = SAFE_CAST<float, double>(-1.0f);
    EXPECT_DOUBLE_EQ(val, -1.0);
    val = SAFE_CAST<float, double>(-3.4028235e38f);
    EXPECT_DOUBLE_EQ(val, -3.4028235e38f);
    val = SAFE_CAST<float, double>(3.4028235e38f);
    EXPECT_DOUBLE_EQ(val, 3.4028235e38f);
}

TEST_F(SafeCastTest, DoubleToBool)
{
    bool val = false;
    val = SAFE_CAST<double, bool>(1.0);
    EXPECT_EQ(val, true);
    val = SAFE_CAST<double, bool>(0.0);
    EXPECT_EQ(val, false);
    val = SAFE_CAST<double, bool>(-1.0);
    EXPECT_EQ(val, true);
    val = SAFE_CAST<double, bool>(-1.7976931348623157e308);
    EXPECT_EQ(val, true);
    val = SAFE_CAST<double, bool>(1.7976931348623157e308);
    EXPECT_EQ(val, true);
}

TEST_F(SafeCastTest, DoubleToInt8)
{
    int8_t val = 0;
    val = SAFE_CAST<double, int8_t>(1.0);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<double, int8_t>(0.0);
    EXPECT_EQ(val, 0);
    val = SAFE_CAST<double, int8_t>(-1.0);
    EXPECT_EQ(val, -1);
    val = SAFE_CAST<double, int8_t>(-1.7976931348623157e308);
    EXPECT_EQ(val, INT8_MIN);
    val = SAFE_CAST<double, int8_t>(1.7976931348623157e308);
    EXPECT_EQ(val, INT8_MAX);   
}

TEST_F(SafeCastTest, DoubleToInt16)
{
    int16_t val = 0;
    val = SAFE_CAST<double, int16_t>(1.0);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<double, int16_t>(0.0);
    EXPECT_EQ(val, 0);
    val = SAFE_CAST<double, int16_t>(-1.0);
    EXPECT_EQ(val, -1);
    val = SAFE_CAST<double, int16_t>(-1.7976931348623157e308);
    EXPECT_EQ(val, INT16_MIN);
    val = SAFE_CAST<double, int16_t>(1.7976931348623157e308);
    EXPECT_EQ(val, INT16_MAX);
}

TEST_F(SafeCastTest, DoubleToInt32)
{
    int32_t val = 0;
    val = SAFE_CAST<double, int32_t>(1.0);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<double, int32_t>(0.0);
    EXPECT_EQ(val, 0);
    val = SAFE_CAST<double, int32_t>(-1.0);
    EXPECT_EQ(val, -1);
    val = SAFE_CAST<double, int32_t>(-1.7976931348623157e308);
    EXPECT_EQ(val, INT32_MIN);
    val = SAFE_CAST<double, int32_t>(1.7976931348623157e308);
    EXPECT_EQ(val, INT32_MAX);
}

TEST_F(SafeCastTest, DoubleToInt64)
{
    int64_t val = 0;
    val = SAFE_CAST<double, int64_t>(1.0);
    EXPECT_EQ(val, 1);
    val = SAFE_CAST<double, int64_t>(0.0);
    EXPECT_EQ(val, 0);
    val = SAFE_CAST<double, int64_t>(-1.0);
    EXPECT_EQ(val, -1);
    val = SAFE_CAST<double, int64_t>(-1.7976931348623157e308);
    EXPECT_EQ(val, INT64_MIN);
    val = SAFE_CAST<double, int64_t>(1.7976931348623157e308);
    EXPECT_EQ(val, INT64_MAX);
}

TEST_F(SafeCastTest, DoubleToUint8)
{
    uint8_t val = 0U;
    val = SAFE_CAST<double, uint8_t>(1.0);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<double, uint8_t>(0.0);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<double, uint8_t>(-1.0);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<double, uint8_t>(-1.7976931348623157e308);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<double, uint8_t>(1.7976931348623157e308);
    EXPECT_EQ(val, 255U);
}

TEST_F(SafeCastTest, DoubleToUint16)
{
    uint16_t val = 0U;
    val = SAFE_CAST<double, uint16_t>(1.0);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<double, uint16_t>(0.0);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<double, uint16_t>(-1.0);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<double, uint16_t>(-1.7976931348623157e308);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<double, uint16_t>(1.7976931348623157e308);
    EXPECT_EQ(val, 65535U);
}

TEST_F(SafeCastTest, DoubleToUint32)
{
    uint32_t val = 0U;
    val = SAFE_CAST<double, uint32_t>(1.0);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<double, uint32_t>(0.0);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<double, uint32_t>(-1.0);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<double, uint32_t>(-1.7976931348623157e308);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<double, uint32_t>(1.7976931348623157e308);
    EXPECT_EQ(val, 4294967295U);
}

TEST_F(SafeCastTest, DoubleToUint64)
{
    uint64_t val = 0U;
    val = SAFE_CAST<double, uint64_t>(1.0);
    EXPECT_EQ(val, 1U);
    val = SAFE_CAST<double, uint64_t>(0.0);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<double, uint64_t>(-1.0);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<double, uint64_t>(-1.7976931348623157e308);
    EXPECT_EQ(val, 0U);
    val = SAFE_CAST<double, uint64_t>(1.7976931348623157e308);
    EXPECT_EQ(val, 18446744073709551615ULL);
}

TEST_F(SafeCastTest, DoubleToFloat)
{
    float val = 0.0f;
    val = SAFE_CAST<double, float>(1.0);
    EXPECT_FLOAT_EQ(val, 1.0f);
    val = SAFE_CAST<double, float>(0.0);
    EXPECT_FLOAT_EQ(val, 0.0f);
    val = SAFE_CAST<double, float>(-1.0);
    EXPECT_FLOAT_EQ(val, -1.0f);
    val = SAFE_CAST<double, float>(-1.7976931348623157e308);
    EXPECT_FLOAT_EQ(val, -3.4028235e38f);
    val = SAFE_CAST<double, float>(1.7976931348623157e308);
    EXPECT_FLOAT_EQ(val, 3.4028235e38f);
}
