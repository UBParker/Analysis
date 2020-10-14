#include "MyAnalysis.h"
main(){
    TChain* ch    = new TChain("IIHEAnalysis") ;
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/ZZTo4L_13TeV_powheg_pythia8/crab_ZZTo4L/191201_124808/0000/9");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/ZZTo4L_13TeV_powheg_pythia8/crab_ZZTo4L/191201_124808/0000/1");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/ZZTo4L_13TeV_powheg_pythia8/crab_ZZTo4L/191201_124808/0000/2");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/ZZTo4L_13TeV_powheg_pythia8/crab_ZZTo4L/191201_124808/0000/0");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/ZZTo4L_13TeV_powheg_pythia8/crab_ZZTo4L/191201_124808/0000/1");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/ZZTo4L_13TeV_powheg_pythia8/crab_ZZTo4L/191201_124808/0000/_");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/ZZTo4L_13TeV_powheg_pythia8/crab_ZZTo4L/191201_124808/0000/1");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/ZZTo4L_13TeV_powheg_pythia8/crab_ZZTo4L/191201_124808/0000/2");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/ZZTo4L_13TeV_powheg_pythia8/crab_ZZTo4L/191201_124808/0000/4");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/ZZTo4L_13TeV_powheg_pythia8/crab_ZZTo4L/191201_124808/0000/8");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/ZZTo4L_13TeV_powheg_pythia8/crab_ZZTo4L/191201_124808/0000/0");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/ZZTo4L_13TeV_powheg_pythia8/crab_ZZTo4L/191201_124808/0000/8");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/ZZTo4L_13TeV_powheg_pythia8/crab_ZZTo4L/191201_124808/0000//");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/ZZTo4L_13TeV_powheg_pythia8/crab_ZZTo4L/191201_124808/0000/0");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/ZZTo4L_13TeV_powheg_pythia8/crab_ZZTo4L/191201_124808/0000/0");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/ZZTo4L_13TeV_powheg_pythia8/crab_ZZTo4L/191201_124808/0000/0");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/ZZTo4L_13TeV_powheg_pythia8/crab_ZZTo4L/191201_124808/0000/0");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/ZZTo4L_13TeV_powheg_pythia8/crab_ZZTo4L/191201_124808/0000//");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/ZZTo4L_13TeV_powheg_pythia8/crab_ZZTo4L/191201_124808/0000/o");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/ZZTo4L_13TeV_powheg_pythia8/crab_ZZTo4L/191201_124808/0000/u");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/ZZTo4L_13TeV_powheg_pythia8/crab_ZZTo4L/191201_124808/0000/t");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/ZZTo4L_13TeV_powheg_pythia8/crab_ZZTo4L/191201_124808/0000/f");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/ZZTo4L_13TeV_powheg_pythia8/crab_ZZTo4L/191201_124808/0000/i");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/ZZTo4L_13TeV_powheg_pythia8/crab_ZZTo4L/191201_124808/0000/l");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/ZZTo4L_13TeV_powheg_pythia8/crab_ZZTo4L/191201_124808/0000/e");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/ZZTo4L_13TeV_powheg_pythia8/crab_ZZTo4L/191201_124808/0000/_");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/ZZTo4L_13TeV_powheg_pythia8/crab_ZZTo4L/191201_124808/0000/1");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/ZZTo4L_13TeV_powheg_pythia8/crab_ZZTo4L/191201_124808/0000/0");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/ZZTo4L_13TeV_powheg_pythia8/crab_ZZTo4L/191201_124808/0000/.");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/ZZTo4L_13TeV_powheg_pythia8/crab_ZZTo4L/191201_124808/0000/r");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/ZZTo4L_13TeV_powheg_pythia8/crab_ZZTo4L/191201_124808/0000/o");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/ZZTo4L_13TeV_powheg_pythia8/crab_ZZTo4L/191201_124808/0000/o");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/ZZTo4L_13TeV_powheg_pythia8/crab_ZZTo4L/191201_124808/0000/t");
    MyAnalysis t1(ch);
    t1.Loop("/afs/cern.ch/user/a/asparker/public/LFVTopCode_MyFork/Trilepton_Selection/TopLFV/hists/2017/2017_ZZTo4L_0_3.root", "mc" , "" , "2017" , "" , 1.212 , 41.53 , 6893887);
}