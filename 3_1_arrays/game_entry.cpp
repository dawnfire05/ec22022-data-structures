#include "game_entry.h"

#include <string>

using namespace std;

GameEntry::GameEntry(const string& n, int s) : name(n), score(s){}
string GameEntry::getName()
{
  return name;
}
int GameEntry::getScore()
{
  return score;
}
