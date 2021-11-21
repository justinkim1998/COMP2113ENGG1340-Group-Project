#ifndef PREGAME_H
#define PREGAME_H

struct Data{
  int HP;       //HP for life
  int MP;       //MP for skills 
  int ATK;      //ATK for attack
  int DEF;      //DEF for defense
  int AVD;      //AVD for avoid rate
  int CRT;      //CRT for critical damage 
  int DMG;      //DMG for damage
};  

void write_file(Data s);
void read_file(Data &s);

#endif
