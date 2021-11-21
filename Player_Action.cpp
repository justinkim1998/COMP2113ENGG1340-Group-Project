#include <iostream>
#include <fstream>
using namespace std;

void player_action(character, playerChoice, Data player[], Data monster[]){
     int playerSkillChoice = 0;
     
     switch (playerChoice){                                                  //player choice between 1 and 3, different actions
          
          case 1:                                                               //if the player chooses action 1: auto attack
            CRT = rand % 101 + playerCRT;                                       //generates random number from 0 to 100, if add up with playerCRT greater than 100, then critical hit
            
            if (CRT > 100)
            {
              player[0].DMG = player[0].ATK * 1.3 - monster[0].DEF;
              monster[0].HP -= player[0].DMG;
              cout << "Critical hit!!! Damage: " << player[0].DMG << endl;
            }
            
            else 
            {
              player[0].DMG = player[0].ATK - monster[0].DEF;
              monster[0].HP -= player[0].DMG;
              cout << "You have attacked the monster! Damage: " << player[0].DMG << endl;
            }
            break;
            
          case 2:                                                               //if the player chooses action 2: use skills
            cout << "Which skill will you use?" << endl;
            
            if (character == 1){                                                //if the player chooses character 1
              cout << "1. ALPHA STRIKE (Damage: AAA, Mana Required: XXX) / 2. JUDGMENT (Damage: BBB, Mana Required: YYY) / 3. MEDITATE (HP +CCC, Mana Required: ZZZ)" << endl;
              cin >> playerSkillChoice;
              
              switch (playerSkillChoice)
              {                                       //player choice between 1 and 3, different skills used
                case 1:                                                         //if the player chooses skill 1 of char 1
                  if (player[0].MP >= XXX)
                  {
                    player[0].DMG = AAA - monster[0].DEF;
                    monster[0].HP -= player[0].DMG;
                    player[0].MP -= XXX;
                    cout << "Player's ALPHA STRIKE! Damage: " << player[0].DMG << endl;
                  }
                  
                  else
                  {
                    cout << "Not enough MP" << endl;
                  }
                  break;
                  
                case 2:                                                         //if the player chooses skill 2 of char 1
                  if (playerMP >= YYY)
                  {
                    player[0].DMG = BBB - monster[0].DEF;
                    monster[0].HP -= player[0].DMG;
                    player[0].MP -= YYY;
                    cout << "Player's JUDGMENT! Damage: " << player[0].DMG << endl;
                  }
                  else 
                  {
                    cout << "Not enough MP" << endl;
                  }
                  break;
                  
                case 3:                                                         //if the player chooses skill 3 of char 1
                  if (playerMP >= ZZZ)
                  {
                    player[0].HP += CCC;
                    player[0].MP -= ZZZ;
                    cout << "Player's MEDITATE! HP + " << CCC << endl;
                  }
                  else 
                  {
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
                  if (playerMP >= XXX)
                  {
                    player[0].DMG = AAA - monster[0].DEF;
                    monster[0].HP -= player[0].DMG;
                    player[0].MP -= XXX;
                    cout << "Player's ETHEREAL CHAINS! Damage: " << player[0].DMG << endl;
                  }
                  
                  else 
                  {
                    cout << "Not enough MP" << endl;
                  }
                  break;
                  
                case 2:                                                         //if the player chooses skill 2 of char 2
                  if (playerMP >= YYY)
                  {
                    player[0].DMG = BBB - monster[0].DEF;
                    monster[0].HP -= player[0].DMG;
                    player[0].MP -= YYY;
                    cout << "Player's DISTORTION! Damage: " << player[0].DMG << endl;
                  }
                  else 
                  {
                    cout << "Not enough MP" << endl;
                  }
                  break;
                  
                case 3:                                                         //if the player chooses skill 3 of char 2
                  if (playerMP >= ZZZ)
                  {
                    player[0].HP += CCC;
                    player[0].MP -= ZZZ;
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
                  if (player[0].MP >= XXX)
                  {
                    player[0].DMG = AAA - monster[0].DEF;
                    monster[0].HP -= player[0].DMG;
                    player[0].MP -= XXX;
                    cout << "Player's RAZOR SHURIKEN! Damage: " << player[0].DMG << endl;
                  }
                  else
                  {
                    cout << "Not enough MP" << endl;
                  }
                  break;
                  
                case 2:                                                         //if the player chooses skill 2 of char 3
                  if (player[0].MP >= YYY)
                  {
                    player[0].DMG = BBB - monster[0].DEF;
                    monster[0].HP -= player[0].DMG;
                    player[0].MP -= YYY;
                    cout << "Player's SHADOW SLASH! Damage: " << player[0].DMG << endl;
                  }
                  else 
                  {
                    cout << "Not enough MP" << endl;
                  }
                  break;
                  
                case 3:                                                         //if the player chooses skill 3 of char 3
                   if (player[0].MP >= ZZZ)
                   {
                    player[0].HP += CCC;
                    player[0].MP -= ZZZ;
                    cout << "Player's DODGE! HP + " << CCC << endl;
                  }
                  else 
                  {
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
                  if (player[0].MP >= XXX)
                  {
                    player[0].DMG = AAA - monster[0].DEF;
                    monster[0].HP -= player[0].DMG;
                    player[0].MP -= XXX;
                    cout << "Player's ICATHIAN RAIN! Damage: " << player[0].DMG << endl;
                  }
                  else 
                  {
                    cout << "Not enough MP" << endl;
                  }
                  break;
                  
                case 2:                                                         //if the player chooses skill 2 of char 4
                  if (player[0].MP >= YYY)
                  {
                    player[0].DMG = BBB - monster[0].DEF;
                    monster[0].HP -= player[0].DMG;
                    player[0].MP -= YYY;
                    cout << "Player's VOID SEEKER! Damage: " << player[0].DMG << endl;
                  }
                  else 
                  {
                    cout << "Not enough MP" << endl;
                  }
                  break;
                  
                case 3:                                                         //if the player chooses skill 3 of char 4
                   if (player[0].MP >= ZZZ)
                   {
                    player[0].HP += CCC;
                    player[0].MP -= ZZZ;
                    cout << "Player's HEAL! HP + " << CCC << endl;
                  }
                  else 
                  {
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
}
