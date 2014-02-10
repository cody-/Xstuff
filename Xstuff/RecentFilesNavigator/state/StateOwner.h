//
//  StateOwner.h
//  Xstuff
//
//  Created by cody on 1/29/14.
//  Copyright (c) 2014 cody. All rights reserved.
//

#ifndef __Xstuff__RecentFilesNavigator__StateOwner__
#define __Xstuff__RecentFilesNavigator__StateOwner__

#include <memory>

class State;

///
class StateOwner
{
public:
    virtual void SetState(std::unique_ptr<State> state) = 0;
};

#endif
