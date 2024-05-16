#include "construction.hh"


DetectorConstruction::DetectorConstruction(){

}

DetectorConstruction::~DetectorConstruction(){

}

G4VPhysicalVolume *DetectorConstruction::Construct(){


    G4NistManager* NistManager = G4NistManager::Instance();

    // Defining the checkOverlaps
    G4bool checkOverlaps = true;





    // Defining the world volume
    G4Material* air = NistManager->FindOrBuildMaterial("G4_AIR");
    G4Box* solidWorld = new G4Box("sWorld", 10*m, 10*m, 10*m);
    G4LogicalVolume* logicWorld = new G4LogicalVolume(solidWorld, air, "lWorld");
    G4VPhysicalVolume* physWorld = new G4PVPlacement(0, G4ThreeVector(0,0,0), logicWorld, "pWorld", 0, false, 0,checkOverlaps);

    return physWorld;
}