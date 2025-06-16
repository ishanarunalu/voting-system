#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

#define MAX_CANDIDATES 50
#define MAX_VOTERS 1000
#define NAME_LEN 50
#define ID_LEN 20


typedef struct {
    char name[NAME_LEN];
    int votes;
} Candidate;

typedef struct {
    char id[ID_LEN];
    char password[ID_LEN];
    int hasVoted;
} Voter;

Candidate candidates[MAX_CANDIDATES];
Voter voters[MAX_VOTERS];
int candidateCount = 0;
int voterCount = 0;

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void displayHeader();
void registerCandidates();
void registerVoters();
void mainMenu();
void castVote();
void showResults();
void findWinner();
int authenticateVoter(char id[]);
void clearInputBuffer();

int main() {
    displayHeader();
    registerCandidates();
    registerVoters();
    mainMenu();
    return 0;
}


void displayHeader() {
    setColor(11); // Cyan
    printf("==========================================================\n");
    printf("=  W   W  EEEEE  L       CCCC   OOO   M         M  EEEEE =\n");
    printf("=  W   W  E      L      C      O   O  M M     M M  E     =\n");
    printf("=  W W W  EEEE   L      C      O   O  M  M   M  M  EEEE  =\n");
    printf("=  WW WW  E      L      C      O   O  M   M M   M  E     =\n");
    printf("=  W   W  EEEEE  LLLLL   CCCC   OOO   M    M    M  EEEEE =\n");
    printf("==========================================================\n");
    printf("=                    TO VOTING SYSTEM                    =\n");
    printf("==========================================================\n\n");
    setColor(7); // Reset
}