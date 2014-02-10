//
//  mocks.cpp
//  Xstuff
//
//  Created by cody on 1/29/14.
//  Copyright (c) 2014 cody. All rights reserved.
//

#include "mocks.h"

///
Mocks* Mocks::instance = nullptr;

///
Mocks::Mocks() {
    instance = this;
}

///
Mocks::~Mocks() {
    instance = nullptr;
}

///
class RecentFilesPanelMockAdapter
    : public RecentFilesPanel
{
public:
    ~RecentFilesPanelMockAdapter() { Mocks::instance->recentFilesPanel.Die(); }
    unsigned Count() const override { return Mocks::instance->recentFilesPanel.Count(); }
    void Show() override { Mocks::instance->recentFilesPanel.Show(); }
    void First() override { Mocks::instance->recentFilesPanel.First(); }
    void Next() override { Mocks::instance->recentFilesPanel.Next(); }
    void Choose() override { Mocks::instance->recentFilesPanel.Choose(); }
};

///
RecentFilesPanel* RecentFilesPanel::New() {
    return new RecentFilesPanelMockAdapter();
}
