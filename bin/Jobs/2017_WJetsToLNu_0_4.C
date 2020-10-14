#include "MyAnalysis.h"
main(){
    TChain* ch    = new TChain("IIHEAnalysis") ;
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/WJetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8/crab_WJetsToLNu/191201_132144/0000/u");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/WJetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8/crab_WJetsToLNu/191201_132144/0000/t");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/WJetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8/crab_WJetsToLNu/191201_132144/0000/f");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/WJetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8/crab_WJetsToLNu/191201_132144/0000/i");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/WJetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8/crab_WJetsToLNu/191201_132144/0000/l");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/WJetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8/crab_WJetsToLNu/191201_132144/0000/e");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/WJetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8/crab_WJetsToLNu/191201_132144/0000/_");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/WJetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8/crab_WJetsToLNu/191201_132144/0000/1");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/WJetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8/crab_WJetsToLNu/191201_132144/0000/0");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/WJetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8/crab_WJetsToLNu/191201_132144/0000/0");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/WJetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8/crab_WJetsToLNu/191201_132144/0000/.");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/WJetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8/crab_WJetsToLNu/191201_132144/0000/r");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/WJetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8/crab_WJetsToLNu/191201_132144/0000/o");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/WJetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8/crab_WJetsToLNu/191201_132144/0000/o");
    ch ->Add("/pnfs/iihe/cms/store/user/schenara/MC_RunII_2017/WJetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8/crab_WJetsToLNu/191201_132144/0000/t");
    MyAnalysis t1(ch);
    t1.Loop("/afs/cern.ch/user/a/asparker/public/LFVTopCode_MyFork/Trilepton_Selection/TopLFV/hists/2017/2017_WJetsToLNu_0_4.root", "mc" , "" , "2017" , "" , 61526.7 , 41.53 , 33043732);
}