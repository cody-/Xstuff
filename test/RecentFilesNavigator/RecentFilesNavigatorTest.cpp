//
//  RecentFilesNavigatorTest.cpp
//  Xstuff
//
//  Created by cody on 1/29/14.
//  Copyright (c) 2014 cody. All rights reserved.
//

#include "RecentFilesNavigatorTest.h"

///
RecentFilesNavigatorTest::RecentFilesNavigatorTest()
    : recentFilesPanel(mocks_.recentFilesPanel)
    , navigator(RecentFilesNavigator::New())
{
}
