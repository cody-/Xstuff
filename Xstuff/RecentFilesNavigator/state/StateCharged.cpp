//
//  StateCharged.cpp
//  Xstuff
//
//  Created by cody on 1/30/14.
//  Copyright (c) 2014 cody. All rights reserved.
//

#include "./StateCharged.h"
#include "./StateIdle.h"
#include "./StateActive.h"

///
void StateCharged::ModKeyUp() {
    SwitchState<StateIdle>();
}

///
void StateCharged::SwitchKeyDown() {
    SwitchState<StateActive>();
}
