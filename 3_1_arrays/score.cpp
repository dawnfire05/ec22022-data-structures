#include "score.h"

Score::Score(int maxEnt){
  maxEntries = maxEnt;
  entries = new GameEntry[maxEntries];
  numEntries = 0;
}
Score::~Score(){
  delete[] entries;
}
void Score::add(const GameEntry& entry){
  
}
GameEntry Score::remove(int n){
  
}
