#include "preGame.h"

void write_file(Status s);
void read_file(Status &s);

void write_file(Status &s){
    ofstream foutStatus("player_status.txt");
    if (foutStatus.fail()){
        cout << "Error in player_status.txt writing!" << endl;
        exit(1);
    }
    foutStatus <<  s.playerHP << " " << s.playerMP << endl;
    foutStatus.close();
    
    ofstream foutStatusM("monster_status.txt");
    if (foutStatusM.fail()){
        cout << "Error in monster_status.txt writing!" << endl;
        exit(1);
    }
    foutStatusM << s.monsterHP << " " << s.monsterMP << endl;
    foutStatusM.close;
}

void read_file(Status &s){
    ifstream finStatus("player_status.txt");
    if (finStatus.fail()){
        cout << "You have no data stored! Start from the beginning!" << endl;
    }
    else {
        finStatus >> s.playerHP >> " " >> s.playerMP;
        finStatus.close();
    }
        
    ifstream finStatusM("monster_status.txt");
    if (finStatusM.fail()){
        cout << "You have no data stored! Start from the beginning!" << endl;
    }
    else{
        finStatus >> s.monsterHP >> " " >> s.monsterMP;
        finStatusM.close();
    }
}
