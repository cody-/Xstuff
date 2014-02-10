//
//  RecentFilesNavigatorImpl.cpp
//  Xstuff
//
//  Created by cody on 1/17/14.
//  Copyright (c) 2014 cody. All rights reserved.
//

#include "./RecentFilesNavigatorImpl.h"
#include "XcodeAPI/RecentFilesPanel.h"
#include "./state/State.h"
#include "./state/StateIdle.h"

using namespace std;

///
RecentFilesNavigator* RecentFilesNavigator::New() {
    return new RecentFilesNavigatorImpl();
}

///
RecentFilesNavigatorImpl::RecentFilesNavigatorImpl()
{
    SetState(unique_ptr<State>(new StateIdle(*this)));
}

///
RecentFilesNavigatorImpl::~RecentFilesNavigatorImpl() {
}

///
void RecentFilesNavigatorImpl::ModKeyDown() {
    state_->ModKeyDown();
}

///
void RecentFilesNavigatorImpl::ModKeyUp() {
    state_->ModKeyUp();
}

///
void RecentFilesNavigatorImpl::SwitchKeyDown() {
    state_->SwitchKeyDown();
}

///
void RecentFilesNavigatorImpl::SwitchKeyUp() {
    state_->SwitchKeyUp();
}

///
void RecentFilesNavigatorImpl::SetState(unique_ptr<State> state) {
    state_ = move(state);
    state_->SetUp();
}
