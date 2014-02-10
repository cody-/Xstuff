//
//  StateActive.cpp
//  Xstuff
//
//  Created by cody on 1/30/14.
//  Copyright (c) 2014 cody. All rights reserved.
//

#include "./StateActive.h"
#include "./StateIdle.h"
#include "XcodeAPI/RecentFilesPanel.h"

///
StateActive::StateActive(StateOwner& owner)
    : State(owner)
    , panel_(RecentFilesPanel::New())
{
}

///
StateActive::~StateActive()
{
}

///
void StateActive::SetUp()
{
    panel_->Show();
}

///
void StateActive::ModKeyUp()
{
    // TODO: panel_->Choose();
    SwitchState<StateIdle>();
}

///
void StateActive::SwitchKeyDown()
{
}
