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
  int value = entry.getScore(); 
  string name = entry.getName();
  int nameCount = 0;
  for(int i = 0; i<maxEntries-1; i++){
    if(name == entries[i].getName()){
      nameCount++;
    }
  }
  if(nameCount > maxEntries/2)
    return;
  if(numEntries == maxEntries){
    if(value <= entries[maxEntries-1].getScore()){
      return;
    }
  }
  numEntries++;
  
  int i = numEntries-2;
  while(i>=0 && value > entries[i].getScore()){
    entries[i+1] = entries[i];
    i--;
  }
  entries[i+1] = entry;
}
GameEntry Score::remove(int n){
  int i = n;
  numEntries--;
  GameEntry deletedEntry = entries[n];
  while(i<=numEntries-1){
    entries[i] = entries[i+1];
    i++;
  }
  return deletedEntry;
}
