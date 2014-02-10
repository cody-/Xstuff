//
//  RecentFilesPanel.h
//  Xstuff
//
//  Created by cody on 1/17/14.
//  Copyright (c) 2014 cody. All rights reserved.
//

#ifndef Xstuff_XcodeAPI_RecentFilesPanel_h
#define Xstuff_XcodeAPI_RecentFilesPanel_h

///
class RecentFilesPanel {
public:
    static RecentFilesPanel* New();
    virtual ~RecentFilesPanel() = default;

    virtual unsigned Count() const = 0;
    virtual void Show() = 0;
    virtual void First() = 0;
    virtual void Next() = 0;
    virtual void Choose() = 0;
};

#endif
