# COMP2113ENGG1340-Group13-Project
Members: 

Seonhyeok Kim (3035549251), 
Yonghyun Kwon (3035555626)


Description: 

Monster fight game, choose a character with certain stats: HP(health point), MP(mana), ATK(attack), DEF(defense), AVD(avoid rate), CRT(critical hit), encounter a wild monster with certain stats: HP, MP, ATK, DEF. The player can choose to fight (auto attack or use certain skills which requires MP) or flee. The player and the monster take turns to attack each other. Critical rate applied when the player attacks and avoid rate applied when the monster attacks. The game ends when one side is beaten (HP <= 0).


Features implemented: 
1. Generation of random game sets or events: Apply random probability using random number generator on AVD so that the player can avoid the monster's attack by a certain chance, and on CRT so that the player can attack the monster with 30% higher ATK by a certain chance. The monster type, whether the monster uses skills or not, and which skill the monster will use are also decided using the random number generator.
2. Data structures for storing game status: For each player's character/monster, store the stats in an dynamic array using structure. Apply fout to store the current status of player/monster HP and MP and fin to read the saved file in the beginning of the restarted game so that the game can be continued at the current progress even if the game is stopped in the middle. 
3. Dynamic memory management: To utilize memory efficiently, set up the size of arrays that we only need in order to prevent the arrays from overstoring memories. Use dynamic array for the player's and monster's stats. Even if the size is set up at the beginning, since it is a dynamic array, we could add more datat to it. Delete dynamic array when the game ends.
4. File input/output: After each turn, save the player's and the monster's status into an output file ("Game_Status.txt"). When the game is resumed, the file("Game_Status.txt) is read and the game continues with the saved stats(current progress). The file will be deleted after a winner is decided, so that we won't be able to use the previous game status since it is already a finished game. If the player wants to continue with the previous games status, but if there is no previous saved game data, then the program will terminate. 
5. Program codes in multiple files: Player's action and monster's action in another .cpp and .h file. Use Makefile to call the multiple files together.
No non-standard C/C++ libraries included.


Compilation and execution instructions ('Quick start' of the game): 


First, choose whether to use the previous game status or not. If there is no previous game status, then the program will terminate. Then, choose the character that you want. After you have chosen your character, a random monster will be generated. Use skills and auto attacks to defeate the monster. If you win the monster, the program will output victory. However, if you lose, the program will output defeat.
