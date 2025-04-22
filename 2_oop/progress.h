#ifndef __Progression__
#define __Progression__

class Progression
{
public:
  Progression(double f) : first(f), cur(f){};
  virtual ~Progression();
  void printProgression(int n);
protected:
  virtual long firstValue();
  virtual long nextValue();
protected:
  long first;
  long cur;
};


#endif
