#include <iostream>
using namespace std;

int main(){
  srand(time(0));
  int playerHP, playerMp, playerATK, playerDEF, playerAVD, playerCRT, monsterHP, monsterMP, monsterATK, monsterDEF;
  
  cout << "=======WELCOME TO THE FIGHT GAME.=======" << endl << endl;
  while (True){
    cout << "Choose a character." << endl << "1.KNIGHT 2.MAGE 3.ASSASSIN 4.ARCHER" << endl << endl;
    cin >> choose;
    switch (choose){
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
    
      
