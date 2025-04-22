#include "fibonacci.h"

FibonacciProgression::FibonacciProgression(long f, long s) : Progression(f), second(s), prev(second-first){}
long FibonacciProgression::firstValue()
{
  cur = first;
  prev = second - first;
  return cur;
}
long FibonacciProgression::nextValue()
{
  long temp = prev;
  prev = cur;
  cur += temp;
  return cur;
}
