add_library(hello src/HelloWorld.cpp)

find_package(PkgConfig REQUIRED)
pkg_check_moduleS( GTKMM REQUIRED gtkmm-3.0 )

target_include_directories(hello PUBLIC include ${GTKMM_INCLUDE_DIRS})
target_link_libraries(hello PUBLIC ${GTKMM_LIBRARIES})