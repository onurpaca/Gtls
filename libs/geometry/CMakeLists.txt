project(geometry)

set(SOURCES
        source/line.cpp
   )

set(HEADERS
        include/gtls/geometry/geo_base.h
        include/gtls/geometry/point.h
        include/gtls/geometry/line.h
   )


add_library(${PROJECT_NAME} STATIC ${SOURCES} ${HEADERS})
add_library(gtlslibs::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(
        ${PROJECT_NAME}
        PUBLIC $<INSTALL_INTERFACE:include> $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)
