cmake_minimum_required(VERSION 3.25)

project(libft C)

find_library(MATH_LIBRARY m REQUIRED)
find_package(MiniLibX REQUIRED)

add_library(ft)
add_subdirectory(include)
add_subdirectory(src)

set_target_properties(ft
  PROPERTIES
    C_EXTENSIONS OFF
    C_STANDARD 90
    EXPORT_NAME ${PROJECT_NAME}
)

if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
  target_compile_definitions(ft PRIVATE _POSIX_C_SOURCE=200112L)
endif()

target_compile_options(ft
  PRIVATE
    -pedantic-errors
    -Wall
    -Werror
    -Wextra
    -Wpedantic
    -Wshadow
)

target_link_libraries(ft PRIVATE ${MATH_LIBRARY} 42Paris::MiniLibX)

include(CMakePackageConfigHelpers)
include(GNUInstallDirs)

configure_package_config_file(
  ${PROJECT_NAME}-config.cmake.in ${PROJECT_NAME}-config.cmake
  INSTALL_DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME}
)

install(TARGETS ft EXPORT ${PROJECT_NAME}-targets
  FILE_SET HEADERS
  INCLUDES DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)

install(EXPORT ${PROJECT_NAME}-targets
  DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME}
  NAMESPACE abouvier::
)

install(FILES "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}-config.cmake"
  DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME}
)

add_library(abouvier::${PROJECT_NAME} ALIAS ft)
