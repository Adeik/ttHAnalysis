#include "SusyLeptonSF.h"
#include "TFile.h"

#include <iostream>

SusyLeptonSF::SusyLeptonSF(bool loadhistos):
  fTightMuonIDSF(0),
  fTrackerMuonSF(0),
  fTightMuonIsoSF(0),
  fTightMuonSF(0),
  fTightElectronIDSF(0),
  fTightElectronSF(0),
  fTrackerElectronSF(0),
  fFastSimElectronSF(0),
  fFastSimMuonSF(0),
  fDoubleMuSF(0),
  fDoubleElSF(0),  
  fMuEGSF(0) {

  if (loadhistos) {
    // Load Lepton SFs
    LoadTightMuonIDSF();
		LoadTrackerMuonSF();
    LoadTightMuonIsoSF();
    LoadTightMuonSF();
    LoadTightElectronIDSF();
    LoadTightElectronSF();
    LoadFastSimMuonSF();
		LoadFastSimElectronSF();
    LoadTrackerElectronSF();

    // Load Trigger SFs
    LoadDoubleElectronSF();
    LoadDoubleMuonSF();
    LoadElMuSF();
  }
}
/*
// Muon
TH2D* SusyLeptonSF::LoadTightMuonIDSF(const char* file, const char* histo)     { return GetHistogramFromFileD(file, histo, "fTightMuonIDSF");}
TH2D* SusyLeptonSF::LoadFastSimMuonSF(const char* file, const char* histo)     { return GetHistogramFromFileD(file, histo, "fFastSimMuonSF");}
TH2D* SusyLeptonSF::LoadTightMuonIsoSF(const char* file, const char* histo)    { return GetHistogramFromFileD(file, histo, "fTightMuonISOSF");}
TH2D* SusyLeptonSF::LoadTightMuonSF(const char* file, const char* histo)       { return GetHistogramFromFileD(file, histo, "fTightMuonSF");}
TGraphAsymmErrors* SusyLeptonSF::LoadTrackerMuonSF(const char* file, const char* histo){
 TFile *f = TFile::Open(file); f->GetObject(histo, fTrackerMuonSF);
 return fTrackerMuonSF;
}

// Electron
TH2D* SusyLeptonSF::LoadTrackerElectronSF(const char* file, const char* histo) { return GetHistogramFromFileD(file, histo, "fTrackerElectronSF");}
TH2D* SusyLeptonSF::LoadFastSimElectronSF(const char* file, const char* histo) { return GetHistogramFromFileD(file, histo, "fFastSimElectronSF");}
TH2D* SusyLeptonSF::LoadTightElectronIDSF(const char* file, const char* histo) { return GetHistogramFromFileD(file, histo, "fTightElectronIDSF");}
TH2D* SusyLeptonSF::LoadTightElectronSF(const char* file, const char* histo) { return GetHistogramFromFileD(file, histo, "fTightElectronSF");}

// Trigger
TH2F* SusyLeptonSF::LoadDoubleMuonSF(const char* file, const char* histo)    { return GetHistogramFromFileF(file, histo, "fDoubleMuSF");}
TH2F* SusyLeptonSF::LoadDoubleElectronSF(const char* file, const char* histo){ return GetHistogramFromFileF(file, histo, "fDoubleElSF");}
TH2F* SusyLeptonSF::LoadElMuSF(const char* file, const char* histo){           return GetHistogramFromFileF(file, histo, "fMuEGSF");}
*/

TH2D* SusyLeptonSF::LoadTightMuonIDSF(const char* file, 
					 const char* histo) {
  fTightMuonIDSF = GetHistogramFromFileD(file, histo, "fTightMuonIDSF");
  return fTightMuonIDSF;
}

TH2D* SusyLeptonSF::LoadTrackerElectronSF(const char* file, const char* histo) {
  fTrackerElectronSF = GetHistogramFromFileD(file, histo, "fTrackerElectronSF");
  return fTrackerElectronSF;
}

TH2D* SusyLeptonSF::LoadFastSimElectronSF(const char* file, const char* histo) {
  fFastSimElectronSF = GetHistogramFromFileD(file, histo, "fFastSimElectronSF");
  return fFastSimElectronSF;
}

