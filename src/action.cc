#include "action.hh"

ActionInitialization::ActionInitialization(){
    
}

ActionInitialization::~ActionInitialization(){
    
}


void ActionInitialization::BuildForMaster() const{
    RunAction* runAction = new RunAction();
    SetUserAction(runAction);
}



void ActionInitialization::Build() const{
    PrimaryGenerator* primaryGenerator = new PrimaryGenerator();
    SetUserAction(primaryGenerator);

    RunAction* runAction = new RunAction();
    SetUserAction(runAction);

    // SetUserAction(new EventAction());
    // SetUserAction(new SteppingAction());
}