//
//  Xstuff.m
//  Xstuff
//
//  Created by cody on 1/8/14.
//    Copyright (c) 2014 cody. All rights reserved.
//

#import "Xstuff.h"

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
        
//        // key down
//        [NSEvent addLocalMonitorForEventsMatchingMask:NSKeyDownMask handler:^NSEvent*(NSEvent *event) {
//            NSLog(@"keyDown %@", event);
//            return event;
//        }];
//
//        // key up
//        [NSEvent addLocalMonitorForEventsMatchingMask:NSKeyUpMask handler:^NSEvent*(NSEvent *event) {
//            NSLog(@"keyUp %@", event);
//            return event;
//        }];
//
//        // Ctrl(and other modifier key) up/down
//        [NSEvent addLocalMonitorForEventsMatchingMask:NSFlagsChangedMask handler:^NSEvent*(NSEvent *event) {
//            NSLog(@"FlagsChanged %@", event);
//            return event;
//        }];
    }
    return self;
}

- (void)dealloc
{
}

@end
