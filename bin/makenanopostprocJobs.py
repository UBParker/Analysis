import sys
import os
import subprocess
import readline
import string
import nano_files_2017
import Files_2016
import Files_2017
import Files_2018
import Files_2017_A
from GFAL_GetROOTfiles import *
from xrootD_GetROOTfiles import *

import argparse
# set up an argument parser                                                                                                                                                                         
parser = argparse.ArgumentParser()

parser.add_argument('--v', dest='VERBOSE', default=True)
parser.add_argument('--l', dest = 'LOCATION', default= '/afs/cern.ch/user/a/asparker/public/LFVTopCode_MyFork/nanoAODtools_crab_mc/TopLFV/')
parser.add_argument('--n', dest = 'NAMETAG', default= '2017_DYM50' ) # if NAMETAG == 'none' then make jobs for all files, otherwise specify a nametag e.g. '2017_DYM10to50'

ARGS = parser.parse_args()

verbose = ARGS.VERBOSE
loc = ARGS.LOCATION
name = ARGS.NAMETAG


SAMPLES = {}
#SAMPLES ['DYM10to50'] = ['address', 'data/mc','dataset','year', 'run', 'cross section','lumi','Neventsraw']
mc_2016 = False
data_2016 = False
mc_2017 = False
data_2017 = False
mc_2018 = False
data_2018 = False

SAMPLES.update(nano_files_2017.mc2017_samples)
SAMPLES.update(nano_files_2017.data2017_samples)

if mc_2016:
    SAMPLES.update(Files_2016.mc2016_samples)
if data_2016:
    SAMPLES.update(Files_2016.data2016_samples)
if mc_2017:
    SAMPLES.update(nano_files_2017.mc2017_samples)
if data_2017:
    SAMPLES.update(nano_files_2017.data2017_samples)
if mc_2018:
    SAMPLES.update(Files_2018.mc2018_samples)
if data_2018:
    SAMPLES.update(Files_2018.data2018_samples)

rootlib1 = subprocess.check_output("root-config --cflags", shell=True)
rootlib11="".join([s for s in rootlib1.strip().splitlines(True) if s.strip()])
rootlib2 = subprocess.check_output("root-config --glibs", shell=True)
rootlib22="".join([s for s in rootlib2.strip().splitlines(True) if s.strip()])

dire = loc+'bin/'
dire_h = loc+'hists/'
nf =40
print SAMPLES.items()

for key, value in SAMPLES.items():
    print key
    print "^ Key"
    print value
    print "^ Value"
#########################################
    if name != 'none' :
        if name  not in key:
            continue
    nf = 100
    print value[0]
    print "^ value[0]"

    for idx, S in enumerate(value[0]):
        print idx
        print "idx"
        print S
        print "S"
        #if 'CRAB_UserFiles' not in S:
        files = GFAL_GetROOTfiles( S , "srm://ingrid-se02.cism.ucl.ac.be:8444/srm/managerv2?SFN=/storage/data/cms")
        #else :
        #    filelist = xrootD_GetROOTfiles( S )
        #@for files in filelist:
        #    #print subdirs
        #    #print "subdirs"
        #    print files
        #    print "files"
        if value[1]=='data': 
            nf = 255
        sequance = [files[i:i+nf] for i in range(0,len(files),nf)]
        print value[0]

        print sequance
        print "^ sequance"


        for num,  seq in enumerate(sequance):
            text = ''

            for filename in seq:
                text +=  filename + ' '
            print text

            SHNAME = key +'_' + str(idx) +'_' + str(num) +'.sh'
            SHFILE = "#!/bin/bash\n" +\
            "cd "+ dire + "\n"+\
            "python ../../NanoAODTools/scripts/nano_postproc_MyAnalysis.py outDir "+ text + " -c Jet_pt>20 && (  nElectron >= 1     ||    nMuon >= 1  )"+ "\n"
            open('Jobs/'+ SHNAME, 'wt').write(SHFILE)
            print "wrote file :"
            print 'Jobs/'+SHNAME
            os.system("chmod +x "+'Jobs/'+SHNAME)
            print "chmod +x "+'Jobs/'+SHNAME

            #        break
    if verbose : 
        print key + ' jobs are made'
   
#" -c (Jet_pt>20 && abs(Jet_eta)<2.5  )&& ( (Electron_pt > 20. && nElectron >= 1  && abs(Electron_eta) < 2.5   )    ||   (Muon_pt > 20 && nMuon >= 1  &&  abs(Muon_eta) < 2.5  ) )"+ "\n"+\
 
