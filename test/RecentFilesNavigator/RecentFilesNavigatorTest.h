//
//  RecentFilesNavigatorTest.h
//  Xstuff
//
//  Created by cody on 1/29/14.
//  Copyright (c) 2014 cody. All rights reserved.
//

#ifndef __Xstuff__RecentFilesNavigatorTest__
#define __Xstuff__RecentFilesNavigatorTest__

#include "RecentFilesNavigator.h"
#include "./mock/mocks.h"
#include <gtest/gtest.h>

///
class RecentFilesNavigatorTest
    : public ::testing::Test
{
public:
    RecentFilesNavigatorTest();

private:
    Mocks mocks_;

protected:
    testing::NiceMock<MockRecentFilesPanel>& recentFilesPanel;
    std::unique_ptr<RecentFilesNavigator> navigator;
};

#endif /* defined(__Xstuff__RecentFilesNavigatorTest__) */
