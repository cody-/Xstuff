//
//  state.h
//  Xstuff
//
//  Created by cody on 1/29/14.
//  Copyright (c) 2014 cody. All rights reserved.
//

#ifndef __Xstuff__RecentFilesNavigator__State__
#define __Xstuff__RecentFilesNavigator__State__

#include <memory>

class StateOwner;

///
class State
{
public:
    State(StateOwner& owner);
    virtual ~State() = default;

    virtual void ModKeyDown();
    virtual void ModKeyUp();
    virtual void SwitchKeyDown();
    virtual void SwitchKeyUp();

    virtual void SetUp();

protected:
    template <class NewState>
    void SwitchState() { SwitchState(std::unique_ptr<State>(new NewState(owner_))); }

    void SwitchState(std::unique_ptr<State> state);

    StateOwner& owner_;
};

#endif
