#include "generator.hh"

PrimaryGenerator::PrimaryGenerator(){
    fParticleGun = new G4ParticleGun(1);
    G4ParticleTable* particleTable = G4ParticleTable::GetParticleTable();
    G4ParticleDefinition* particle = particleTable->FindParticle("proton");
    fParticleGun->SetParticleDefinition(particle);
    fParticleGun->SetParticleMomentumDirection(G4ThreeVector(0.,0.,1.));
    fParticleGun->SetParticleEnergy(1.*GeV);
    fParticleGun->SetParticlePosition(G4ThreeVector(0.,0.,-1.*m));
}

PrimaryGenerator::~PrimaryGenerator(){
    delete fParticleGun;
}

void PrimaryGenerator::GeneratePrimaries(G4Event* anEvent){
    fParticleGun->GeneratePrimaryVertex(anEvent);
}