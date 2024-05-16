#include "run.hh"

RunAction::RunAction(){}
RunAction::~RunAction(){}

void RunAction::BeginOfRunAction(const G4Run*){
    std::cout << "Run started!" << std::endl;

    G4AnalysisManager* man = G4AnalysisManager::Instance();
    man->OpenFile("output.root");
    man->CreateNtuple("Hits", "Hits");
    man->CreateNtupleDColumn("X");
    man->CreateNtupleDColumn("Y");
    man->CreateNtupleDColumn("Z");
    man->FinishNtuple(0);

}

void RunAction::EndOfRunAction(const G4Run*){

    G4AnalysisManager*man = G4AnalysisManager::Instance();
    man->Write();
    man->CloseFile();
    std::cout << "Run ended!" << std::endl;
}