cmake_minimum_required (VERSION 2.6)
project(FYSGTest)

#####set version infomation
set (FYSGTEST_VERSION_MAJOR 1)
set (FYSGTEST_VERSION_MINOR 0)

######set output path
SET(EXECUTABLE_OUTPUT_PATH bin)

set(ANIMATION_SOURCE_PATH ../../Classes/engine/animation)
set(GTEST_FRAMEWORK_PATH $ENV{GTEST_FRAMEWORK_PATH})

INCLUDE_DIRECTORIES(${ANIMATION_SOURCE_PATH} ${GTEST_FRAMEWORK_PATH}/gtest.framework)
LINK_DIRECTORIES(${GTEST_FRAMEWORK_PATH})

###set source list######
set (ANIMATION_SRC ${ANIMATION_SOURCE_PATH}/animation.cpp)
set (ANIMATION_TEST_SRC ../../tests/engine/animation/animationTest.cpp)

####add execute######
add_executable(animation_test ${ANIMATION_SRC} ${ANIMATION_TEST_SRC})
TARGET_LINK_LIBRARIES(animation_test libgtest.a libgtest_main.a)
