//
//  RecentFilesNavigator.h
//  Xstuff
//
//  Created by cody on 1/17/14.
//  Copyright (c) 2014 cody. All rights reserved.
//

#ifndef Xstuff_RecentFilesNavigator_h
#define Xstuff_RecentFilesNavigator_h

///
class RecentFilesNavigator {
public:
    static RecentFilesNavigator* New();
    virtual ~RecentFilesNavigator() = default;

    virtual void ModKeyDown() = 0;
    virtual void ModKeyUp() = 0;
    virtual void SwitchKeyDown() = 0;
    virtual void SwitchKeyUp() = 0;
};

#endif
