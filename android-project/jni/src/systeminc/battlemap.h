/************************/
/*	battleMap.h			*/
/************************/
#ifndef _BATTLE_MAP_H_
#define _BATTLE_MAP_H_

// ????????????
#define BATTLE_MAP_FILES 220

// ?????????�k?
extern int BattleMapNo;

// ??????��????????????????�� ***************************/
bool ReadBattleMap( int no );

// ??????��? ***********************************************************/
void DrawBattleMap( void );

#endif