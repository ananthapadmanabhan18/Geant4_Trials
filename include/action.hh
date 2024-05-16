#ifndef ACTION_HH
#define ACTION_HH

#include "G4VUserActionInitialization.hh"
#include "G4RunManager.hh"
#include "G4UserRunAction.hh"
#include "G4UserEventAction.hh"
#include "G4UserSteppingAction.hh"
#include "G4UserTrackingAction.hh"
#include "generator.hh"


class ActionInitialization : public G4VUserActionInitialization{
    
    public:
        ActionInitialization();
        ~ActionInitialization();

        virtual void Build() const;
        // virtual void BuildForMaster() const;

};






#endif