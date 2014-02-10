//
//  StateIdle.cpp
//  Xstuff
//
//  Created by cody on 1/29/14.
//  Copyright (c) 2014 cody. All rights reserved.
//

#include "./StateIdle.h"
#include "./StateCharged.h"

///
void StateIdle::ModKeyDown()
{
    SwitchState<StateCharged>();
}
