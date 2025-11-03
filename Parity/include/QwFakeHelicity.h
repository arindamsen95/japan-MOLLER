#pragma once

#include "QwHelicity.h"

class QwFakeHelicity: public QwHelicityBase {
 public:
  QwFakeHelicity(TString region_tmp):VQwSubsystem(region_tmp),QwHelicityBase(region_tmp),fMinPatternPhase(1)

    {
      // using the constructor of the base class
    };

    virtual ~QwFakeHelicity() { };

    void    ClearEventData();
    Bool_t  IsGoodHelicity();
    void    ProcessEvent();

    Bool_t CheckForBurpFail(const VQwSubsystem *subsys){
      return kFALSE;
    };

 protected:
    Int_t fMinPatternPhase;

    Bool_t CollectRandBits();
    UInt_t GetRandbit(UInt_t& ranseed);

};

