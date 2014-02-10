//
//  RecentFilesPanel.h
//  Xstuff
//
//  Created by cody on 1/29/14.
//  Copyright (c) 2014 cody. All rights reserved.
//

#ifndef mock_RecentFilesPanel_h
#define mock_RecentFilesPanel_h

#include "XcodeAPI/RecentFilesPanel.h"
#include <gmock/gmock.h>

///
class MockRecentFilesPanel
    : public RecentFilesPanel
{
public:
    MOCK_CONST_METHOD0(Count, unsigned());
    MOCK_METHOD0(Show, void());
    MOCK_METHOD0(First, void());
    MOCK_METHOD0(Next, void());
    MOCK_METHOD0(Choose, void());

    MOCK_METHOD0(Die, void());
};

#endif
