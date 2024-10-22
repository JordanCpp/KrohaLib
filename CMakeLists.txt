
include_directories("include")

if(WIN32)
    add_library(Kroha "source/Windows/Console.cpp")
else()
    add_library(Kroha "source/Linux/Console.cpp")
endif()

add_executable(main "main.cpp")
target_link_libraries(main Kroha)
