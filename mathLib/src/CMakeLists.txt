add_library(MathLib
        Arithmetic.cpp)

target_include_directories(MathLib PUBLIC "${MathLib_SOURCE_DIR}/include")
