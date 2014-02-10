//
//  Xstuff.m
//  Xstuff
//
//  Created by cody on 1/8/14.
//    Copyright (c) 2014 cody. All rights reserved.
//

#import "Xstuff.h"
#import <Carbon/Carbon.h> // Key codes kVK_*
#import "./RecentFilesNavigator/RecentFilesNavigator.h"

static Xstuff *sharedPlugin;
@interface Xstuff()
{
    RecentFilesNavigator* recentFilesNavigator_;
}

@property (nonatomic, strong) NSBundle *bundle;
@end

@implementation Xstuff

+ (void)pluginDidLoad:(NSBundle *)plugin
{
    static id sharedPlugin = nil;
    static dispatch_once_t onceToken;
    NSString *currentApplicationName = [[NSBundle mainBundle] infoDictionary][@"CFBundleName"];
    if ([currentApplicationName isEqual:@"Xcode"]) {
        dispatch_once(&onceToken, ^{
            sharedPlugin = [[self alloc] initWithBundle:plugin];
        });
    }
}

- (id)initWithBundle:(NSBundle *)plugin
{
    if (self = [super init]) {
        // reference to plugin's bundle, for resource acccess
        self.bundle = plugin;
        recentFilesNavigator_ = RecentFilesNavigator::New();
        
        // Ctrl + key down
        [NSEvent addLocalMonitorForEventsMatchingMask:NSKeyDownMask handler:^NSEvent*(NSEvent *event) {
            if([event modifierFlags] & NSControlKeyMask && [event keyCode] == kVK_Tab) {
                NSLog(@"Ctrl + Tab Down");
                recentFilesNavigator_->SwitchKeyDown();
            }

            return event;
        }];

        // key up
        [NSEvent addLocalMonitorForEventsMatchingMask:NSKeyUpMask handler:^NSEvent*(NSEvent *event) {
            if([event keyCode] == kVK_Tab) {
                NSLog(@"Tab UP");
                recentFilesNavigator_->SwitchKeyUp();
            }
            return event;
        }];

        // Ctrl up/down
        [NSEvent addLocalMonitorForEventsMatchingMask:NSFlagsChangedMask handler:^NSEvent*(NSEvent *event) {
            if ([event keyCode] != kVK_Control) {
                return event;
            }

            if([event modifierFlags] & NSControlKeyMask) {
                NSLog(@"CtrlDown");
                recentFilesNavigator_->ModKeyDown();
            } else {
                NSLog(@"CtrlUp");
                recentFilesNavigator_->ModKeyUp();
            }

            return event;
        }];
    }
    return self;
}

- (void)dealloc
{
    delete recentFilesNavigator_;
}

@end
