cmake_minimum_required(VERSION 3.5)
project(Cpp_Starter_Template)
set(EXEC akash)
set(CMAKE_CXX_STANDARD 20)
include_directories(include)
add_compile_options(-Wall -Wextra -Wpedantic)
file(GLOB SOURCES src/*.cpp)
add_executable(${EXEC} ${SOURCES})

add_custom_command(TARGET ${EXEC} 
   POST_BUILD
   COMMAND akash 
   WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
   COMMENT "Running built executable and additional process..."
   VERBATIM
)

