message("Parameters")

set(PARAMETERS_INCLUDES  "${CMAKE_CURRENT_SOURCE_DIR}/includes")
file(GLOB PARAMETERS_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/source/*.c*")

target_include_directories(app PRIVATE ${PARAMETERS_INCLUDES})
target_sources(app PRIVATE ${PARAMETERS_SOURCES})
