//
//  Xstuff.m
//  Xstuff
//
//  Created by cody on 1/8/14.
//    Copyright (c) 2014 cody. All rights reserved.
//

#import "Xstuff.h"

namespace {
    constexpr int KEY_CTRL = 59;
    constexpr int KEY_ESC = 53;
}

static Xstuff *sharedPlugin;
@interface Xstuff()

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
        
        // Ctrl + key down
        [NSEvent addLocalMonitorForEventsMatchingMask:NSKeyDownMask handler:^NSEvent*(NSEvent *event) {
            if([event modifierFlags] & NSControlKeyMask && [event keyCode] == KEY_ESC) {
                NSLog(@"Ctrl + ESC Down");
            }

            return event;
        }];

        // key up
        [NSEvent addLocalMonitorForEventsMatchingMask:NSKeyUpMask handler:^NSEvent*(NSEvent *event) {
            if([event keyCode] == KEY_ESC) {
                NSLog(@"ESC UP");
            }
            return event;
        }];

        // Ctrl up/down
        [NSEvent addLocalMonitorForEventsMatchingMask:NSFlagsChangedMask handler:^NSEvent*(NSEvent *event) {
            if ([event keyCode] != KEY_CTRL) {
                return event;
            }

            if([event modifierFlags] & NSControlKeyMask) {
                NSLog(@"CtrlDown");
            } else {
                NSLog(@"CtrlUp");
            }

            return event;
        }];
    }
    return self;
}

- (void)dealloc
{
}

@end
