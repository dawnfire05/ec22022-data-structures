#ifndef __Score__
#define __Score__

#include <string>
#include "game_entry.h"

using namespace std;

class Score
{
public:
  Score(int maxEnt = 10);
  ~Score();
  void add(const GameEntry& entry);
  GameEntry remove(int n);
private:
  GameEntry* entries;
  int maxEntries;
  int numEntries;
};

#endif
