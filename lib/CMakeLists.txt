add_library(lib SHARED IftLibrary.cpp)

set_target_properties(
    lib PROPERTIES
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED ON
)

target_include_directories(
    lib 
    PRIVATE 
    ${SMAKE_CURRENT_BINARY_DIR}
)


