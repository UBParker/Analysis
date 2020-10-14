#include "MyAnalysis.h"
main(){
    TChain* ch    = new TChain("IIHEAnalysis") ;
    ch ->Add("/pnfs/iihe/cms/store/user/rgoldouz/TopLfvFullSim/2017/IIHE_Ntuple/ntuple_SMEFTfr_TT_vector_emutu/_");
    ch ->Add("/pnfs/iihe/cms/store/user/rgoldouz/TopLfvFullSim/2017/IIHE_Ntuple/ntuple_SMEFTfr_TT_vector_emutu/e");
    ch ->Add("/pnfs/iihe/cms/store/user/rgoldouz/TopLfvFullSim/2017/IIHE_Ntuple/ntuple_SMEFTfr_TT_vector_emutu/m");
    ch ->Add("/pnfs/iihe/cms/store/user/rgoldouz/TopLfvFullSim/2017/IIHE_Ntuple/ntuple_SMEFTfr_TT_vector_emutu/u");
    ch ->Add("/pnfs/iihe/cms/store/user/rgoldouz/TopLfvFullSim/2017/IIHE_Ntuple/ntuple_SMEFTfr_TT_vector_emutu/t");
    ch ->Add("/pnfs/iihe/cms/store/user/rgoldouz/TopLfvFullSim/2017/IIHE_Ntuple/ntuple_SMEFTfr_TT_vector_emutu/u");
    ch ->Add("/pnfs/iihe/cms/store/user/rgoldouz/TopLfvFullSim/2017/IIHE_Ntuple/ntuple_SMEFTfr_TT_vector_emutu//");
    ch ->Add("/pnfs/iihe/cms/store/user/rgoldouz/TopLfvFullSim/2017/IIHE_Ntuple/ntuple_SMEFTfr_TT_vector_emutu/o");
    ch ->Add("/pnfs/iihe/cms/store/user/rgoldouz/TopLfvFullSim/2017/IIHE_Ntuple/ntuple_SMEFTfr_TT_vector_emutu/u");
    ch ->Add("/pnfs/iihe/cms/store/user/rgoldouz/TopLfvFullSim/2017/IIHE_Ntuple/ntuple_SMEFTfr_TT_vector_emutu/t");
    ch ->Add("/pnfs/iihe/cms/store/user/rgoldouz/TopLfvFullSim/2017/IIHE_Ntuple/ntuple_SMEFTfr_TT_vector_emutu/f");
    ch ->Add("/pnfs/iihe/cms/store/user/rgoldouz/TopLfvFullSim/2017/IIHE_Ntuple/ntuple_SMEFTfr_TT_vector_emutu/i");
    ch ->Add("/pnfs/iihe/cms/store/user/rgoldouz/TopLfvFullSim/2017/IIHE_Ntuple/ntuple_SMEFTfr_TT_vector_emutu/l");
    ch ->Add("/pnfs/iihe/cms/store/user/rgoldouz/TopLfvFullSim/2017/IIHE_Ntuple/ntuple_SMEFTfr_TT_vector_emutu/e");
    ch ->Add("/pnfs/iihe/cms/store/user/rgoldouz/TopLfvFullSim/2017/IIHE_Ntuple/ntuple_SMEFTfr_TT_vector_emutu/_");
    ch ->Add("/pnfs/iihe/cms/store/user/rgoldouz/TopLfvFullSim/2017/IIHE_Ntuple/ntuple_SMEFTfr_TT_vector_emutu/1");
    ch ->Add("/pnfs/iihe/cms/store/user/rgoldouz/TopLfvFullSim/2017/IIHE_Ntuple/ntuple_SMEFTfr_TT_vector_emutu/5");
    ch ->Add("/pnfs/iihe/cms/store/user/rgoldouz/TopLfvFullSim/2017/IIHE_Ntuple/ntuple_SMEFTfr_TT_vector_emutu/7");
    ch ->Add("/pnfs/iihe/cms/store/user/rgoldouz/TopLfvFullSim/2017/IIHE_Ntuple/ntuple_SMEFTfr_TT_vector_emutu/7");
    ch ->Add("/pnfs/iihe/cms/store/user/rgoldouz/TopLfvFullSim/2017/IIHE_Ntuple/ntuple_SMEFTfr_TT_vector_emutu/.");
    ch ->Add("/pnfs/iihe/cms/store/user/rgoldouz/TopLfvFullSim/2017/IIHE_Ntuple/ntuple_SMEFTfr_TT_vector_emutu/r");
    ch ->Add("/pnfs/iihe/cms/store/user/rgoldouz/TopLfvFullSim/2017/IIHE_Ntuple/ntuple_SMEFTfr_TT_vector_emutu/o");
    ch ->Add("/pnfs/iihe/cms/store/user/rgoldouz/TopLfvFullSim/2017/IIHE_Ntuple/ntuple_SMEFTfr_TT_vector_emutu/o");
    ch ->Add("/pnfs/iihe/cms/store/user/rgoldouz/TopLfvFullSim/2017/IIHE_Ntuple/ntuple_SMEFTfr_TT_vector_emutu/t");
    MyAnalysis t1(ch);
    t1.Loop("/afs/cern.ch/user/a/asparker/public/LFVTopCode_MyFork/Trilepton_Selection/TopLFV/hists/2017/2017_LFVTtVecU_0_3.root", "mc" , "" , "2017" , "" , 0.032 , 41.53 , 498000);
}