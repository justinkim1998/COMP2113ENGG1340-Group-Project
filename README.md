# COMP2113ENGG1340-Group-Project
Members: Seonhyeok Kim (3035549251), Yong Hyun Kwon (3035555626)
Description: Monster fight game, choose a character with certain stats: HP(health point), MP(mana), ATK(attack), DEF(defense), AVD(avoid), CRT(critical), encounter a wild monster with certain stats: HP, MP, ATK, DEF. The player can choose to fight (auto attack or use certain skills which requires MP) or flee. The player and the monster take turns to attack each other. Critical rate applied when the player attacks and avoid rate applied when the monster attacks. The game ends when one side is beaten (HP <= 0).
Features to implement: 
1. Generation of random game sets or events: Apply random probability on AVD so that the player can avoid the monster's attack by a certain chance, and on CRT so that the player can attack the monster with a greater number of ATK by a certain chance. THe monster type is also decided randomly.
2. Data structures for storing game status: For each player's character/monster, store the stats in an array. 
3. Dynamic memory management: To utilize memory efficiently, set up the size of arrays that we only need in order to prevent the arrays from overstoring memories. 
4. File input/output: After each turn, save the player's and the monster's status into an output file. When the game is resumed, the output file is read and the game continues.
5. Program codes in multiple files: Stats of the player's characters/monsters from various files.