TH2D* SusyLeptonSF::LoadFastSimMuonSF(const char* file, const char* histo) {
  fFastSimMuonSF = GetHistogramFromFileD(file, histo, "fFastSimMuonSF");
  return fFastSimMuonSF;
}
TH2D* SusyLeptonSF::LoadTightMuonIsoSF(const char* file, 

				   const char* histo) {
  fTightMuonIsoSF = GetHistogramFromFileD(file, histo, "fTightMuonISOSF");
  return fTightMuonIsoSF;
}

TH2D* SusyLeptonSF::LoadTightMuonSF(const char* file, 
				const char* histo) {
  fTightMuonSF = GetHistogramFromFileD(file, histo, "fTightMuonSF");
  return fTightMuonSF;
}

TH2D* SusyLeptonSF::LoadTightElectronIDSF(const char* file, 
				      const char* histo) {
  fTightElectronIDSF = GetHistogramFromFileD(file, histo, "fTightElectronIDSF");
  return fTightElectronIDSF;
}

TGraphAsymmErrors* SusyLeptonSF::LoadTrackerMuonSF(const char* file, const char* histo){
 TFile *f = TFile::Open(file);
 f->GetObject(histo, fTrackerMuonSF);
 return fTrackerMuonSF;
}

TH2D* SusyLeptonSF::LoadTightElectronSF(const char* file, 
				    const char* histo) {
  fTightElectronSF = GetHistogramFromFileD(file, histo, "fTightElectronSF");
  return fTightElectronSF;
}


TH2F* SusyLeptonSF::LoadDoubleMuonSF(const char* file, 
				 const char* histo){
  fDoubleMuSF = GetHistogramFromFileF(file, histo, "fDoubleMuSF");
  return fDoubleMuSF;
}

TH2F* SusyLeptonSF::LoadDoubleElectronSF(const char* file, 
				     const char* histo){
  fDoubleElSF = GetHistogramFromFileF(file, histo, "fDoubleElSF");
  return fDoubleElSF;
}

TH2F* SusyLeptonSF::LoadElMuSF(const char* file, 
			   const char* histo){
  fMuEGSF = GetHistogramFromFileF(file, histo, "fMuEGSF");
  return fMuEGSF;
}


TH2D* SusyLeptonSF::GetHistogramFromFileD(const char* filename, const char* histoname, const char* newhname) {
  TFile* file  = TFile::Open(filename);
  if (!file) {
    std::cerr << "ERROR[SusyLeptonSF]: Could not load file" << std::endl
	      << "                 " << filename << std::endl;
    return 0;
  }
  TH2D* h = (TH2D*) file->Get(histoname)->Clone(newhname);
  if (!h) {
    std::cerr << "ERROR[SusyLeptonSF]: Could not find histogram " 
	      << histoname << std::endl;
    return 0;
  }
  h->SetDirectory(0);
  file->Close();
  
  return h;
}

TH2F* SusyLeptonSF::GetHistogramFromFileF(const char* filename, 
				      const char* histoname, 
				      const char* newhname) const {
  TFile* file  = TFile::Open(filename);
  if (!file) {
      std::cerr << "ERROR[SusyLeptonSF]: Could not load file" << std::endl
		<< "                 " << filename << std::endl;
      return 0;
  }
  TH2F* h = (TH2F*) file->Get(histoname)->Clone(newhname);
  if (!h) {
    std::cerr << "ERROR[SusyLeptonSF]: Could not find histogram " 
	      << histoname << std::endl;
    return 0;
    }
  h->SetDirectory(0);
  file->Close();
 
  return h;
}

