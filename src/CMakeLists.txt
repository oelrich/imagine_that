
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(imagine_that test.cpp)
target_link_libraries(imagine_that ${OpenCV_LIBS})