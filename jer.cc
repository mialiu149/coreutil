#include "jer.h"

//####################################################################################
CoreUtil::jer::jer()
{
}

//####################################################################################
CoreUtil::jer::~jer()
{
}

//####################################################################################
void CoreUtil::jer::setJERFor(int year=2016)
{
    // Jet Resolution ... :sad: (Taken from Nick's FTAnalysis code)
    if (year == 2016)
    {
        res.loadResolutionFile("CORE/Tools/JetResolution/data/Summer16_25nsV1_MC_PtResolution_AK4PFchs.txt");
        res.loadScaleFactorFile("CORE/Tools/JetResolution/data/Summer16_25nsV1_MC_SF_AK4PFchs.txt");
    } else if (year == 2017)
    {
        res.loadResolutionFile("CORE/Tools/JetResolution/data/Fall17_25nsV1_MC_PtResolution_AK4PFchs.txt");
        res.loadScaleFactorFile("CORE/Tools/JetResolution/data/Fall17_25nsV1_MC_SF_AK4PFchs.txt");
    } else if (year == 2018)
    {
        res.loadResolutionFile("CORE/Tools/JetResolution/data/Fall17_25nsV1_MC_PtResolution_AK4PFchs.txt");
        res.loadScaleFactorFile("CORE/Tools/JetResolution/data/Fall17_25nsV1_MC_SF_AK4PFchs.txt");
    }
    else
    {
        std::cout << "ERROR: CoreUtil::jer year not recognized! year = " << year << std::endl;
        abort();
    }

}
