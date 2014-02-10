//
//  StateActive.h
//  Xstuff
//
//  Created by cody on 1/30/14.
//  Copyright (c) 2014 cody. All rights reserved.
//

#ifndef __Xstuff__RecentFilesNavigator__StateActive__
#define __Xstuff__RecentFilesNavigator__StateActive__

#include "./State.h"
#include <memory>

class RecentFilesPanel;

///
class StateActive
    : public State
{
public:
    StateActive(StateOwner& owner);
    ~StateActive();
    
    void SetUp() override;
    void ModKeyUp() override;
    void SwitchKeyDown() override;

private:
    std::unique_ptr<RecentFilesPanel> panel_;
};

#endif /* defined(__Xstuff__StateActive__) */
