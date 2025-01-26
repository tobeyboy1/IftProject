add_executable(app1 Program_1.cpp)

set_target_properties(
    app1 PROPERTIES
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED ON
)

target_include_directories(
    app1
    PRIVATE 
    ${SMAKE_CURRENT_BINARY_DIR}
)

target_include_directories(
    app1
    PRIVATE 
    ${SMAKE_CURRENT_SOURCE_DIR}/../lib
)

target_link_libraries(app1 lib)

