//
//  RecentFilesPanel.h
//  Xstuff
//
//  Created by cody on 1/17/14.
//  Copyright (c) 2014 cody. All rights reserved.
//

#ifndef Xstuff_RecentFilesPanel_h
#define Xstuff_RecentFilesPanel_h

///
class RecentFilesPanel {
public:
    static RecentFilesPanel* Open();
    virtual ~RecentFilesPanel() = default;

    virtual void Next() = 0;
    virtual void Choose() = 0;
};

#endif
