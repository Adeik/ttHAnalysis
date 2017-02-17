# Source me.

if [ "$1" == "anal" ]; then
    #------------------------------------ Setting up environment
    root6
    source /opt/PoD/PoD_env.sh
    source /opt/PAF/PAF_setup.sh
    resetpaf

    #------------------------------------ Initiating analysis
    if [ "$2" == "test" ]; then
        root -l -b -q 'RunTTHAnalysis.C("TestHeppy", 1, 0)'
    else
        root -l -b -q 'RunTTHAnalysis.C("TTbar_Powheg_ext"                  , 30, 0)'
        root -l -b -q 'RunTTHAnalysis.C("TTbar_Powheg_ext"                  , 30, 1)' #Semileptonixselection
        root -l -b -q 'RunTTHAnalysis.C("ZZ"                                , 5, 0)'
        root -l -b -q 'RunTTHAnalysis.C("WW"                                , 5, 0)'
        root -l -b -q 'RunTTHAnalysis.C("WZ"                                , 5, 0)'
        root -l -b -q 'RunTTHAnalysis.C("TW"                                , 5, 0)'
        root -l -b -q 'RunTTHAnalysis.C("TbarW"                             , 5, 0)'
        root -l -b -q 'RunTTHAnalysis.C("DYJetsToLL_M50_aMCatNLO"           , 30, 0)'
        root -l -b -q 'RunTTHAnalysis.C("DYJetsToLL_M10to50_aMCatNLO_ext"   , 5, 0)'
        root -l -b -q 'RunTTHAnalysis.C("WJetsToLNu_aMCatNLO", 5, 0)'

        root -l -b -q 'RunTTHAnalysis.C("TTWToLNu"	                        , 5, 0)'
        root -l -b -q 'RunTTHAnalysis.C("TTZToQQ"	                        , 5, 0)'
        root -l -b -q 'RunTTHAnalysis.C("TTGJets"	                        , 5, 0)'
        root -l -b -q 'RunTTHAnalysis.C("TTWToQQ"	                        , 5, 0)'
        root -l -b -q 'RunTTHAnalysis.C("TTZToLLNuNu"                       , 5, 0)'

        root -l -b -q 'RunTTHAnalysis.C("MuonEG"                            , 5, 0)'
        root -l -b -q 'RunTTHAnalysis.C("DoubleMuon"                        , 5, 0)'
        root -l -b -q 'RunTTHAnalysis.C("DoubleEG"                          , 5, 0)'
        root -l -b -q 'RunTTHAnalysis.C("SingleElectron"                    , 5, 0)'
        root -l -b -q 'RunTTHAnalysis.C("SingleMuon"                        , 5, 0)'

        root -l -b -q 'RunTTHAnalysis.C("TTbar_Powheg_scaleDown"            , 15, 0)'
        root -l -b -q 'RunTTHAnalysis.C("TTbar_Powheg_scaleUp"              , 15, 0)'
        root -l -b -q 'RunTTHAnalysis.C("TTbar_Powheg_mtop1665"             , 15, 0)'
        root -l -b -q 'RunTTHAnalysis.C("TTbar_Powheg_mtop1695"             , 15, 0)'
        root -l -b -q 'RunTTHAnalysis.C("TTbar_Powheg_mtop1715"             , 15, 0)'
        root -l -b -q 'RunTTHAnalysis.C("TTbar_Powheg_mtop1735"             , 15, 0)'
        root -l -b -q 'RunTTHAnalysis.C("TTbar_Powheg_mtop1755"             , 15, 0)'
        root -l -b -q 'RunTTHAnalysis.C("TTbar_Powheg_mtop1785"             , 15, 0)'
        root -l -b -q 'RunTTHAnalysis.C("TTJets_aMCatNLO"	                , 15, 0)'
        root -l -b -q 'RunTTHAnalysis.C("TTbar_Powheg_Herwig"               , 15, 0)'
    fi
elif [ "$1" == "plot" ]; then
    echo "Ya lo haré"

elif [ "$1" == "deepAnal" ]; then
    echo "Ya lo haré"

elif [ "$1" == "datacards" ]; then
    echo "Ya lo haré"
else
    echo "WTF? No se que hacer y es tu culpa.\n"
    echo "GilipollasGang"
fi

exit 0
