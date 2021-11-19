#include <iostream>
using namespace std;

int main(){
  srand(time(0));                                                                //for random number generating
  int playerHP, playerMp, playerATK, playerDEF, playerAVD, playerCRT, playerDMG, monsterHP, monsterMP, monsterATK, monsterDEF, monsterDMG;
  
  cout << "=======WELCOME TO THE FIGHT GAME.=======" << endl << endl;
  while (True){
    cout << "Choose a character." << endl << "1.KNIGHT 2.MAGE 3.ASSASSIN 4.SHOOTER" << endl << endl;
    cin >> character;
    switch (character){                                                         //player choice between 1 and 4, different characters
      case 1:                                                                   //if player chooses char 1
        cout << "You have chosen the KNIGHT." << endl;
        playerHP=500;
        playerMP=100;
        playerATK=50;
        playerDEF=20;
        playerAVD=10;
        playerCRT=30;
        break;
        
      case 2:                                                                   //if player chooses char 2
        cout << "You have chosen the MAGE." << endl;
        playerHP=350;
        playerMP=200;
        playerATK=20;
        playerDEF=10;
        playerAVD=10;
        playerCRT=15;
        break;
        
      case 3:                                                                   //if player chooses char 3
        cout << "You have chosen the ASSASSIN." << endl;
        playerHP=;
        playerMP=;
        playerATK=;
        playerDEF=;
        playerAVD=;
        playerCRT=;
        break;
        
      case 4:                                                                   //if player chooses char 4
        cout << "You have chosen the SHOOTER." << endl;
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
    
    int monster = rand() % 3 + 1;                                               //generated random number between 1 and 3 to decide which monster will appear
    switch (monster){
      case 1:                                                                   //monster 1 appears if random number generated is 1
        cout << "A wild ZOMBIE has appeared!" << endl;
        monsterHP=;
        monsterMP=;
        monsterATK=;
        monsterDEF=;
        monsterAVD=;
        monsterCRT=;
        break;
        
      case 2:                                                                   //monster 2 appears if random number generated is 2
        cout << "A wild XXX has appeared!" << endl;
        monsterHP=;
        monsterMP=;
        monsterATK=;
        monsterDEF=;
        monsterAVD=;
        monsterCRT=;
        break;
        
      case 3:                                                                   //monster 3 appears if random number generated is 3
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
      if (playerHP > 0 && monsterHP > 0){                                       //while both player and monster hp more than 0
        cout << "Remaining player HP: " << playerHP << endl << "Remaining player MP: " << playerMP << endl << endl;
        cout << "Remaining monster HP: " << monsterHP << endl << "Remaining monster MP: " << monsterMP << endl << endl;
        cout << "============================================" << endl;
        cout << "What action will the player take?" << endl << "1.AUTO ATTACK 2.SKILLS 3.FLEE" << endl;
        cin >> playerChoice;
        switch (playerChoice){                                                  //player choice between 1 and 3, different actions
          case 1:                                                               //if the player chooses action 1: auto attack
            CRT = rand % 101 + playerCRT;                                       //generates random number from 0 to 100, if add up with playerCRT greater than 100, then critical hit
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
            
          case 2:                                                               //if the player chooses action 2: use skills
            cout << "Which skill will you use?" << endl;
            if (character == 1){                                                //if the player chooses character 1
              cout << "1. ALPHA STRIKE (Damage: AAA, Mana Required: XXX) / 2. JUDGMENT (Damage: BBB, Mana Required: YYY) / 3. MEDITATE (HP +CCC, Mana Required: ZZZ)" << endl;
              cin >> playerSkillChoice;
              switch (playerSkillChoice){                                       //player choice between 1 and 3, different skills used
                case 1:                                                         //if the player chooses skill 1 of char 1
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
                  
                case 2:                                                         //if the player chooses skill 2 of char 1
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
                  
                case 3:                                                         //if the player chooses skill 3 of char 1
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
            
            else if (character == 2){                                           //if the player chooses character 2
              cout << "1. ETHEREAL CHAINS (Damage: AAA, Mana Required: XXX) / 2. DISTORTION (Damage: BBB, Mana Required: YYY) / 3. SHIELD (HP +CCC, Mana Required: ZZZ)" << endl;
              cin >> playerSkillChoice;
              switch (playerSkillChoice){                                       //player choice between 1 and 3, different skills used
                case 1:                                                         //if the player chooses skill 1 of char 1
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
                  
                case 2:                                                         //if the player chooses skill 2 of char 2
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
                  
                case 3:                                                         //if the player chooses skill 3 of char 2
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
            
            else if (character == 3){                                           //if the player chooses character 3
              cout << "1. RAZOR SHURIKEN (Damage: AAA, Mana Required: XXX) / 2. SHADOW SLASH (Damage: BBB, Mana Required: YYY) / 3. DODGE (HP +CCC, Mana Required: ZZZ)" << endl;
              cin >> playerSkillChoice;
              switch (playerSkillChoice){                                       //player choice between 1 and 3, different skills used
                case 1:                                                         //if the player chooses skill 1 of char 3
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
                  
                case 2:                                                         //if the player chooses skill 2 of char 3
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
                  
                case 3:                                                         //if the player chooses skill 3 of char 3
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
            
            else if (character == 4){                                           //if the player chooses character 4
              cout << "1. ICATHIAN RAIN (Damage: AAA, Mana Required: XXX) / 2. VOID SEEKER (Damage: BBB, Mana Required: YYY) / 3. HEAL (HP +CCC, Mana Required: ZZZ)" << endl;
              cin >> playerSkillChoice;
              switch (playerSkillChoice){                                       //player choice between 1 and 4, different skills used
                case 1:                                                         //if the player chooses skill 1 of char 4
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
                  
                case 2:                                                         //if the player chooses skill 2 of char 4
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
                  
                case 3:                                                         //if the player chooses skill 3 of char 4
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
          
          case 3:                                                               //if the player chooses action 3: to flee
            cout << "You cannot flee from the monster!" << endl;
            continue;
        }
        
        monsterChoice = rand() % 2;                                             //generates random number between 0 and 1 to decide which action the monster will take, 0 auto attack and 1 use skills
        
        if (monsterChoice == 0){                                                //monster auto attack if random number generated is 0
          monsterDMG = monsterATK - playerDEF;
          AVD = rand() % 101 + playerAVD;                                       //generates random number between 0 and 100, if add up with playerAVD greater than 100, monster attack miss
          if (AVD >=100){
            cout << "Monster attack miss!" << endl;
          }
          else {
            playerHP -= monsterDMG;
            cout << "You have been attacked by the monster! Damage: " << monsterDMG << endl;
          }
        }
          
        else if (monsterChoice == 1 && monsterMP >= XXX){                       //monster uses skills if random number generated is 1
          monsterSkill = rand() % 2;                                            //generates random number between 0 and 1 to decide which skill the monster will use, 0 'skill 1' and 1 'skill 2'
          if (monsterSkill == 0){                                               //monster skill 1 if random number generated is 0
            monsterDMG = AAA - playerDEF;
            playerHP -= monsterDMG;
            monsterMP -= XXX;
            cout << "Monster's SKILL 1! Damage: " << monsterDMG << endl;
          }
          else if (monsterSkill == 1){                                          //monster skill 2 if random number generated is 1
            monsterDMG = BBB - playerDEF;
            playerHP -= monsterDMG;
            monsterMP -= XXX;
            cout << "Monster's SKILL 2! Damage: " << monsterDMG << endl;
          }
        }
      }
      
      else if (monsterHP <= 0){                                                 //monster hp below 0
        cout << "You have defeated the monster!" << endl << "VICTORY!" << "Game Terminated." << endl;
        system("pause");
      }
        
      else if (playerHP <= 0){                                                  //player hp below 0
        cout << "You have been defeated by the monster!" << endl << "DEFEAT!" << "Game Terminated." << endl;
        system("pause");
      }
      
    } 
    system ("pause") 
    return 0;
  }
} 

// 이거 } 어디 분명 빼먹은거 같은데..
// declare 안 한 variables 분명 있을듯..
// 스탯 수치 정하기
// 스킬 이름 정하기
// 파일 분리 .h .cpp makefile 아몰랑 용현이가 알아서 하겠지.. (req.5)
// File input/output (loading/saving game status) 아몰랑 용현이가 알아서 하곘지..(req.2,4)
// readme.md 업데이트
// video demonstration
