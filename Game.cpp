#include <iostream>
#include <fstream>
using namespace std;

struct Data{
  int HP;       //HP for life
  int MP;       //MP for skills 
  int ATK;      //ATK for attack
  int DEF;      //DEF for defense
  int AVD;      //AVD for avoid rate
  int CRT;      //CRT for critical damage 
  int DMG;      //DMG for damage
};  

int main(){
  int character;
  srand(time(0));       //for random number generating
  
  Data *player;         //create a dynamic array for the player
  player = new Data[1];
  
  Data *monster;
  monster = new Data[1];  //create a dynamic array for the monster
  
  cout << "=======WELCOME TO THE FIGHT GAME.=======" << endl << endl;
  while (true){
    cout << "Choose a character." << endl << "1.KNIGHT 2.MAGE 3.ASSASSIN 4.SHOOTER" << endl << endl;
    cin >> character;
    switch (character){                                                         //player choice between 1 and 4, different characters
      case 1:                                                                   //if player chooses char 1
        cout << "You have chosen the KNIGHT." << endl;
        player[0].HP=500;
        player[0].MP=100;
        player[0].ATK=50;
        player[0].DEF=20;
        player[0].AVD=10;
        player[0].CRT=30;
        break;
        
      case 2:                                                                   //if player chooses char 2
        cout << "You have chosen the MAGE." << endl;
        player[0].HP=350;
        player[0].MP=200;
        player[0].ATK=20;
        player[0].DEF=10;
        player[0].AVD=10;
        player[0].CRT=15;
        break;
        
      case 3:                                                                   //if player chooses char 3
        cout << "You have chosen the ASSASSIN." << endl;
        player[0].HP=;
        player[0].MP=;
        player[0].ATK=;
        player[0].DEF=;
        player[0].AVD=;
        player[0].CRT=;
        break;
        
      case 4:                                                                   //if player chooses char 4
        cout << "You have chosen the SHOOTER." << endl;
        player[0].HP=;
        player[0].MP=;
        player[0].ATK=;
        player[0].DEF=;
        player[0].AVD=;
        player[0].CRT=;
        break;
        
      default:
        cout << "Invalid choice. Please choose again." << endl;
        continue;
    }
    cout << "HP: " << player[0].HP << endl << "MP: " << player[0].MP << endl << "Attack: " << player[0].ATK << endl << "Defense: " << player[0].DEF << endl << "Avoid: " << player[0].AVD << endl << "Critical: " << player[0].CRT << endl << "============================================" << endl;
    
    int choice = rand() % 3 + 1;                                               //generated random number between 1 and 3 to decide which monster will appear
    switch (choice){
      case 1:                                                                   //monster 1 appears if random number generated is 1
        cout << "A wild ZOMBIE has appeared!" << endl;
        monster[0].HP=;
        monster[0].MP=;
        monster[0].ATK=;
        monster[0].DEF=;
        monster[0].AVD=;
        monster[0].CRT=;
        break;
        
      case 2:                                                                   //monster 2 appears if random number generated is 2
        cout << "A wild XXX has appeared!" << endl;
        monster[0].HP=;
        monster[0].MP=;
        monster[0].ATK=;
        monster[0].DEF=;
        monster[0].AVD=;
        monster[0].CRT=;
        break;
        
      case 3:                                                                   //monster 3 appears if random number generated is 3
        cout << "A wild XXX has appeared!" << endl;
        monster[0].HP=;
        monster[0].MP=;
        monster[0].ATK=;
        monster[0].DEF=;
        monster[0].AVD=;
        monster[0].CRT=;
        break;
    }
    cout << "Monster HP: " << monster[0].HP << endl << "Monster MP: " << monster[0].MP << endl << "Monster Attack: " << monster[0].ATK << endl << "Monster Defense: " << monster[0].DEF << endl << "Monster Avoid: " << monster[0].AVD << endl << "Monster Critical: " << monster[0].CRT << endl << "============================================" << endl;
    
    int playerChoice;
    int playerSkillChoice;
    
   while (playerHP > 0 && monsterHP > 0){
        cout << "Remaining player HP: " << playerHP << endl << "Remaining player MP: " << playerMP << endl << endl;
        cout << "Remaining monster HP: " << monsterHP << endl << "Remaining monster MP: " << monsterMP << endl << endl;
        cout << "============================================" << endl;
        cout << "What action will the player take?" << endl << "1.AUTO ATTACK 2.SKILLS 3.FLEE" << endl;
        
        cin >> playerChoice;
        
        player_action(character, playerChoice, player);
        
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
