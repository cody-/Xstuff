//
//  mocks.h
//  Xstuff
//
//  Created by cody on 1/29/14.
//  Copyright (c) 2014 cody. All rights reserved.
//

#ifndef __Xstuff__mocks__
#define __Xstuff__mocks__

#include "./MockRecentFilesPanel.h"

///
class Mocks
{
public:
    Mocks();
    ~Mocks();

    testing::NiceMock<MockRecentFilesPanel> recentFilesPanel;

private:
    static Mocks* instance;

    friend class RecentFilesPanelMockAdapter;
};

#endif /* defined(__Xstuff__mocks__) */
