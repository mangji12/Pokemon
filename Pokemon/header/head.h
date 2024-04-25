#ifndef head_h
#define head_h

#include <stdio.h>
#include <stdlib.h>

enum Type {FIRE, WATER, GRASS};

typedef struct POKEMON
{
    char name[20];
    char nickname[20];
    char type[10];
    int min_power;
    int min_hp;
    int power;
    int hp;
    
    struct POKEMON* next;
} POKEMON;

typedef struct TRAINER
{
    int money;
    POKEMON* pokemon_list; // 동적 배열 사용
} TRAINER;

// 게임 시작
void beginGame(void);

// 시작 후 포켓몬 데이터 로드
void loadPokemon(void);
void printPokemon(void);
POKEMON* searchlist(char*);

// 포켓몬 선택 후 저장 함수
void choosePokemon(TRAINER*, char);
void deletePokemon(TRAINER*, POKEMON*);
void addPokemon(TRAINER* trainer, char*);
POKEMON * createPokemon(char*, char*, char*, int, int);

// 포켓몬 도감 정보 함수
void loadData(void);
void printPokemon(void);
void freePokemon(void);

// 포켓몬, 트레이너 구조체 업데이트 함수
void initPokemon(char *, char *, int, int);
void initTrainer(void);

#endif
