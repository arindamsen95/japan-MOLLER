#pragma once

// System headers
#include <vector>

// Qweak headers
#include "VQwDataElement.h"
#include "QwSIS3320_Accumulator.h"

class QwSIS3320_LogicalAccumulator: public QwSIS3320_Accumulator {
public:

  QwSIS3320_LogicalAccumulator(TString name = "")
  : QwSIS3320_Accumulator(name)
  { };
  virtual ~QwSIS3320_LogicalAccumulator() { };

  void AddAccumulatorReference( QwSIS3320_Accumulator *accum, Double_t weight);

  void  ProcessEvent();
  Int_t ProcessEvBuffer(UInt_t* buffer, UInt_t num_words_left, UInt_t subelement = 0) { return 0; };

private:

  std::vector<QwSIS3320_Accumulator*> fAccumulators;
  std::vector<Double_t> fAccumulatorWeights;
};

