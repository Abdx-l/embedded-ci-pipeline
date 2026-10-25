# Embedded CI Pipeline

CMake firmware library with a mocked hardware boundary, Unity tests, static analysis, container scanning, ELF/Intel HEX outputs, map-file artifacts, and a configurable binary size gate.

## Run

`cmake -S . -B build && cmake --build build && ctest --test-dir build`. Unity v2.6.1 is fetched by CMake. CI runs cppcheck, clang-tidy, Trivy, and uploads build outputs. The ELF target is a host demonstration linked against the board mock.
