//
//  ut.cpp
//  Xstuff
//
//  Created by cody on 1/17/14.
//  Copyright (c) 2014 cody. All rights reserved.
//

#include "./RecentFilesNavigatorTest.h"
#include <stdio.h>

using namespace std;
using namespace ::testing;

///
TEST_F(RecentFilesNavigatorTest, Init) {
    EXPECT_TRUE(navigator != nullptr);
}

///
TEST_F(RecentFilesNavigatorTest, ModKeyDown) {
    EXPECT_CALL(recentFilesPanel, Show())
        .Times(0);

    navigator->ModKeyDown();
}

///
TEST_F(RecentFilesNavigatorTest, SwitchKeyDown) {
    EXPECT_CALL(recentFilesPanel, Show())
        .Times(0);

    navigator->SwitchKeyDown();
}

///
TEST_F(RecentFilesNavigatorTest, SwitchThenModKeysDown) {
    EXPECT_CALL(recentFilesPanel, Show())
        .Times(0);

    navigator->SwitchKeyDown();
    navigator->ModKeyDown();
}

///
TEST_F(RecentFilesNavigatorTest, ModThenSwitchKeysDown) {
    EXPECT_CALL(recentFilesPanel, Show())
        .Times(1);

    navigator->ModKeyDown();
    navigator->SwitchKeyDown();
}

///
TEST_F(RecentFilesNavigatorTest, PanelActive_ModKeyUp) {
    navigator->ModKeyDown();
    navigator->SwitchKeyDown();

    EXPECT_CALL(recentFilesPanel, Die())
        .Times(1);

    navigator->ModKeyUp();
    Mock::VerifyAndClearExpectations(&recentFilesPanel);
}
