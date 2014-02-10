//
//  RecentFilesPanelImpl.h
//  Xstuff
//
//  Created by cody on 1/31/14.
//  Copyright (c) 2014 cody. All rights reserved.
//

#ifndef __Xstuff__XcodeAPI__RecentFilesPanelImpl__
#define __Xstuff__XcodeAPI__RecentFilesPanelImpl__

#include "./RecentFilesPanel.h"
#import <AppKit/AppKit.h>

///
class RecentFilesPanelImpl
    : public RecentFilesPanel
{
public:
    RecentFilesPanelImpl();
    ~RecentFilesPanelImpl();

    unsigned Count() const override;
    void Show() override;
    void First() override;
    void Next() override;
    void Choose() override;
};

#endif /* defined(__Xstuff__XcodeAPI__RecentFilesPanelImpl__) */
