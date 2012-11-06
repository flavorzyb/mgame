//
//  animationTest.cpp
//  fysg
//
//  Created by flavor on 12-11-2.
//
//
#include <stdio.h>
#include "animation.h"
#include "gtest/gtest.h"

using namespace engine;
class AnimationTest:public testing::Test
{
    protected:
    // Sets up the test fixture.
    virtual void SetUp();
    
    // Tears down the test fixture.
    virtual void TearDown();
};

TEST(AnimationTest, dddd)
{
    printf("ddddd");
    ASSERT_TRUE(true);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}