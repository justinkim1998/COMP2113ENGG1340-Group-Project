#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
#include "Player.h"
#include "Monster.h"
using namespace std;

int main(){
    srand(time(0));   //for random number generating

    int character;   //declare character for choosing choosing your champion

    Data *player;                   //create a dynamic array for the player
    player = new Data[1];

    Data *monster;                  //create a dynamic array for the monster
    monster = new Data[1];

    int choice = rand() % 3 + 1;        //generated random number between 1 and 3 to decide which monster will appear                                                       //create a dynamic array for the monster

    cout << "=======WELCOME TO THE FIGHT GAME.=======" << endl << endl;

    char select;
    cout << "Do you want to resume from your last game? [Y/N] ";    //choose whether or not to use previous game status
    cin >> select;

    if (select == 'Y' || select == 'y'){
      ifstream fin;
      fin.open("Game_Status.txt");  //open the file "Game_Status.txt"
      if ( fin.fail() )
      {
          cout << "There is no saved game status!!" << endl;
          exit(1);      //if no saved previous game status, exit the program
      }
      else
      {
          int record = 0;
          int i = 0;
          while (fin >> record)     //store the values in the txt to the variables
          {
              if (i == 0){
                  player[0].HP = record;
              }
              else if (i == 1){
                  player[0].MP = record;
              }
              else if (i == 2){
                  player[0].ATK = record;
              }
              else if (i == 3){
                  player[0].DEF = record;
              }
              else if (i == 4){
                  player[0].AVD = record;
              }
              else if (i == 5){
                  player[0].CRT = record;
              }
              else if (i == 6){
                  monster[0].HP = record;
              }
              else if (i == 7){
                  monster[0].MP = record;
              }
              else if (i == 8){
                  monster[0].ATK = record;
              }
              else if (i == 9){
                  monster[0].DEF = record;
              }
              else if (i == 10){
                  character = record;
              }
              else if (i == 11){
                  choice = record;
              }
              i += 1;
          }
          if (character == 1){
              cout << "You have chosen the KNIGHT." << endl;
          }
          else if (character == 2){
              cout << "You have chosen the MAGE." << endl;
          }
          else if (character == 3){
              cout << "You have chosen the ASSASSIN." << endl;
          }
          else if (character == 4){
              cout << "You have chosen the SHOOTER." << endl;
          }
          cout << "HP: " << player[0].HP << endl << "MP: " << player[0].MP << endl << "Attack: " << player[0].ATK << endl << "Defense: " << player[0].DEF << endl << "Avoid: " << player[0].AVD << endl << "Critical: " << player[0].CRT << endl << "============================================" << endl;

          switch (choice){
            case 1:
                cout << "A wild ZOMBIE has appeared!" << endl;
                break;

            case 2:
                cout << "A wild GOLEM has appeared!" << endl;
                break;

            case 3:
                cout << "A wild OAK has appeared!" << endl;
                break;
           }
           cout << "Monster HP: " << monster[0].HP << endl << "Monster MP: " << monster[0].MP << endl << "Monster Attack: " << monster[0].ATK << endl << "Monster Defense: " << monster[0].DEF << endl;
      }
    }


    else{       //start game from the beginning
        cout << "Choose a character." << endl << "1.KNIGHT 2.MAGE 3.ASSASSIN 4.SHOOTER" << endl << endl;
        cout << "Your choice: ";
        cin >> character;       //player choice between 1 and 4, different characters
        cout << endl;

        while (true){
          if (character == 1)
          {
            cout << "You have chosen the KNIGHT." << endl;
            player[0].HP=500;
            player[0].MP=100;
            player[0].ATK=50;
            player[0].DEF=20;
            player[0].AVD=10;
            player[0].CRT=30;
            break;
          }

          else if (character == 2)
          {
            cout << "You have chosen the MAGE." << endl;
            player[0].HP=250;
            player[0].MP=200;
            player[0].ATK=20;
            player[0].DEF=10;
            player[0].AVD=10;
            player[0].CRT=20;
            break;
          }

          else if (character == 3)
          {
            cout << "You have chosen the ASSASSIN." << endl;
            player[0].HP=350;
            player[0].MP=120;
            player[0].ATK=40;
            player[0].DEF=15;
            player[0].AVD=20;
            player[0].CRT=25;
            break;
          }

          else if (character == 4)
          {
            cout << "You have chosen the SHOOTER." << endl;
            player[0].HP=300;
            player[0].MP=130;
            player[0].ATK=60;
            player[0].DEF=10;
            player[0].AVD=10;
            player[0].CRT=20;
            break;
          }

          else
          {
            cout << "Invalid choice. Please choose again." << endl;
          }

        }


        cout << "HP: " << player[0].HP << endl << "MP: " << player[0].MP << endl << "Attack: " << player[0].ATK << endl << "Defense: " << player[0].DEF << endl << "Avoid: " << player[0].AVD << endl << "Critical: " << player[0].CRT << endl << "============================================" << endl;

        switch (choice){
            case 1:                                                         //monster 1 appears if random number generated is 1
                cout << "A wild ZOMBIE has appeared!" << endl;
                monster[0].HP= 450;
                monster[0].MP= 100;
                monster[0].ATK= 30;
                monster[0].DEF= 20;
                break;

            case 2:                                                         //monster 2 appears if random number generated is 2
                cout << "A wild GOLEM has appeared!" << endl;
                monster[0].HP= 470;
                monster[0].MP= 20;
                monster[0].ATK= 40;
                monster[0].DEF= 30;
                break;

            case 3:                                                         //monster 3 appears if random number generated is 3
                cout << "A wild OAK has appeared!" << endl;
                monster[0].HP= 430;
                monster[0].MP= 60;
                monster[0].ATK= 60;
                monster[0].DEF= 10;
                break;
        }
        cout << "Monster HP: " << monster[0].HP << endl << "Monster MP: " << monster[0].MP << endl << "Monster Attack: " << monster[0].ATK << endl << "Monster Defense: " << monster[0].DEF << endl;
    }

    int playerChoice;
    int playerSkillChoice;

    while (player[0].HP > 0 && monster[0].HP > 0){
        cout << "============================================" << endl;
        cout << "Remaining player HP: " << player[0].HP << endl << "Remaining player MP: " << player[0].MP << endl << endl;
        cout << "Remaining monster HP: " << monster[0].HP << endl << "Remaining monster MP: " << monster[0].MP << endl;
        cout << "============================================" << endl;
	cout << "Do you want to continue the game? [Y/N] ";
        cin >> select;
	cout << "============================================" << endl;


        if (select == 'N' || select == 'n'){            //terminate game if player wants to stop playing game
            cout << "Game Terminated!!" << endl;
            exit(0);
        }

        cout << "What action will the player take?" << endl << "1.AUTO ATTACK 2.SKILLS 3.FLEE" << endl << endl;

        ofstream fout;
        fout.open("Game_Status.txt");

        if (fout.fail()){                               //check if there is no error in the file, exit if so
         cout << "File does not exist" << endl;
         exit(1);
        }

        cout << "Your Choice: ";
        cin >> playerChoice;
        cout << endl;

        player_action(character, playerChoice, player, monster);        //calls the function to choose an action for the player

        int monsterChoice = rand() % 2;                                 //generates random number between 0 and 1 to decide which action the monster will take, 0 auto attack and 1 use skills
        monster_action(character,monsterChoice,monster,player);         //calls the function to choose an action for the monster

        fout << player[0].HP << " " << player[0].MP << " " << player[0].ATK << " " <<player[0].DEF << " " <<player[0].AVD << " " << player[0].CRT << " ";
        fout << monster[0].HP << " " << monster[0].MP << " " << monster[0].ATK << " " << monster[0].DEF << " " << character << " " << choice;           //save game status in "Game_Status.txt"

        fout.close();   //close file
    }

    cout << "============================================" << endl;
    if (monster[0].HP <= 0){                                                      //monster hp below 0
        cout << "You have defeated the monster!" << endl << "VICTORY!" << endl << "Game Terminated." << endl;
    }

    else if (player[0].HP <= 0){                                                  //player hp below 0
        cout << "You have been defeated by the monster!" << endl << "DEFEAT!" << endl << "Game Terminated." << endl;
    }

    delete [] player;                                                             //use delete to free the dynamic array
    delete [] monster;
    remove("Game_Status.txt");      //delete the saved data of the game after the game finishes

    return 0;

}
