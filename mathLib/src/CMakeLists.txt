add_library(DVID_Math
        Arithmetic.cpp)

target_include_directories(DVID_Math PUBLIC "${DVID_Math_SOURCE_DIR}/include")

install(TARGETS ${PROJECT_NAME} DESTINATION "/usr/local/lib/DVID")
install(DIRECTORY "${PROJECT_SOURCE_DIR}/include/DVID" DESTINATION "/usr/local/include/")