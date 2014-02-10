//
//  RecentFilesPanelImpl.mm
//  Xstuff
//
//  Created by cody on 1/31/14.
//  Copyright (c) 2014 cody. All rights reserved.
//

#include "./RecentFilesPanelImpl.h"
#import <Carbon/Carbon.h>
#include <thread>

///
RecentFilesPanel* RecentFilesPanel::New() {
    return new RecentFilesPanelImpl();
}

///
RecentFilesPanelImpl::RecentFilesPanelImpl()
{
}

///
RecentFilesPanelImpl::~RecentFilesPanelImpl()
{
    NSLog(@"Destructor");
}

///
unsigned RecentFilesPanelImpl::Count() const {
    return 0;
}

///
void RecentFilesPanelImpl::Show() {
    NSView* view = [[NSApp mainWindow] contentView]; // NSView
    view = [[view subviews] firstObject]; // DVTTabSwitcher
    view = [[view subviews] firstObject]; // NSTabView
    view = [[view subviews] firstObject]; // DVTControllerContentView
    view = [[view subviews] firstObject]; // DVTSplitView
    view = [[view subviews] objectAtIndex:1]; // DVTReplacementView
    view = [[view subviews] firstObject]; // DVTControllerContentView
    view = [[view subviews] firstObject]; // DVTSplitView
    view = [[view subviews] firstObject]; // DVTLayoutView_ML
    view = [[view subviews] objectAtIndex:1]; // NSView
    view = [[view subviews] firstObject]; // DVTControllerContentView
    view = [[view subviews] firstObject]; // DVTControllerContentView
    view = [[view subviews] firstObject]; // NSView
    view = [[view subviews] firstObject]; // IDENavBar
    view = [[view subviews] objectAtIndex:1]; // IDEControlGroup
    view = [[view subviews] firstObject]; // DVTBorderedView
    NSPopUpButton* relatedFilesPopup = [[view subviews] firstObject]; // DVTGradientImagePopUpButton

    [relatedFilesPopup performClick:nil];


//    CGEventRef keydown = CGEventCreateKeyboardEvent(NULL, kVK_DownArrow, true);
//    [[NSApp modalWindow] sendEvent:[NSEvent eventWithCGEvent:keydown]];
//
//    CFRelease(keydown);

//    NSMenu* menu = [relatedFilesPopup menu];
//    NSMenuItem* recentFiles = [menu itemWithTitle:@"Recent Files"];
//
//    CGPoint point = [[[recentFiles view] window] frame].origin;
//    NSLog(@"%f x %f", point.x, point.y);
//
//    CGEventRef mouseEvent = CGEventCreateMouseEvent(NULL, kCGEventMouseMoved, point, kCGMouseButtonLeft);
//    CGEventPost(kCGHIDEventTap, mouseEvent);
//    CFRelease(mouseEvent);
}

///
void RecentFilesPanelImpl::First() {
}

///
void RecentFilesPanelImpl::Next() {
}

///
void RecentFilesPanelImpl::Choose() {
}
