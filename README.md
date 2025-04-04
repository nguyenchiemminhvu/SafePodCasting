- [SafePodCasting](#safepodcasting)
  - [Features](#features)
  - [Getting Started](#getting-started)
    - [Prerequisites](#prerequisites)
    - [Installation](#installation)
    - [Usage](#usage)
      - [Examples](#examples)
  - [Contributing](#contributing)
  - [License](#license)


# SafePodCasting

SafePodCasting is a ```C++``` library designed to provide safe and reliable type conversions between various primitive data types. It ensures that conversions are performed with proper bounds checking to prevent data loss or undefined behavior.

## Features

- **Safe Type Conversions**: Convert between different primitive types (e.g., ```bool```, ```int8_t```, ```uint8_t```, ```float```, ```double```, etc.) with built-in safety checks.
- **Extensive Coverage**: Supports conversions for all common primitive types, including signed and unsigned integers, floating-point numbers, and boolean values.
- **Error Prevention**: Prevents overflows, underflows, and other issues that can arise during type casting.
- **Lightweight and Easy to Use**: The library is implemented as a single header and source file, making it easy to integrate into any project.

## Getting Started

### Prerequisites

- ```C++``` compiler that supports ```C++11``` or later.

### Installation

1. Clone the repository or copy the `safecast.h` and `safecast.cpp` files into your project.
2. Include the `safecast.h` header in your source files where you need safe type conversions.

### Usage

The library provides a ```safe_cast``` class with static methods for type conversions. Below is an example of how to use it:

#### Examples

```cpp
#include "safecast.h"
#include <iostream>

int main()
{
    int32_t value = 42;

    int8_t int8Value = safe_cast::int32_to_int8(value);
    float floatValue = safe_cast::int32_to_float(value);
    double doubleValue = safe_cast::int32_to_double(value);

    std::cout << "int8_t: " << static_cast<int>(int8Value) << "\n";
    std::cout << "float: " << floatValue << "\n";
    std::cout << "double: " << doubleValue << "\n";

    return 0;
}
```

The library also provides a ```SAFE_CAST``` template function for a more concise syntax:

```cpp
#include "safecast.h"
#include <iostream>

int main()
{
    int16_t smallValue = 12345;

    // Convert int16_t to int32_t
    int32_t int32Value = SAFE_CAST<int16_t, int32_t>(smallValue);

    // Convert int16_t to double
    double doubleValue = SAFE_CAST<int16_t, double>(smallValue);

    // Convert double to int32_t
    double largeValue = 12345.6789;
    int32_t truncatedValue = SAFE_CAST<double, int32_t>(largeValue);

    std::cout << "int32_t: " << int32Value << "\n";
    std::cout << "double: " << doubleValue << "\n";
    std::cout << "truncated int32_t: " << truncatedValue << "\n";

    return 0;
}
```

## Contributing

Contributions are welcome! If you find a bug or have a feature request, please open an issue or submit a pull request.

## License

This project is licensed under the MIT License. See the LICENSE file for details.
