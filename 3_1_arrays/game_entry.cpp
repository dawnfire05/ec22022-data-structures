#include "game_entry.h"

#include <string>

using namespace std;

GameEntry::GameEntry(const string& n, int s) : name(n), score(s){}
string GameEntry::getName() const
{
  return name;
}
int GameEntry::getScore() const
{
  return score;
}
