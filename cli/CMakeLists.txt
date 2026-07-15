add_executable(scaffold)

target_sources(scaffold
    PRIVATE
    src/main.cpp
    src/application.cpp
    src/command.cpp
)

target_include_directories(scaffold
    PRIVATE
    include
)

target_link_libraries(scaffold
    PRIVATE
    scaffold-core
)