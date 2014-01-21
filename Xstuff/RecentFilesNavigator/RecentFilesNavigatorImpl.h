//
//  RecentFilesNavigatorImpl.h
//  Xstuff
//
//  Created by cody on 1/17/14.
//  Copyright (c) 2014 cody. All rights reserved.
//

#ifndef __Xstuff__RecentFilesNavigatorImpl__
#define __Xstuff__RecentFilesNavigatorImpl__

#include "./RecentFilesNavigator.h"

///
class RecentFilesNavigatorImpl
    : public RecentFilesNavigator
{
public:
    RecentFilesNavigatorImpl();
    ~RecentFilesNavigatorImpl();

    void ModKeyDown() override;
    void ModKeyUp() override;
    void SwitchKeyDown() override;
    void SwitchKeyUp() override;
};

#endif /* defined(__Xstuff__RecentFilesNavigatorImpl__) */
