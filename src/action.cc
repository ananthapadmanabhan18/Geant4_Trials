#include "action.hh"

ActionInitialization::ActionInitialization(){
    
}

ActionInitialization::~ActionInitialization(){
    
}

void ActionInitialization::Build() const{
    PrimaryGenerator* primaryGenerator = new PrimaryGenerator();
    SetUserAction(primaryGenerator);
    // SetUserAction(new EventAction());
    // SetUserAction(new SteppingAction());
}