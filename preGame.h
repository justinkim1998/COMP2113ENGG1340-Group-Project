#ifndef PREGAME_H
#define PREGAME_H

struct Status{
  int playerHP;
  int playerMP;
  int playerATK;
  int playerDEF;
  int playerAVD;
  int playerCRT;
};

struct StatusM{
  int monsterHP;
  int monsterMP;
  int monsterATK;
  int monsterDEF;
  int monsterAVD;
  int monsterCRT;
};

void write_file(Status s);
void read_file(Status &s);

#endif
