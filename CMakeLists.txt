cmake_minimum_required (VERSION 2.8)

project (demoexe)

set (${PROJECT_NAME}_VERSION_MAJOR 0)
set (${PROJECT_NAME}_VERSION_MINOR 1)
set (${PROJECT_NAME}_VERSION_PATCH 0)

aux_source_directory(src DIR_SRCS)

find_package(demolib2 REQUIRED)

add_executable(${PROJECT_NAME} ${DIR_SRCS})
target_link_libraries(${PROJECT_NAME} demolib2::demolib2)

install(TARGETS ${PROJECT_NAME}
    RUNTIME DESTINATION bin
)
