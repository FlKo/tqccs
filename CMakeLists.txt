cmake_minimum_required(VERSION 3.10)
project(MyCppProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add third-party libraries
add_subdirectory(third_party/fmt)
add_subdirectory(third_party/spdlog)

# Add the main executable
add_executable(myapp src/main.cpp src/logger.cpp src/example.cpp)

# Include vendored headers
target_include_directories(myapp PRIVATE 
    include 
    third_party/fmt/include 
    third_party/spdlog/include
    third_party/CLI11/include
)

# Link vendored libraries
target_link_libraries(myapp PRIVATE fmt spdlog)
