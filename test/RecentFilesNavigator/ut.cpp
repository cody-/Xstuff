//
//  ut.cpp
//  Xstuff
//
//  Created by cody on 1/17/14.
//  Copyright (c) 2014 cody. All rights reserved.
//

#include "RecentFilesNavigator.h"
#include <stdio.h>
#include <gtest/gtest.h>

using namespace std;

///
class RecentFilesNavigatorTest
    : public ::testing::Test
{
public:
    RecentFilesNavigatorTest() : navigator(RecentFilesNavigator::New()) {}

    unique_ptr<RecentFilesNavigator> navigator;
};

TEST_F(RecentFilesNavigatorTest, Init) {
    EXPECT_TRUE(navigator != nullptr);
}
