#!/usr/bin/env python
###
### Scrambled from https://github.com/xrootd/xrootd-python/tree/master/examples
###

from XRootD import client
from XRootD.client.flags import DirListFlags

def xrootD_GetROOTfiles( path, xrdstr = "root://cms-xrd-global.cern.ch/" ):

    v = True
    fn = xrdstr + path
    if v : print "Using xrootD_GetROOTfiles to open files located here: {}".format( fn )  
    from XRootD.client.flags import OpenFlags
    print path

    myclient = client.FileSystem(xrdstr)
    print myclient
    istatus, ilisting = myclient.dirlist(path, DirListFlags.STAT)
    print istatus
    rootfiles = []
    toks = path.split("/")
    print toks
   
    outfile = toks[-1] + '.root'
    print outfile
    print ilisting

    for ientry in ilisting:
        jstatus, jlisting = myclient.dirlist(path + '/' + ientry.name, DirListFlags.STAT)
        for jentry in jlisting:
            kstatus, klisting = myclient.dirlist(path + '/' + ientry.name + '/' + jentry.name, DirListFlags.STAT)
            for kentry in klisting :
                s = xrdstr + path + '/' + ientry.name + '/' + jentry.name + '/' + kentry.name
                if '.root' in s:
                    rootfiles.append(s)

    return rootfiles
