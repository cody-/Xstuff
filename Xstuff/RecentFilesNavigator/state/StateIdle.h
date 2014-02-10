//
//  StateIdle.h
//  Xstuff
//
//  Created by cody on 1/29/14.
//  Copyright (c) 2014 cody. All rights reserved.
//

#ifndef __Xstuff__RecentFilesNavigator__StateIdle__
#define __Xstuff__RecentFilesNavigator__StateIdle__

#include "./State.h"

///
class StateIdle
    : public State
{
public:
    using State::State;
    void ModKeyDown() override;
};

#endif
