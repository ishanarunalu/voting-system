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

}