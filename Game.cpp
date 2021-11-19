#include <iostream>
using namespace std;

int main(){
  srand(time(0));
  int playerHP, playerMp, playerATK, playerDEF, playerAVD, playerCRT, monsterHP, monsterMP, monsterATK, monsterDEF;
  
  cout << "=======WELCOME TO THE FIGHT GAME.=======" << endl << endl;
  while (True){
    cout << "Choose a character." << endl << "1.KNIGHT 2.MAGE 3.ASSASSIN 4.SHOOTER" << endl << endl;
    cin >> character;
    switch (character){
      case 1:
        cout << "You have chosen the KNIGHT." << endl;
        playerHP=500;
        playerMP=100;
        playerATK=50;
        playerDEF=20;
        playerAVD=10;
        playerCRT=30;
        break;
        
      case 2:
        cout << "You have chosen the MAGE." << endl;
        playerHP=350;
        playerMP=200;
        playerATK=20;
        playerDEF=10;
        playerAVD=10;
        playerCRT=15;
        break;
        
      case 3:
        cout << "You have chosen the ASSASSIN." << endl;
        playerHP=;
        playerMP=;
        playerATK=;
        playerDEF=;
        playerAVD=;
        playerCRT=;
        break;
        
      case 4:
        cout << "You have chosen the ARCHER." << endl;
        playerHP;
        playerMP=;
        playerATK=;
        playerDEF=;
        playerAVD=;
        playerCRT=;
        break;
        
      default:
        cout << "Invalid choice. Please choose again." << endl;
        continue;
    }
    cout << "HP: " << playerHP << endl << "MP: " << playerMP << endl << "Attack: " << playerATK << endl << "Defense: " << playerDEF << endl << "Avoid: " << playerAVD << endl << "Critical: " << playerCRT << endl << "============================================" << endl;
    
    int monster = rand() % 3 + 1;
    switch (monster){
      case 1:
        cout << "A wild ZOMBIE has appeared!" << endl;
        monsterHP=;
        monsterMP=;
        monsterATK=;
        monsterDEF=;
        monsterAVD=;
        monsterCRT=;
        break;
        
      case 2:
        cout << "A wild XXX has appeared!" << endl;
        monsterHP=;
        monsterMP=;
        monsterATK=;
        monsterDEF=;
        monsterAVD=;
        monsterCRT=;
        break;
        
      case 3:
        cout << "A wild XXX has appeared!" << endl;
        monsterHP=;
        monsterMP=;
        monsterATK=;
        monsterDEF=;
        monsterAVD=;
        monsterCRT=;
        break;
    }
    cout << "Monster HP: " << monsterHP << endl << "Monster MP: " << monsterMP << endl << "Monster Attack: " << monsterATK << endl << "Monster Defense: " << monsterDEF << endl << "Monster Avoid: " << monsterAVD << endl << "Monster Critical: " << monsterCRT << endl << "============================================" << endl;
    
    int playerChoice;
    int playerSkillChoice;
    
    while (True){
      if (playerHP > 0 && monsterHP > 0){
        cout << "Remaining player HP: " << playerHP << endl << "Remaining player MP: " << playerMP << endl << endl;
        cout << "Remaining monster HP: " << monsterHP << endl << "Remaining monster MP: " << monsterMP << endl << endl;
        cout << "============================================" << endl;
        cout << "What action will the player take?" << endl << "1.AUTO ATTACK 2.SKILLS 3.FLEE" << endl;
        cin >> playerChoice;
        switch (playerChoice){
          case 1: 
            CRT = rand % 101 + playerCRT;
            if (CRT > 100){
              playerDMG = playerATK * 1.3 -monsterDEF;
              monsterHP -= playerDMG;
              cout << "Critical hit!!! Damage: " << playerDMG << endl;
            }
            else {
              playerDMG = playerATK - monsterDEF;
              monsterHP -= playerDMG;
              cout << "You have attacked the monster! Damage: " << playerDMG << endl;
            }
            break;
            
          case 2:
            cout << "Which skill will you use?" << endl;
            if (character == 1){
              cout << "1. ALPHA STRIKE (Damage: AAA, Mana Required: XXX) / 2. JUDGMENT (Damage: BBB, Mana Required: YYY) / 3. MEDITATE (HP +CCC, Mana Required: ZZZ)" << endl;
              cin >> playerSkillChoice;
              switch (playerSkillChoice){
                case 1:
                  if (playerMP >= XXX){
                    playerDMG = AAA - monsterDEF;
                    monsterHP -= playerDMG;
                    playerMP -= XXX;
                    cout << "Player's ALPHA STRIKE! Damage: " << playerDMG << endl;
                  }
                  else {
                    cout << "Not enough MP" << endl;
                  }
                  break;
                  
                case 2:
                  if (playerMP >= YYY){
                    playerDMG = BBB - monsterDEF;
                    monsterHP -= playerDMG;
                    playerMP -= YYY;
                    cout << "Player's JUDGMENT! Damage: " << playerDMG << endl;
                  }
                  else {
                    cout << "Not enough MP" << endl;
                  }
                  break;
                  
                case 3:
                   if (playerMP >= ZZZ){
                    playerHP += CCC;
                    playerMP -= ZZZ;
                    cout << "Player's MEDITATE! HP + " << CCC << endl;
                  }
                  else {
                    cout << "Not enough MP" << endl;
                  }
                  break;
                  
                default:
                  cout << "Invalid choice." << endl;
                  break;
              }
            }
            
            else if (character == 2){
              cout << "1. ETHEREAL CHAINS (Damage: AAA, Mana Required: XXX) / 2. DISTORTION (Damage: BBB, Mana Required: YYY) / 3. SHIELD (HP +CCC, Mana Required: ZZZ)" << endl;
              cin >> playerSkillChoice;
              switch (playerSkillChoice){
                case 1:
                  if (playerMP >= XXX){
                    playerDMG = AAA - monsterDEF;
                    monsterHP -= playerDMG;
                    playerMP -= XXX;
                    cout << "Player's ETHEREAL CHAINS! Damage: " << playerDMG << endl;
                  }
                  else {
                    cout << "Not enough MP" << endl;
                  }
                  break;
                  
                case 2:
                  if (playerMP >= YYY){
                    playerDMG = BBB - monsterDEF;
                    monsterHP -= playerDMG;
                    playerMP -= YYY;
                    cout << "Player's DISTORTION! Damage: " << playerDMG << endl;
                  }
                  else {
                    cout << "Not enough MP" << endl;
                  }
                  break;
                  
                case 3:
                   if (playerMP >= ZZZ){
                    playerHP += CCC;
                    playerMP -= ZZZ;
                    cout << "Player's SHIELD! HP + " << CCC << endl;
                  }
                  else {
                    cout << "Not enough MP" << endl;
                  }
                  break;
                  
                default:
                  cout << "Invalid choice." << endl;
                  break;
              }
            }
            
            else if (character == 3){
              cout << "1. RAZOR SHURIKEN (Damage: AAA, Mana Required: XXX) / 2. SHADOW SLASH (Damage: BBB, Mana Required: YYY) / 3. DODGE (HP +CCC, Mana Required: ZZZ)" << endl;
              cin >> playerSkillChoice;
              switch (playerSkillChoice){
                case 1:
                  if (playerMP >= XXX){
                    playerDMG = AAA - monsterDEF;
                    monsterHP -= playerDMG;
                    playerMP -= XXX;
                    cout << "Player's RAZOR SHURIKEN! Damage: " << playerDMG << endl;
                  }
                  else {
                    cout << "Not enough MP" << endl;
                  }
                  break;
                  
                case 2:
                  if (playerMP >= YYY){
                    playerDMG = BBB - monsterDEF;
                    monsterHP -= playerDMG;
                    playerMP -= YYY;
                    cout << "Player's SHADOW SLASH! Damage: " << playerDMG << endl;
                  }
                  else {
                    cout << "Not enough MP" << endl;
                  }
                  break;
                  
                case 3:
                   if (playerMP >= ZZZ){
                    playerHP += CCC;
                    playerMP -= ZZZ;
                    cout << "Player's DODGE! HP + " << CCC << endl;
                  }
                  else {
                    cout << "Not enough MP" << endl;
                  }
                  break;
                  
                default:
                  cout << "Invalid choice." << endl;
                  break;
              }
            }
            
            else if (character == 4){
              cout << "1. ICATHIAN RAIN (Damage: AAA, Mana Required: XXX) / 2. VOID SEEKER (Damage: BBB, Mana Required: YYY) / 3. HEAL (HP +CCC, Mana Required: ZZZ)" << endl;
              cin >> playerSkillChoice;
              switch (playerSkillChoice){
                case 1:
                  if (playerMP >= XXX){
                    playerDMG = AAA - monsterDEF;
                    monsterHP -= playerDMG;
                    playerMP -= XXX;
                    cout << "Player's ICATHIAN RAIN! Damage: " << playerDMG << endl;
                  }
                  else {
                    cout << "Not enough MP" << endl;
                  }
                  break;
                  
                case 2:
                  if (playerMP >= YYY){
                    playerDMG = BBB - monsterDEF;
                    monsterHP -= playerDMG;
                    playerMP -= YYY;
                    cout << "Player's VOID SEEKER! Damage: " << playerDMG << endl;
                  }
                  else {
                    cout << "Not enough MP" << endl;
                  }
                  break;
                  
                case 3:
                   if (playerMP >= ZZZ){
                    playerHP += CCC;
                    playerMP -= ZZZ;
                    cout << "Player's HEAL! HP + " << CCC << endl;
                  }
                  else {
                    cout << "Not enough MP" << endl;
                  }
                  break;
                  
                default:
                  cout << "Invalid choice." << endl;
                  break;
              }
            }
              
            break;
          
          case 3:
            cout << "You cannot flee from the monster!" << endl;
            continue;
        }
        
        monsterChoice = rand() % 2;
        
        if (monsterChoice == 0){                             //monster auto attack
          monsterDMG = monsterATK - playerDEF;
          AVD = rand() % 101 + playerAVD;
          if (AVD >=100){
            cout << "Monster attack miss!" << endl;
          }
          else {
            playerHP -= monsterDMG;
            cout << "You have been attacked by the monster! Damage: " << monsterDMG << endl;
          }
          
        else if (monsterChoice == 1 && monsterMP >= XXX){                       //monster skills
          monsterSkill = rand() % 2;
          if (monsterSkill == 0){
            monsterDMG = AAA - playerDEF;
            playerHP -= monsterDMG;
            monsterMP -= XXX;
            cout << "Monster's SKILL 1! Damage: " << monsterDMG << endl;
          }
          else if (monsterSkill == 1){
            monsterDMG = BBB - playerDEF;
            playerHP -= monsterDMG;
            monsterMP -= XXX;
            cout << "Monster's SKILL 2! Damage: " << monsterDMG << endl;
          }
          
      else if (monsterHP <= 0){
        cout << "You have defeated the monster!" << endl << "VICTORY!" << "Game Terminated." << endl;
        system("pause");
      }
        
      else if (playerHP <= 0){
        cout << "You have been defeated by the monster!" << endl << "DEFEAT!" << "Game Terminated." << endl;
        system("pause");
      }
      
       
