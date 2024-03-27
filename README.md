## Current Environment
- Visual Studio Code 1.87.2
- PC: Windows 10 Enterprise 22H2
- Nordic SDK 2.5.2
- CMake: 3.21.0
- Zephyr version: 3.4.99
- West version: 1.2.0
- Dtc version: 1.4.7
- GNU C/Cxx compiler 12.2.0

## Project Structure nrf58240DK
- Manage source and include files in subdirectories.

# Problem
```
src/main.cpp:8 undefined reference to 'Parameters::Device()'
```

# Solution
Problem solved thanks to Discord :: [Brandon]
- The problem seems to be the usage of namespace in the `device.cpp` file.

Instead of:
```
#include "device.hpp"

using namespace Parameters; 

int Device() 
{
    return 42;
}
```

Use:

```
#include "device.hpp"

namespace Parameters
{
    int Device() 
    {
        return 42;
    }
}
```
