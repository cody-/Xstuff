//
//  RecentFilesNavigatorImpl.cpp
//  Xstuff
//
//  Created by cody on 1/17/14.
//  Copyright (c) 2014 cody. All rights reserved.
//

#include "./RecentFilesNavigatorImpl.h"

///
RecentFilesNavigator* RecentFilesNavigator::New() {
    return new RecentFilesNavigatorImpl();
}

///
RecentFilesNavigatorImpl::RecentFilesNavigatorImpl() {
}

///
RecentFilesNavigatorImpl::~RecentFilesNavigatorImpl() {
}

///
void RecentFilesNavigatorImpl::ModKeyDown() {
}

///
void RecentFilesNavigatorImpl::ModKeyUp() {
}

///
void RecentFilesNavigatorImpl::SwitchKeyDown() {
}

///
void RecentFilesNavigatorImpl::SwitchKeyUp() {
}
