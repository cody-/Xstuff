//
//  StateCharged.h
//  Xstuff
//
//  Created by cody on 1/30/14.
//  Copyright (c) 2014 cody. All rights reserved.
//

#ifndef __Xstuff__RecentFilesNavigator__StateCharged__
#define __Xstuff__RecentFilesNavigator__StateCharged__

#include "./State.h"

///
class StateCharged
    : public State
{
public:
    using State::State;
    void ModKeyUp() override;
    void SwitchKeyDown() override;
};

#endif /* defined(__Xstuff__RecentFilesNavigator__StateCharged__) */
