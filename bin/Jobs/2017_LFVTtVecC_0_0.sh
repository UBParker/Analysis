#!/bin/bash
cd /afs/cern.ch/user/a/asparker/public/LFVTopCode_MyFork/Trilepton_Selection/TopLFV/bin
g++ -fPIC -fno-var-tracking -Wno-deprecated -D_GNU_SOURCE -O2  -I./../include   -pthread -std=c++11 -m64 -I/usr/include/root -ldl  -o 2017_LFVTtVecC_0_0 Jobs/2017_LFVTtVecC_0_0.C ../lib/main.so -L/usr/lib64/root -lGui -lCore -lImt -lRIO -lNet -lHist -lGraf -lGraf3d -lGpad -lROOTVecOps -lTree -lTreePlayer -lRint -lPostscript -lMatrix -lPhysics -lMathCore -lThread -lMultiProc -lROOTDataFrame -pthread -lm -ldl -rdynamic  -lMinuit -lTreePlayer
./2017_LFVTtVecC_0_0
FILE=/afs/cern.ch/user/a/asparker/public/LFVTopCode_MyFork/Trilepton_Selection/TopLFV/hists/2017/2017_LFVTtVecC_0_0.root
if [ -f "$FILE" ]; then
    rm  2017_LFVTtVecC_0_0
fi