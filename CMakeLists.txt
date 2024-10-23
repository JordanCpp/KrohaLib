
include_directories("include")

if(WIN32)
    add_library(Kroha "source/Bytes.cpp" "source/Chars.cpp" "source/Result.cpp" "source/Windows/Console.cpp")
else()
    add_library(Kroha "source/Bytes.cpp" "source/Chars.cpp" "source/Result.cpp" "source/Linux/Console.cpp")
endif()

add_executable(main "main.cpp")
target_link_libraries(main Kroha)
