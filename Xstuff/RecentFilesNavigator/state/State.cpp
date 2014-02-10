//
//  state.cpp
//  Xstuff
//
//  Created by cody on 1/29/14.
//  Copyright (c) 2014 cody. All rights reserved.
//

#include "state.h"
#include "./StateOwner.h"

using namespace std;

///
State::State(StateOwner& owner)
    : owner_(owner)
{
}

///
void State::ModKeyDown()
{
}

///
void State::ModKeyUp()
{
}

///
void State::SwitchKeyDown()
{
}

///
void State::SwitchKeyUp()
{
}

///
void State::SetUp()
{
}

///
void State::SwitchState(unique_ptr<State> state)
{
    owner_.SetState(move(state));
}
