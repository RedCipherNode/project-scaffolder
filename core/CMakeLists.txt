add_library(scaffold-core)

target_sources(scaffold-core
    PRIVATE
    src/generator.cpp
)

target_include_directories(scaffold-core
    PUBLIC
    include
)