add_executable(scaffold)

target_sources(scaffold
    PRIVATE
    src/main.cpp
)

target_link_libraries(scaffold
    PRIVATE
    scaffold-core
)