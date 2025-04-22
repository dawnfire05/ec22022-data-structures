#ifndef __Fibonacci__
#define __Fibonacci__

#include "progress.h"

class FibonacciProgression : public Progression {
public:
  FibonacciProgression(long f = 0, long s = 1);
protected:
  virtual long firstValue();
  virtual long nextValue();
private:
  long second;
  long prev;
};

#endif
