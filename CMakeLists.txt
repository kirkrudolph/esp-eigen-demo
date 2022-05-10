# For more information about build system see
# https://docs.espressif.com/projects/esp-idf/en/latest/api-guides/build-system.html
# The following five lines of boilerplate have to be in your project's
# CMakeLists in this exact order for cmake to work correctly
cmake_minimum_required(VERSION 3.5)

include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(esp32-eigen)

# Eigen is a header only library (i.e. only need cmake for library install/testing/docs)
# - Including it in cmake might make blas/lapack available in the future.
# - Also gives some interesting diagnostics when configuring the project for esp toolchain.
add_subdirectory(eigen)