TCanvas* SusyLeptonSF::Draw() {
  //gStyle->SetOptStat(0);
  //gStyle->SetPalette(1);
  //gStyle->SetPaintTextFormat("4.3f");
  // root -l -b -q makePlots.C

  TCanvas* c = new TCanvas();
  c->Print("sfAll.ps[");

  fTightElectronSF->SetTitle("Electron Id/Iso SF");
  fTightElectronSF->GetXaxis()->SetTitleSize(0.06);
  fTightElectronSF->GetYaxis()->SetTitleSize(0.06);
  fTightElectronSF->GetXaxis()->SetTitleOffset(.65);
  fTightElectronSF->GetYaxis()->SetTitleOffset(.7);
  fTightElectronSF->SetXTitle("#eta");
  fTightElectronSF->SetYTitle("p_{T} (GeV)");
  fTightElectronSF->GetYaxis()->SetRange(1, 3);
  fTightElectronSF->SetMinimum(0.5);
  //fTightElectronSF->GetYaxis()->SetRangeUser(0.,100.);
  fTightElectronSF->Draw("COLZ, TEXTE");
  c->SaveAs("sfEle.png");
  c->SaveAs("sfEle.pdf");
  c->Print("sfAll.ps");
  
  //TCanvas* c2 = new TCanvas();
  fTightMuonSF->SetTitle("Muon Id/Iso SF");
  fTightMuonSF->GetXaxis()->SetTitleSize(0.06);
  fTightMuonSF->GetYaxis()->SetTitleSize(0.06);
  fTightMuonSF->GetXaxis()->SetTitleOffset(.65);
  fTightMuonSF->GetYaxis()->SetTitleOffset(.7);
  fTightMuonSF->SetXTitle("|#eta|");
  fTightMuonSF->SetYTitle("p_{T} (GeV)");
  //fTightMuonSF->GetXaxis()->SetRange(5,8); // show only positive side
  fTightMuonSF->Draw("COLZ, TEXTE");
  c->SaveAs("sfMuo.png");
  c->SaveAs("sfMuo.pdf");
  c->Print("sfAll.ps");
  
  fMuEGSF->SetTitle("MuEG Trigger SF");
  fMuEGSF->GetXaxis()->SetNdivisions(505);
  fMuEGSF->GetYaxis()->SetNdivisions(505);
  fMuEGSF->GetXaxis()->SetTitleSize(0.06);
  fMuEGSF->GetYaxis()->SetTitleSize(0.06);
  fMuEGSF->GetXaxis()->SetTitleOffset(.65);
  fMuEGSF->GetYaxis()->SetTitleOffset(.7);
  fMuEGSF->Draw("COLZ, TEXTE");  
  c->SaveAs("sfsTrig.png");
  c->SaveAs("sfsTrig.pdf");
  c->Print("sfAll.ps");
  
  fDoubleMuSF->SetTitle("DoubleMuon Trigger SF");
  fDoubleMuSF->GetXaxis()->SetNdivisions(505);
  fDoubleMuSF->GetYaxis()->SetNdivisions(505);
  fDoubleMuSF->GetXaxis()->SetTitleSize(0.06);
  fDoubleMuSF->GetYaxis()->SetTitleSize(0.06);
  fDoubleMuSF->GetXaxis()->SetTitleOffset(.65);
  fDoubleMuSF->GetYaxis()->SetTitleOffset(.7);
  fDoubleMuSF->Draw("COLZ, TEXTE");  
  c->SaveAs("sfsTrigMu.png");
  c->SaveAs("sfsTrigMu.pdf");
  c->Print("sfAll.ps");
  
  fDoubleElSF->SetTitle("DoubleElectron Trigger SF");
  fDoubleElSF->GetXaxis()->SetNdivisions(505);
  fDoubleElSF->GetXaxis()->SetNdivisions(505);
  fDoubleElSF->GetYaxis()->SetNdivisions(505);
  fDoubleElSF->GetXaxis()->SetTitleSize(0.06);
  fDoubleElSF->GetYaxis()->SetTitleSize(0.06);
  fDoubleElSF->GetXaxis()->SetTitleOffset(.65);
  fDoubleElSF->GetYaxis()->SetTitleOffset(.7);
  fDoubleElSF->Draw("COLZ, TEXTE");  
  c->SaveAs("sfsTrigEl.png");
  c->SaveAs("sfsTrigEl.pdf");
  c->Print("sfAll.ps");
  
  c->Print("sfAll.ps]");

  return c;
}
