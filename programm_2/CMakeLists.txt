add_executable(app2 Program_2.cpp)

set_target_properties(
    app2 PROPERTIES
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED ON
)

target_include_directories(
    app2
    PRIVATE 
    ${SMAKE_CURRENT_BINARY_DIR}
)

target_include_directories(
    app2
    PRIVATE 
    ${SMAKE_CURRENT_SOURCE_DIR}/../lib
)

target_link_libraries(app2 lib)

