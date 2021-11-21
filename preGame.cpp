#include "preGame.h"

void write_file(Data s);
void read_file(Data &s);

void write_file(Data s){
    ofstream foutData("player_status.txt");
    if (foutData.fail()){
        cout << "Error in player_status.txt writing!" << endl;
        exit(1);
    }
    foutData <<  s.playerHP << " " << s.playerMP << endl;
    foutData.close();
    
    ofstream foutDataM("monster_status.txt");
    if (foutDataM.fail()){
        cout << "Error in monster_status.txt writing!" << endl;
        exit(1);
    }
    foutDataM << s.monsterHP << " " << s.monsterMP << endl;
    foutDataM.close;
}

void read_file(Data &s){
    ifstream finData("player_status.txt");
    if (finData.fail()){
        cout << "You have no data stored! Start from the beginning!" << endl;
    }
    else {
        finData >> s.playerHP >> " " >> s.playerMP;
        finData.close();
    }
        
    ifstream finDataM("monster_status.txt");
    if (finDataM.fail()){
        cout << "You have no data stored! Start from the beginning!" << endl;
    }
    else{
        finDataM >> s.monsterHP >> " " >> s.monsterMP;
        finDataM.close();
    }
}
