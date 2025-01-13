# Subproject's CMakeLists.txt
# Define the target for the executable
add_executable(CMake_VCPKG CMake_VCPKG.cpp)

# Require C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find and link SFML
find_package(SFML COMPONENTS system window graphics audio CONFIG REQUIRED)

# Include directories
target_include_directories(CMake_VCPKG PUBLIC ${CMAKE_SOURCE_DIR}/include)

# Link SFML libraries
target_link_libraries(CMake_VCPKG PRIVATE
    sfml-audio
    sfml-system
    sfml-graphics
    sfml-window
    sfml-network
)
