Problem 11.14 - Cricket Structure Enhancement
Using cricket, declare an array player with 50 elements and write a program to:

Read details of 50 players

Print a team-wise list of players along with their batting average

C Code Implementation
c
Copy
Edit
#include <stdio.h>
#include <string.h>

struct Cricket {
    char playerName[50];
    char teamName[50];
    float battingAverage;
};

// Function to input player details
void inputPlayers(struct Cricket players[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for player %d:\n", i + 1);
        printf("Player Name: ");
        scanf(" %[^\n]", players[i].playerName);
        printf("Team Name: ");
        scanf(" %[^\n]", players[i].teamName);
        printf("Batting Average: ");
        scanf("%f", &players[i].battingAverage);
    }
}

// Function to display team-wise list
void displayTeamWise(struct Cricket players[], int n) {
    printf("\nTeam-wise Player List:\n");
    for (int i = 0; i < n; i++) {
        printf("Team: %s, Player: %s, Batting Avg: %.2f\n",
               players[i].teamName, players[i].playerName, players[i].battingAverage);
    }
}

int main() {
    int n = 50;
    struct Cricket players[n];

    // Input player details
    inputPlayers(players, n);

    // Display team-wise list
    displayTeamWise(players, n);

    return 0;
}
